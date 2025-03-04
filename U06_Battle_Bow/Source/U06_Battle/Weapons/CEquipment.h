// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Weapons/CWeaponStructures.h"
#include "CEquipment.generated.h"

/**
 * 
 */

// Equipment�� ������ ���⸦ ������ �ִ°��� �ƴ�
// ���� Begin_Equip()�� ���������͸� ����
//

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FEquipment_BeginEquip);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FEquipment_EndEquip);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FEquipment_UnEquip);


UCLASS(Blueprintable)
class U06_BATTLE_API UCEquipment : public UObject
{
	GENERATED_BODY()

protected:
    // Object�� ���� ����ȭ �Ǿ� �־�� �Ѵ� : Actor,ActorComponet�� �� ����ȭ ���ص� ��
    // UE���� ������ó�� ������� �ʴ� ��� �ڵ������� �����ϱ� ���� : UFUNCTION,UPROPERTY
    UPROPERTY(BlueprintReadOnly)
        class ACharacter* OwnerCharacter;
public:
	void BeginPlay(class ACharacter* InOwner, const FEquipmentData& InData);
	
// ���α׷��Ӱ� �⺻���� ����� ����, �ٸ��μ�(����,��ȹ)���� �����ϰԲ� ����
public:
    UFUNCTION(BlueprintNativeEvent)
        void Equip();                  // BP���� �̺�Ʈ�� ���̴� �Լ�
    void Equip_Implementation();       // C������ ���� 
    UFUNCTION(BlueprintNativeEvent)
        void Begin_Equip();
    void Begin_Equip_Implementation();
    UFUNCTION(BlueprintNativeEvent)
        void End_Equip();
    void End_Equip_Implementation();
    UFUNCTION(BlueprintNativeEvent)
        void UnEquip();
    void UnEquip_Implementation();

public: // ���������� Type�� ��������
    FEquipment_BeginEquip   OnEquipment_BeginEquip;
    FEquipment_EndEquip     OnEquipment_EndEquip;
    FEquipment_UnEquip      OnEquipment_UnEquip;
private:
    bool  bBeginEquip = false;   // Equip�� ���۵Ǿ�����
    bool  bEquipped = false;     // �����Ϸ�
    FEquipmentData  Data;
    class UCMovementComponent* Movement;
    class UCStateComponent*    State;

public:
    FORCEINLINE       bool GetBeginEquip()  { return bBeginEquip; }
    FORCEINLINE const bool* GetEquipped()   { return &bEquipped; }

    
};
