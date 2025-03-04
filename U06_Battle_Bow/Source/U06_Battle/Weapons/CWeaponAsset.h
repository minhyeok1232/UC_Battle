// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CWeaponStructures.h"
#include "CWeaponAsset.generated.h"

/**
 *  UObject���� ��ӹ������� ��������ϸ� �������ݷ��ǿ� �ڵ����� ����
 */
UCLASS(Blueprintable)
class U06_BATTLE_API UCWeaponAsset : public UDataAsset
{
	GENERATED_BODY()

private:  // Assign�� ������
	UPROPERTY(EditAnywhere)  // BP_CAttachment_Sword,........ , �����Ϳ��¿��� �ʵ����Ѱ�, Define
		TSubclassOf<class ACAttachment> AttachmentClass;
	UPROPERTY(EditAnywhere) 
		TSubclassOf<class UCEquipment> EquipmentClass;
	UPROPERTY(EditAnywhere)
		FEquipmentData EquipmentData;
	UPROPERTY(EditAnywhere)
		TSubclassOf<class UCDoAction> DoActionClass;
	UPROPERTY(EditAnywhere)
		TSubclassOf<class UCSubAction> SubActionClass;

	UPROPERTY(EditAnywhere)
		TArray<FDoActionData> DoActionDatas;
	UPROPERTY(EditAnywhere)
		TArray<FHitData>      HitDatas;



private: // UObject���� ��ӹ������� ����� ���ϸ� �������ݷ��ǿ� ���Ƿ� ����
	UPROPERTY() 
		class ACAttachment* Attachment = nullptr;
	UPROPERTY() 
		class UCEquipment*  Equipment  = nullptr;
	UPROPERTY()
		class UCDoAction*   DoAction   = nullptr;
	UPROPERTY()
		class UCSubAction*  SubAction = nullptr;
public:
	UCWeaponAsset();


//------------------------------
// User���� �Լ�
//------------------------------
public: 
	void BeginPlay(class ACharacter* InOwner);

private:
	class ACharacter* OwnerCharacter;

public:
	FORCEINLINE class ACAttachment* GetAttachment()  { return Attachment; }
	FORCEINLINE class UCEquipment*  GetEquipment()   { return Equipment; }
	FORCEINLINE class UCDoAction*   GetDoAction()    { return DoAction; }
	FORCEINLINE class UCSubAction* GetSubAction() { return SubAction; }

};
