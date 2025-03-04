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
	// Collider Hit ���� ���ε� : �ڽĿ��� Override�Ͽ� ���
	//----------------------------------------------
public:
	void OnAttachmentBeginOverlap(class ACharacter* InAttacker, AActor* InAttackerCauser, class ACharacter* InOther) override;
	void OnAttachmentEndOverlap(class ACharacter* InAttacker, class ACharacter* InOther) override;

public:
	void DoAction()  override;
	void Begin_DoAction() override;
	void End_DoAction() override;

private:
	TArray<class ACharacter*> Hit; // Hit�� Char�� ����

};
