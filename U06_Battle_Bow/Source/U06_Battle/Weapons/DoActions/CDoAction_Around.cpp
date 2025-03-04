// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapons/DoActions/CDoAction_Around.h"
#include "Global.h"
#include "GameFramework/Character.h"
#include "Components/CStateComponent.h"
#include  "Weapons/AddOns/CRotate_Object.h"

//UCDoAction_Around::UCDoAction_Around()
//{
//	// None대신 기본 Class가 디파인
////	RotateClass = CRotateClass::StaticClass();
//}

void UCDoAction_Around::DoAction()
{
    CheckFalse(DoActionDatas.Num() > 0);
	CheckFalse(State->IsIdleMode());
	bInAction = true;
	State->SetActionMode();
	DoActionDatas[0].DoAction(OwnerCharacter);
	
}

void UCDoAction_Around::Begin_DoAction()
{
	if (DoActionDatas.Num()==0)
	{
		CLog::Print("UCDoAction_Around::Begin_DoAction : Data Missing");
		return;
	}
	Super::Begin_DoAction();

	int32 index = UKismetMathLibrary::RandomIntegerInRange(0,DoActionDatas.Num());

	FActorSpawnParameters params;
	params.Owner = OwnerCharacter;
	params.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	if (!!RotateClass[index])
		OwnerCharacter->GetWorld()->SpawnActor<ACRotate_Object>(RotateClass[index],params);
	
}

void UCDoAction_Around::End_DoAction()
{
	Super::End_DoAction();
}
