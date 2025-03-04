// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapons/CEquipment.h"
#include "Global.h"
#include "GameFramework/Character.h"
#include "Components/CMovementComponent.h"
#include "Components/CStateComponent.h"
#include  "Components/CMontageComponent.h"
#include  "Components/CWeaponComponent.h"
#include "Weapons/CAttachment.h"

void UCEquipment::BeginPlay(ACharacter* InOwner, const FEquipmentData& InData)
{
	OwnerCharacter = InOwner;
	Data = InData;

	Movement = CHelpers::GetComponent<UCMovementComponent>(InOwner);
	State    = CHelpers::GetComponent<UCStateComponent>(InOwner);

	
	CLog::Print(Data.bCanMove);
	CheckNull(Data.Montage);
	CLog::Print(Data.Montage->GetFName().ToString());

}

void UCEquipment::Equip_Implementation()
{
	State->SetEquipMode();
	if (Data.bCanMove == false)
		Movement->Stop();
	if (Data.bUseControlRotation)
		Movement->EnableControlRotation();
	else
		Movement->DisableControlRotation();
	if (!!Data.Montage)
	{
		UCMontageComponent* compMontage = CHelpers::GetComponent<UCMontageComponent>(OwnerCharacter);
		if (!!compMontage)
		{
			compMontage->PlayAnimMontage(Data.Montage, Data.PlayRate);
		}
	//	OwnerCharacter->PlayAnimMontage(Data.Montage, Data.PlayRate);
	}
	else
	{
		// Fist,Hammer
		Begin_Equip();
		End_Equip();
	}


}
// Noti에서 Call --> Attachment에 델리게이터로 호출
void UCEquipment::Begin_Equip_Implementation()
{
	bBeginEquip = true;

	// UCWeaponComponent* weapon = CHelpers::GetComponent<UCWeaponComponent>(OwnerCharacter);
	// CheckNull(weapon->GetAttachment());
	// weapon->GetAttachment()->OnBeginEquip();
	// 
	// return;
	if (OnEquipment_BeginEquip.IsBound())
		OnEquipment_BeginEquip.Broadcast();
}

void UCEquipment::End_Equip_Implementation()
{
	bBeginEquip = false;
	bEquipped = true;
	Movement->Move();
	State->SetIdleMode();

	if (OnEquipment_EndEquip.IsBound())
		OnEquipment_EndEquip.Broadcast();
}

void UCEquipment::UnEquip_Implementation()
{
	bEquipped = false;
	Movement->DisableControlRotation();

	if (OnEquipment_UnEquip.IsBound())
		OnEquipment_UnEquip.Broadcast();

}
