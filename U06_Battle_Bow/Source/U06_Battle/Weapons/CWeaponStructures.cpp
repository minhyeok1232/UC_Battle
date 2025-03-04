
#include "Weapons/CWeaponStructures.h"
#include "Global.h"
#include "GameFramework/Character.h"
#include "Components/CStateComponent.h"
#include "Components/CMovementComponent.h"
#include "Components/CMontageComponent.h"
#include "Animation/AnimMontage.h"

void FDoActionData::DoAction(ACharacter* InOwner)
{
	UCMovementComponent* movement = CHelpers::GetComponent<UCMovementComponent>(InOwner);
	if (!!movement)
	{
		if(bFixedCamera)
			movement->EnableFixedCamera();
		else
			movement->DisableFixedCamera();
		if (bCanMove)
			movement->Move();
		else
		    movement->Stop();
	}
	if (!!Montage)
		InOwner->PlayAnimMontage(Montage, PlayRate);

}
//----------------------------------------------------------------------
void FHitData::SendDamage(ACharacter* InAttacker, AActor* InAttackCauser, ACharacter* InOther, int32 InHitIndex)
{
	FActionDamageEvent e;
	e.HitData    = this;
	e.HitIndex   = InHitIndex;
	InOther->TakeDamage(Power, e, InAttacker->GetController(), InAttackCauser);
}

void FHitData::PlayMontage(ACharacter* InOwner)
{
	CheckNull(Montage);
	UCMontageComponent* montageComp = CHelpers::GetComponent<UCMontageComponent>(InOwner);

	if (!!montageComp)
	{
		montageComp->PlayAnimMontage(Montage, PlayRate);
	}
	else
	{
		if (!!InOwner)
			InOwner->PlayAnimMontage(Montage, PlayRate);
	}
}
// Stop�� �Ǵ� ���
void FHitData::PlayHitStop(UWorld* InWorld)
{
	StopPawns.Empty();
	CheckTrue(FMath::IsNearlyZero(StopTime));  // 1e-8f;  0.00000001f

	for (AActor* actor : InWorld->GetCurrentLevel()->Actors)
	{
		APawn* pawn = Cast<ACharacter>(actor);
		if (!!pawn)
		{
			pawn->CustomTimeDilation = 1e-3f; // 0.001f
			StopPawns.Add(pawn);
		}
	}
	// BindUFunction��ſ� BindLambda�� �̿�
    // ������ Ŭ�������� ������ �ʰ� ��ȿ������������ �����?��
	FTimerDelegate timerDelegate;  // class���� ����,�Լ��� ���ε�
	timerDelegate.BindLambda([=]()
		{
			for (APawn* pawn : StopPawns)
			{
				pawn->CustomTimeDilation = 1;
			}

		});


	// �����ð��� ������ ����
	FTimerHandle handle;           // loop�� false�� �߱� ������ ���� ������ ��, true : 
	InWorld->GetTimerManager().SetTimer(handle, timerDelegate, StopTime, false);

}

void FHitData::PlaySoundWave(ACharacter* InOwner)
{
	CheckNull(InOwner);
	CheckNull(Sound);

	UWorld* world = InOwner->GetWorld();
	FVector location = InOwner->GetActorLocation();
	UGameplayStatics::SpawnSoundAtLocation(world, Sound, location);

}

void FHitData::PlayEffect(UWorld* InWorld, const FVector& InLocation)
{
}

void FHitData::PlayEffect(UWorld* InWorld, const FVector& InLocation, const FRotator& InRotation)
{
	CheckNull(Effect);
	FTransform transform;
	transform.SetLocation(InLocation + InRotation.RotateVector(EffectLocation));  // FVector,FRotator

	CHelpers::PlayEffect(InWorld, Effect, transform);
}
