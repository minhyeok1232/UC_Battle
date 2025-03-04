// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Weapons/CWeaponStructures.h"
#include "CDoAction.generated.h"

/**
 * 
 */
// UCDoaction --> UCDoatcion_Sword
// �߻�ȭ, ����(X)
//UCLASS(Abstract,NotBlueprintable)
UCLASS(Blueprintable)

class U06_BATTLE_API UCDoAction : public UObject
{
	GENERATED_BODY()

protected:
	UPROPERTY()  // -> UObect �������ݷ��ǿ��� ��������...(UProperty,TArray,61��)
		class ACharacter* OwnerCharacter;
	UPROPERTY()
		class UCMovementComponent* Movement;
	UPROPERTY()
		class UCStateComponent* State;
	UPROPERTY()
		class UWorld* World;

public:
	UCDoAction();

public:
	virtual void BeginPlay
	(
		class ACharacter* InOwner,
		class ACAttachment* InAttachment,
		class UCEquipment* InEquipment,
		class TArray<FDoActionData>& InDoActionData,
		class TArray<FHitData>& InHitData
	);
	virtual void Tick(float InDeltaTime) { }; // ��ӹ޴°����� ó��
public: // �⺻���� �Ұ��� �� Ŭ������ ����, �������� ��ӹ޴°����� ó��
	virtual void DoAction();          
	virtual void Begin_DoAction();
	virtual void End_DoAction();

public:
	UFUNCTION()
		virtual void OnBeginEquip() {};
	UFUNCTION()
		virtual void OnEndEquip() {};
	UFUNCTION()
		virtual void OnUnEquip() {};


//----------------------------------------------
// Collider On/Off���� ���ε� : �ڽĿ��� Override�Ͽ� ���
//----------------------------------------------
public:
	UFUNCTION()
		void OnAttachmentBeginCollision() {};
	UFUNCTION()
		void OnAttachmentEndCollision() {};
//----------------------------------------------
// Collider Hit ���� ���ε� : �ڽĿ��� Override�Ͽ� ���
//----------------------------------------------
public:
	UFUNCTION()
		virtual void OnAttachmentBeginOverlap(class ACharacter* InAttacker, AActor* InAttackerCauser, class ACharacter* InOther) {};
	UFUNCTION()
		virtual void OnAttachmentEndOverlap(class ACharacter* InAttacker, class ACharacter* InOther) {};

protected:
	TArray<FDoActionData>  DoActionDatas;  // ���¿� ��ϵ� DoAction������ ����
	TArray<FHitData>       HitDatas;       // ���¿� ��ϵ� Hit������ ����
protected:
	bool  bInAction = false;
	bool  bBeginAction = false;
};
