// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CWeaponStructures.h"
#include "CWeaponAsset.generated.h"

/**
 *  UObject에서 상속받은것은 사용을안하면 개비지콜렉션에 자동으로 삭제
 */
UCLASS(Blueprintable)
class U06_BATTLE_API UCWeaponAsset : public UDataAsset
{
	GENERATED_BODY()

private:  // Assign할 데이터
	UPROPERTY(EditAnywhere)  // BP_CAttachment_Sword,........ , 데이터에셋에서 필드정한것, Define
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



private: // UObject에서 상속받은것은 사용을 안하면 개비지콜렉션에 임의로 삭제
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
// User정의 함수
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
