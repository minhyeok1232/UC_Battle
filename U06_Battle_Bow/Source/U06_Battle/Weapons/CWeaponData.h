// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CWeaponData.generated.h"

/**
 *  WeaponAsset의 BeginPlay() Spawn된 데이터를 저장하는 Class
 */
UCLASS()
class U06_BATTLE_API UCWeaponData : public UObject
{
	GENERATED_BODY()
 
//private:
//    friend class UCWeaponAsset;

private: // Object이므로 직렬화
    UPROPERTY()
        class ACAttachment* Attachment;
    UPROPERTY()
        class UCEquipment* Equipment;
//   UPROPERTY()
//       class UCDoAction* DoAction;
//   UPROPERTY()
//       class UCSubAction* SubAction;

public:
    void  SetAttachment(class ACAttachment* InAttachment);
    void  SetEquipment(class  UCEquipment* InEquipment);
public:
    FORCEINLINE class ACAttachment* GetAttachment() { return Attachment; }
    FORCEINLINE class UCEquipment* GetEquipment() { return Equipment; }
//   FORCEINLINE class UCDoAction* GetDoAction() { return DoAction; }
//   FORCEINLINE class UCSubAction* GetSubAction() { return SubAction; }
};
