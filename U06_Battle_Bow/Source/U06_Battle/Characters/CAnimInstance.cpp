// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/CAnimInstance.h"
#include "Global.h"
#include "GameFramework/Character.h"
#include "CAnimInstance.h"
#include "Weapons/CSubAction.h"
#include "GameFramework/CharacterMovementComponent.h"

// 1. InGame, 2. ABP Editor
void UCAnimInstance::NativeBeginPlay()
{
	Super::NativeBeginPlay();

	OwnerCharacter = Cast<ACharacter>(TryGetPawnOwner());
	CheckNull(OwnerCharacter);

	// WeaponComponet에서 Change()되면 델리게이터를 이용하여
	// 1. Player, 2.여기에
	Weapon = CHelpers::GetComponent<UCWeaponComponent>(OwnerCharacter);
	if (!!Weapon)
	{
		Weapon->OnWeaponTypeChanged.AddDynamic(this, &UCAnimInstance::OnWeaponTypeChanged);
	}
}

void UCAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);
	
	CheckNull(OwnerCharacter);
	// Direction,Speed,Pitch

	Speed = OwnerCharacter->GetVelocity().Size2D();
	// 기본디렉션
	// Direction = CalculateDirection(OwnerCharacter->GetVelocity(), OwnerCharacter->GetActorRotation());
	{
		FRotator rotateCharacter = OwnerCharacter->GetVelocity().ToOrientationRotator();
		FRotator rotateControl = OwnerCharacter->GetActorRotation();
		FRotator target = UKismetMathLibrary::NormalizedDeltaRotator(rotateCharacter, rotateControl);
		PrevRotation = UKismetMathLibrary::RInterpTo(PrevRotation, target, DeltaSeconds, 25);

		Direction = PrevRotation.Yaw;
	}

	Pitch = UKismetMathLibrary::FInterpTo(Pitch,OwnerCharacter->GetBaseAimRotation().Pitch, DeltaSeconds, 25);
    bFalling = OwnerCharacter->GetCharacterMovement()->IsFalling();

	// Bow할때 처리
	CheckNull(Weapon);
	bBow_Aiming = true;
	if (!!Weapon->GetSubAction())
	{
		bBow_Aiming &= (WeaponType == EWeaponType::Bow);
		bBow_Aiming &= (Weapon->GetSubAction()->GetInAction());
	}
	else
	{
		bBow_Aiming = false;
	}


}

void UCAnimInstance::OnWeaponTypeChanged(EWeaponType InPrevType, EWeaponType InNewType)
{
	WeaponType = InNewType;
}
