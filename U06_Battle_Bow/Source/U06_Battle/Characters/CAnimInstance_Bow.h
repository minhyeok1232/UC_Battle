// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "CAnimInstance_Bow.generated.h"

/**
 * 
 */
UCLASS()
class U06_BATTLE_API UCAnimInstance_Bow : public UAnimInstance
{
	GENERATED_BODY()

public:
	virtual void NativeBeginPlay() override;  //���� BeginPlay
	virtual void NativeUpdateAnimation(float DeltaSeconds) override; //���� BeginPlay
protected:
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Animation")   //�����信�� �������� �ø���
		float Bend;
public:
	FORCEINLINE float* GetBend() { return &Bend; }
};
