// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Weapons/CDoAction.h"
#include "CDoAction_Combo.generated.h"

/**
 * Sword에서 Collision : 칼을 든상태에서 어떤 물체에 닿기만 해도 쿨리젼 발생
 * 
 *  1. Off
 *  2. 공격구간 On  : 
 */
UCLASS(Blueprintable)
class U06_BATTLE_API UCDoAction_Combo : public UCDoAction
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
	int32  Index = 0;              // 콤보공격의 Index
	bool   bEnable = false;        // 콤보공격가능한지 판단변수
	bool   bExist = false;         // 콤보가 있는지 판단변수
	TArray<class ACharacter*> Hit; // Hit된 Char를 보관
public:
	FORCEINLINE void EnableCombo()  { bEnable = true; }
	FORCEINLINE void DisableCombo() { bEnable = false; }

};
