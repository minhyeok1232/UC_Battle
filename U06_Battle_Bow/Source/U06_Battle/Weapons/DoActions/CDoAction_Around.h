// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Weapons/CDoAction.h"
#include "CDoAction_Around.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class U06_BATTLE_API UCDoAction_Around : public UCDoAction
{
	GENERATED_BODY()
private:
	UPROPERTY(EditAnywhere,Category="SpawnClass")
		TArray<TSubclassOf<class ACRotate_Object>> RotateClass;

public: // 기본으로 할것은 현 클래스에 정의, 나머지는 상속받는곳에서 처리
	virtual void DoAction()  override;          
	virtual void Begin_DoAction() override; 
	virtual void End_DoAction() override; 

};
