// Fill out your copyright notice in the Description page of Project Settings.


#include "Notifies/CAnimNotifyState_SubAction.h"
#include "Global.h"
#include "Components/CWeaponComponent.h"
#include "Weapons/CSubAction.h"


FString UCAnimNotifyState_SubAction::GetNotifyName_Implementation() const
{
	return "SubAction";
}

void UCAnimNotifyState_SubAction::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration)
{
	Super::NotifyBegin(MeshComp, Animation, TotalDuration);
	CheckNull(MeshComp);
	CheckNull(MeshComp->GetOwner());

	// WeaponComponent를 통해서 명령전달 : 굳이 Interface사용(X)
	UCWeaponComponent* weapon = CHelpers::GetComponent<UCWeaponComponent>(MeshComp->GetOwner());
	CheckNull(weapon);
	CheckNull(weapon->GetSubAction());

	weapon->GetSubAction()->Begin_SubAction();



}

void UCAnimNotifyState_SubAction::NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
	Super::NotifyEnd(MeshComp, Animation);

	CheckNull(MeshComp);
	CheckNull(MeshComp->GetOwner());

	// WeaponComponent를 통해서 명령전달 : 굳이 Interface사용(X)
	UCWeaponComponent* weapon = CHelpers::GetComponent<UCWeaponComponent>(MeshComp->GetOwner());
	CheckNull(weapon);
	CheckNull(weapon->GetSubAction());

	weapon->GetSubAction()->End_SubAction();

}

