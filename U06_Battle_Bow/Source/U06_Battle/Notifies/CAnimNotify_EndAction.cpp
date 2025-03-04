// Fill out your copyright notice in the Description page of Project Settings.


#include "Notifies/CAnimNotify_EndAction.h"
#include "Global.h"
#include "Components/CWeaponComponent.h"
#include "Weapons/CEquipment.h"
#include "Weapons/DoActions/CDoAction_Combo.h"

// 가정 : Player,Enemy에서 공통적으로 사용할수 있게
FString UCAnimNotify_EndAction::GetNotifyName_Implementation() const
{
	return "End_DoAction";
}

void UCAnimNotify_EndAction::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
	Super::Notify(MeshComp, Animation);

	CheckNull(MeshComp);
	CheckNull(MeshComp->GetOwner());

	// WeaponComponent를 통해서 명령전달 : 굳이 Interface사용(X)
	UCWeaponComponent* weapon = CHelpers::GetComponent<UCWeaponComponent>(MeshComp->GetOwner());
	CheckNull(weapon);
	CheckNull(weapon->GetDoAction());
	weapon->GetDoAction()->End_DoAction();
}
