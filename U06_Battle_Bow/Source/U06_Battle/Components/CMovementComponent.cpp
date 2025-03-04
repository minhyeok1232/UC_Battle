// Fill out your copyright notice in the Description page of Project Settings.
#include "Components/CMovementComponent.h"
#include "Global.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
UCMovementComponent::UCMovementComponent()
{
	
}

void UCMovementComponent::BeginPlay()
{
	Super::BeginPlay();
	// 생성자에서 사용(X)
	OwnerCharacter = Cast<ACharacter>(GetOwner());

}

void UCMovementComponent::OnMoveForward(float InAxis)
{

	// 0 0 0 0   --> Foward
	// 0 0 0 0   --> Up
	// 0 0 0 0   --> Right
	// 0 0 0 0
	CheckFalse(bCanMove);

	FRotator rotator   = FRotator(0, OwnerCharacter->GetControlRotation().Yaw, 0);
	FVector  direction = FQuat(rotator).GetForwardVector(); // DX : Matrix --> Invsere

	if (bTopViewCamera)
		direction = FVector::XAxisVector;
	OwnerCharacter->AddMovementInput(direction, InAxis);

}

void UCMovementComponent::OnMoveRight(float InAxis)
{
	CheckFalse(bCanMove);

	FRotator rotator = FRotator(0, OwnerCharacter->GetControlRotation().Yaw, 0);
	FVector  direction = FQuat(rotator).GetRightVector(); // DX : Matrix --> Invsere
	if (bTopViewCamera)
		direction = FVector::YAxisVector;
	OwnerCharacter->AddMovementInput(direction, InAxis);
}

void UCMovementComponent::OnHorizontalLook(float InAxis)
{
	OwnerCharacter->AddControllerYawInput(InAxis * GetWorld()->GetDeltaSeconds()*50.0f);
}

void UCMovementComponent::OnVerticalLook(float InAxis)
{
	OwnerCharacter->AddControllerPitchInput(InAxis * GetWorld()->GetDeltaSeconds()*50.0f);
}

void UCMovementComponent::EnableControlRotation()
{
	OwnerCharacter->bUseControllerRotationYaw = true;
	OwnerCharacter->GetCharacterMovement()->bOrientRotationToMovement = false;
}

void UCMovementComponent::DisableControlRotation()
{
	OwnerCharacter->bUseControllerRotationYaw = false;
	OwnerCharacter->GetCharacterMovement()->bOrientRotationToMovement = true;
}

void UCMovementComponent::OnWalk()
{
	SetSpeed(ESpeedType::Walk);
}

void UCMovementComponent::OnRun()
{
	SetSpeed(ESpeedType::Run);
}

void UCMovementComponent::OnSprint()
{
	SetSpeed(ESpeedType::Sprint);
}

void UCMovementComponent::SetSpeed(ESpeedType InType)
{
	OwnerCharacter->GetCharacterMovement()->MaxWalkSpeed = Speed[(int32)InType];
}



