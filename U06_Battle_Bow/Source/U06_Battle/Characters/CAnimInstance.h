// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "Components/CWeaponComponent.h"
#include "CAnimInstance.generated.h"

/**
 *애네메이션블루프린트 (NativeBegin,Na
 */
UCLASS()
class U06_BATTLE_API UCAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

//AnimGraph에서 사용될변수 : 시리얼라이즈
protected:
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Animation")
		float Speed;
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Animation")
		float Direction;
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Animation")
		float Pitch;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Animation")
		bool bFalling;
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Animation")
		EWeaponType WeaponType = EWeaponType::Max;

protected: // Bow
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Animation")
		bool bBow_Aiming;

protected:
	// UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "InverseKinemetics")
	// 	bool bFeet;
	// UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "InverseKinemetics")
	// 	FFeetData FeetData;

	

public:
	virtual void NativeBeginPlay() override;  //블프 BeginPlay
	virtual void NativeUpdateAnimation(float DeltaSeconds) override; //블프 BeginPlay

public:
	UFUNCTION()
		void  OnWeaponTypeChanged(EWeaponType InPrevType, EWeaponType InNewType);


private:
	class ACharacter* OwnerCharacter;
	class UCWeaponComponent* Weapon;
	FRotator          PrevRotation;     // RInter() 사용될변수
};
