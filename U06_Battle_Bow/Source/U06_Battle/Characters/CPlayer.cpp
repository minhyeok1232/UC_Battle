#include "Characters/CPlayer.h"
#include "Global.h"
#include "Components/SkeletalMeshComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Components/CMovementComponent.h"
#include "Components/CStateComponent.h"
#include "Components/CMontageComponent.h"
#include "Characters/CAnimInstance.h"
#include "Components/CWeaponComponent.h"


ACPlayer::ACPlayer()
{
	PrimaryActorTick.bCanEverTick = true;

    // Comoponent
    {
        CHelpers::CreateComponent<USpringArmComponent>(this, &SpringArm, "SpringArm", GetMesh());
        CHelpers::CreateComponent<UCameraComponent>(this, &Camera, "Camera", SpringArm);
    }
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

        SpringArm->SetRelativeLocation(FVector(0, 0, 140));
        SpringArm->SetRelativeRotation(FRotator(0, 90, 0));
        SpringArm->TargetArmLength = 200;
        SpringArm->bDoCollisionTest = false;
        SpringArm->bUsePawnControlRotation = true;
        SpringArm->bEnableCameraLag = true;
    }
    // ActorComponent
    {
        CHelpers::CreateActorComponent<UCMovementComponent>(this, &Movement, "Movement");
        CHelpers::CreateActorComponent<UCStateComponent>(this, &State, "State");
        CHelpers::CreateActorComponent<UCMontageComponent>(this, &Montages, "Montages");
        CHelpers::CreateActorComponent<UCWeaponComponent>(this, &Weapon, "Weapon");
    }
   
}

void ACPlayer::BeginPlay()
{
    Super::BeginPlay();
    Movement->SetSpeed(ESpeedType::Run);  // 400
    Movement->DisableControlRotation();

    State->OnStateTypeChanged.AddDynamic(this, &ACPlayer::OnStateTypeChanged);

}

// Called every frame
void ACPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

    // MovementComponent에 입력 바인딩
    {
        PlayerInputComponent->BindAxis("MoveForward", Movement, &UCMovementComponent::OnMoveForward);
        PlayerInputComponent->BindAxis("MoveRight",  Movement, &UCMovementComponent::OnMoveRight);
        PlayerInputComponent->BindAxis("HorizontalLook", Movement, &UCMovementComponent::OnHorizontalLook);
        PlayerInputComponent->BindAxis("VerticalLook", Movement, &UCMovementComponent::OnVerticalLook);
    }
    {
        PlayerInputComponent->BindAction("Sprint", EInputEvent::IE_Pressed, Movement, &UCMovementComponent::OnSprint);
        PlayerInputComponent->BindAction("Sprint", EInputEvent::IE_Released, Movement, &UCMovementComponent::OnRun);
        PlayerInputComponent->BindAction("Avoid", EInputEvent::IE_Released, this, &ACPlayer::OnAvoid);
    }

    // 무기바인딩
    {
        PlayerInputComponent->BindAction("Fist", EInputEvent::IE_Pressed, Weapon, &UCWeaponComponent::SetFistMode);
        PlayerInputComponent->BindAction("Sword", EInputEvent::IE_Pressed, Weapon, &UCWeaponComponent::SetSwordMode);
        PlayerInputComponent->BindAction("Hammer", EInputEvent::IE_Pressed, Weapon, &UCWeaponComponent::SetHammerMode);
	    PlayerInputComponent->BindAction("Tornado", EInputEvent::IE_Pressed, Weapon, &UCWeaponComponent::SetTornadoMode);
	    PlayerInputComponent->BindAction("Warp", EInputEvent::IE_Pressed, Weapon, &UCWeaponComponent::SetWarpMode);
        PlayerInputComponent->BindAction("Around", EInputEvent::IE_Pressed, Weapon, &UCWeaponComponent::SetAroundMode);
        PlayerInputComponent->BindAction("Bow", EInputEvent::IE_Pressed, Weapon, &UCWeaponComponent::SetBowMode);

    }

    // Action바인딩
    {
        PlayerInputComponent->BindAction("Action", EInputEvent::IE_Pressed, Weapon, &UCWeaponComponent::DoAction);
    }
    // SubAction 바인딩
    {
        PlayerInputComponent->BindAction("SubAction", EInputEvent::IE_Pressed, this, &ACPlayer::OnRightButton);
        PlayerInputComponent->BindAction("SubAction", EInputEvent::IE_Released, this, &ACPlayer::OffRightButton);
    }
}

void ACPlayer::OnStateTypeChanged(EStateType InPrevType, EStateType InNewType)
{
    switch (InNewType)
    {
    case EStateType::BackStep:  BackStep(); break;
    case EStateType::Roll:      Roll(); break;
    }
}

void ACPlayer::OnAvoid()
{
    // Idle이고 Moving이 가는하면 회피동작

    CheckFalse(State->IsIdleMode()); 
    CheckFalse(Movement->CanMove());

    // 현재 Player방향
    float value = InputComponent->GetAxisValue("MoveForward");
    if (value > 0.0f)
        State->SetRollMode();
    else
        State->SetBackStepMode();

}

void ACPlayer::BackStep()
{
    Montages->PlayBackStepMode();
}

void ACPlayer::Roll()
{

    Montages->PlayRollMode();
}

void ACPlayer::Hitted()
{
}
// Interface에서 상속받은 함수들
void ACPlayer::End_Avoid()
{
    CLog::MessageDialog("avoid");
    Movement->DisableControlRotation();
    State->SetIdleMode();
}

void ACPlayer::End_Hit()
{
}

void ACPlayer::End_Dead()
{
}
// Command는 Weapon에서 하기로 했는데
// 파쿠르,Bow하고 구분하기 위해
void ACPlayer::OnRightButton()
{
    Weapon->SubAction_Pressed();
}

void ACPlayer::OffRightButton()
{
    Weapon->SubAction_Released();
}

