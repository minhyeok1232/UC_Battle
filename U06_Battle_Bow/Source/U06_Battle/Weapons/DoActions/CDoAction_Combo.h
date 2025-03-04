// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Weapons/CDoAction.h"
#include "CDoAction_Combo.generated.h"

/**
 * Sword���� Collision : Į�� ����¿��� � ��ü�� ��⸸ �ص� ���� �߻�
 * 
 *  1. Off
 *  2. ���ݱ��� On  : 
 */
UCLASS(Blueprintable)
class U06_BATTLE_API UCDoAction_Combo : public UCDoAction
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
	int32  Index = 0;              // �޺������� Index
	bool   bEnable = false;        // �޺����ݰ������� �Ǵܺ���
	bool   bExist = false;         // �޺��� �ִ��� �Ǵܺ���
	TArray<class ACharacter*> Hit; // Hit�� Char�� ����
public:
	FORCEINLINE void EnableCombo()  { bEnable = true; }
	FORCEINLINE void DisableCombo() { bEnable = false; }

};
