// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapons/CWeaponAsset.h"
#include "Weapons/CAttachment.h"
#include "Weapons/CEquipment.h"
#include "Weapons/CDoAction.h"
#include "Weapons/CSubAction.h"
#include "CWeaponData.h"
#include "GameFramework/Character.h"

UCWeaponAsset::UCWeaponAsset()
{
	//기본class스타일
	AttachmentClass =  ACAttachment::StaticClass();
	EquipmentClass  =  UCEquipment::StaticClass();
	DoActionClass   =  UCDoAction::StaticClass();
	SubActionClass   = UCSubAction::StaticClass();

}
// UCWeaponData* Datas[MAX];
void UCWeaponAsset::BeginPlay(ACharacter* InOwner)
{

	if (!!AttachmentClass)
	{
		FActorSpawnParameters params;
		params.Owner = InOwner;

		Attachment = InOwner->GetWorld()->SpawnActor<ACAttachment>(AttachmentClass, params);
	}
	if (!!EquipmentClass)
	{
		// Equipment를 생성하고, 해당데이터를 저장
		Equipment = NewObject<UCEquipment>(this, EquipmentClass);
		Equipment->BeginPlay(InOwner, EquipmentData);

		if (!!Attachment)
		{
			Equipment->OnEquipment_BeginEquip.AddDynamic(Attachment, &ACAttachment::OnBeginEquip);
			Equipment->OnEquipment_EndEquip.AddDynamic(Attachment, &ACAttachment::OnEndEquip);
			Equipment->OnEquipment_UnEquip.AddDynamic(Attachment, &ACAttachment::OnUnEquip);
		}
	
	}

	if (!!DoActionClass)
	{
		DoAction = NewObject<UCDoAction>(this, DoActionClass);
		DoAction->BeginPlay(InOwner, Attachment, Equipment, DoActionDatas,HitDatas);

		// Collision관련하여 바인딩
		if (!!Attachment)
		{
			Attachment->OnAttachmentBeginCollision.AddDynamic(DoAction, &UCDoAction::OnAttachmentBeginCollision);
			Attachment->OnAttachmentEndCollision.AddDynamic(DoAction, &UCDoAction::OnAttachmentEndCollision);
	
			Attachment->OnAttachmentBeginOverlap.AddDynamic(DoAction, &UCDoAction::OnAttachmentBeginOverlap);
			Attachment->OnAttachmentEndOverlap.AddDynamic(DoAction, &UCDoAction::OnAttachmentEndOverlap);

		}
		if (Equipment)
		{
			Equipment->OnEquipment_BeginEquip.AddDynamic(DoAction, &UCDoAction::OnBeginEquip);
			Equipment->OnEquipment_UnEquip.AddDynamic(DoAction, &UCDoAction::OnUnEquip);
		//	Equipment->OnEquipment_EndEquip.AddDynamic(DoAction, &UCDoAction::OnEndEquip);
		}
	}

	if (!!SubActionClass)
	{
		SubAction = NewObject<UCSubAction>(this, SubActionClass);
		SubAction->BeginPlay(InOwner, Attachment,  DoAction);
	}

}