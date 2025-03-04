// Fill out your copyright notice in the Description page of Project Settings.

#include "Characters/CEnemy.h"
#include "Global.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/CMovementComponent.h"
#include "Components/CStateComponent.h"
#include "Components/CStatusComponent.h"
#include "Components/CMontageComponent.h"
#include "Characters/CAnimInstance.h"
#include "GameFramework/CharacterMovementComponent.h"
//#include "Components/CWeaponComponent.h"

ACEnemy::ACEnemy()
{
	PrimaryActorTick.bCanEverTick = true;

    // Mesh에 Assign
    {
        GetMesh()->SetRelativeLocation(FVector(0, 0, -90));
        GetMesh()->SetRelativeRotation(FRotator(0, -90, 0));

        USkeletalMesh* mesh;
        CHelpers::GetAsset<USkeletalMesh>(&mesh, "SkeletalMesh'/Game/Character/Mesh/SK_Mannequin.SK_Mannequin'");
        GetMesh()->SetSkeletalMesh(mesh);

        TSubclassOf<UCAnimInstance> animInstance;
        CHelpers::GetClass<UCAnimInstance>(&animInstance, "AnimBlueprint'/Game/ABP_Character.ABP_Character_C'");
        GetMesh()->SetAnimClass(animInstance);
        GetCharacterMovement()->RotationRate = FRotator(0, 720, 0);

    }
    // ActorComponent
    {
        CHelpers::CreateActorComponent<UCMovementComponent>(this, &Movement, "Movement");
        CHelpers::CreateActorComponent<UCStateComponent>(this, &State, "State");
        CHelpers::CreateActorComponent<UCMontageComponent>(this, &Montages, "Montages");
        CHelpers::CreateActorComponent<UCStatusComponent>(this, &Status, "Status");
    }

}

void ACEnemy::BeginPlay()
{
	Super::BeginPlay();
    Create_DynamicMaterial(this);
    Change_Color(this, OriginColor);
    State->OnStateTypeChanged.AddDynamic(this, &ACEnemy::OnStateTypeChanged);
}

// Called every frame
void ACEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACEnemy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

//
// TakeDamage() --> State.SetHitMode()  --> OnStateTypeChanged()
// 휘발되는 데이터 : FDamageEvent const& DamageEvent


float ACEnemy::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
    float damage = Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);

    // Damage변수에 데이터 저장
    {
        Damage.power     = damage;
        Damage.Character = Cast<ACharacter>(EventInstigator->GetPawn());
        Damage.Causer    = DamageCauser;
        Damage.Event = (FActionDamageEvent*)&DamageEvent;
        Damage.Event->HitData->Montage = Montages->GetHitMontage(Damage.Event->HitIndex);

    }


    State->SetHitMode(); // 휘발되는 데이터 : FDamageEvent const& DamageEvent

	return damage;
}

void ACEnemy::OnStateTypeChanged(EStateType InPrevType, EStateType InNewType)
{
    switch (InNewType)
    {
    case EStateType::BackStep:  BackStep(); break;
    case EStateType::Roll:      Roll();     break;
    case EStateType::Hit:       Hit();     break;
    case EStateType::Dead:      Dead();     break;
    }
}

void ACEnemy::RestoreColor()
{
    GetWorld()->GetTimerManager().ClearTimer(RestoreColor_TimerHandle);
    Change_Color(this, OriginColor);
}

void ACEnemy::BackStep()
{
}

void ACEnemy::Roll()
{
}

void ACEnemy::Hit()
{
    // Health
    Status->Damage(Damage.power);
    Damage.power = 0.0f;
    // Color변경
    {
        Change_Color(this, FLinearColor::Red);
        FTimerDelegate timerDelegate;
        timerDelegate.BindUFunction(this, "RestoreColor");
        GetWorld()->GetTimerManager().SetTimer(RestoreColor_TimerHandle, timerDelegate, 0.2f, true);

    }
    // Damage
    {
        if (!!Damage.Event && Damage.Event->HitData)
        {
            // Montage run
            Damage.Event->HitData->PlayMontage(this);
            // HitStop
            Damage.Event->HitData->PlayHitStop(GetWorld());
            // Sound
            Damage.Event->HitData->PlaySoundWave(this);
            // Effect
            Damage.Event->HitData->PlayEffect(GetWorld(), GetActorLocation(), GetActorRotation());
        
            // Player로 바라보게 한다
            if (!Status->IsDead())
            {
                FVector start  = GetActorLocation();
                FVector target = Damage.Character->GetActorLocation();
                FVector direction = target - start;

                direction = direction.GetSafeNormal();
                LaunchCharacter(-direction * Damage.Event->HitData->Launch, false, false);
                SetActorRotation(UKismetMathLibrary::FindLookAtRotation(start, target));
            }
            if (Status->IsDead())
            {
                State->SetDeadMode();
                return;

            }
        }
    }

    Damage.Character = nullptr;
    Damage.Causer    = nullptr;
    Damage.Event     = nullptr;
    
}

void ACEnemy::Dead()
{
    // Dead된것은 Hit처리 안하기
    GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
    Montages->PlayDeadMode();
}

void ACEnemy::End_Hit()
{
    State->SetIdleMode();
}

void ACEnemy::End_Dead()
{
    Destroy();
}

