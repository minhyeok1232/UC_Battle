// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "CAnimNotifyState_Combo.generated.h"

/**
 * 
 */
UCLASS()
class U06_BATTLE_API UCAnimNotifyState_Combo : public UAnimNotifyState
{
	GENERATED_BODY()
		//--------------------
		// 언리얼 제공함수
		//---------------------
public:
	FString GetNotifyName_Implementation() const override;   // Notify명
	virtual void NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration) override;
	virtual void NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) override;


};
