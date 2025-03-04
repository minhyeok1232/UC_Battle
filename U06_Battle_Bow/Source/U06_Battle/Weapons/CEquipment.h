// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Weapons/CWeaponStructures.h"
#include "CEquipment.generated.h"

/**
 * 
 */

// Equipment는 실제로 무기를 가지고 있는곳이 아님
// 예를 Begin_Equip()을 델리게이터를 연결
//

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FEquipment_BeginEquip);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FEquipment_EndEquip);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FEquipment_UnEquip);


UCLASS(Blueprintable)
class U06_BATTLE_API UCEquipment : public UObject
{
	GENERATED_BODY()

protected:
    // Object인 경우는 직렬화 되어 있어야 한다 : Actor,ActorComponet는 꼭 직렬화 안해도 됨
    // UE에서 개비지처리 사용하지 않는 경우 자동삭제를 방지하기 위해 : UFUNCTION,UPROPERTY
    UPROPERTY(BlueprintReadOnly)
        class ACharacter* OwnerCharacter;
public:
	void BeginPlay(class ACharacter* InOwner, const FEquipmentData& InData);
	
// 프로그래머가 기본형을 만들어 놓고, 다른부서(무기,기획)에서 수정하게끔 설계
public:
    UFUNCTION(BlueprintNativeEvent)
        void Equip();                  // BP에서 이벤트로 보이는 함수
    void Equip_Implementation();       // C에서는 정의 
    UFUNCTION(BlueprintNativeEvent)
        void Begin_Equip();
    void Begin_Equip_Implementation();
    UFUNCTION(BlueprintNativeEvent)
        void End_Equip();
    void End_Equip_Implementation();
    UFUNCTION(BlueprintNativeEvent)
        void UnEquip();
    void UnEquip_Implementation();

public: // 델리게이터 Type과 변수선언
    FEquipment_BeginEquip   OnEquipment_BeginEquip;
    FEquipment_EndEquip     OnEquipment_EndEquip;
    FEquipment_UnEquip      OnEquipment_UnEquip;
private:
    bool  bBeginEquip = false;   // Equip이 시작되었은지
    bool  bEquipped = false;     // 장착완료
    FEquipmentData  Data;
    class UCMovementComponent* Movement;
    class UCStateComponent*    State;

public:
    FORCEINLINE       bool GetBeginEquip()  { return bBeginEquip; }
    FORCEINLINE const bool* GetEquipped()   { return &bEquipped; }

    
};
