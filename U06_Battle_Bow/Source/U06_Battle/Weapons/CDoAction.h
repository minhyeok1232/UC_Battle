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
// 추상화, 블프(X)
//UCLASS(Abstract,NotBlueprintable)
UCLASS(Blueprintable)

class U06_BATTLE_API UCDoAction : public UObject
{
	GENERATED_BODY()

protected:
	UPROPERTY()  // -> UObect 개비지콜렉션에서 삭제되지...(UProperty,TArray,61초)
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
	virtual void Tick(float InDeltaTime) { }; // 상속받는곳에서 처리
public: // 기본으로 할것은 현 클래스에 정의, 나머지는 상속받는곳에서 처리
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
// Collider On/Off관련 바인딩 : 자식에서 Override하여 사용
//----------------------------------------------
public:
	UFUNCTION()
		void OnAttachmentBeginCollision() {};
	UFUNCTION()
		void OnAttachmentEndCollision() {};
//----------------------------------------------
// Collider Hit 관련 바인딩 : 자식에서 Override하여 사용
//----------------------------------------------
public:
	UFUNCTION()
		virtual void OnAttachmentBeginOverlap(class ACharacter* InAttacker, AActor* InAttackerCauser, class ACharacter* InOther) {};
	UFUNCTION()
		virtual void OnAttachmentEndOverlap(class ACharacter* InAttacker, class ACharacter* InOther) {};

protected:
	TArray<FDoActionData>  DoActionDatas;  // 에셋에 등록된 DoAction데이터 저장
	TArray<FHitData>       HitDatas;       // 에셋에 등록된 Hit데이터 저장
protected:
	bool  bInAction = false;
	bool  bBeginAction = false;
};
