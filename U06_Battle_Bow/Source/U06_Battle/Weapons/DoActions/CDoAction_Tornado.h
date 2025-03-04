// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Weapons/CDoAction.h"
#include "CDoAction_Tornado.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class U06_BATTLE_API UCDoAction_Tornado : public UCDoAction
{
	GENERATED_BODY()
	//----------------------------------------------
	// Collider Hit 관련 바인딩 : 자식에서 Override하여 사용
	//----------------------------------------------
public:
	void OnAttachmentBeginOverlap(class ACharacter* InAttacker, AActor* InAttackerCauser, class ACharacter* InOther) override;
	void OnAttachmentEndOverlap(class ACharacter* InAttacker, class ACharacter* InOther) override;

public:
	void DoAction()  override;
	void Begin_DoAction() override;
	void End_DoAction() override;

private:
	TArray<class ACharacter*> Hit; // Hit된 Char를 보관

};
