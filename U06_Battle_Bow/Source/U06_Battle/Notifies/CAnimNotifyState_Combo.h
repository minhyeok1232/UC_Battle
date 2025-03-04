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
		// �𸮾� �����Լ�
		//---------------------
public:
	FString GetNotifyName_Implementation() const override;   // Notify��
	virtual void NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration) override;
	virtual void NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) override;


};
