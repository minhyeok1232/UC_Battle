// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapons/SubActions/CSubAction_Hammer.h"
#include "Global.h"
#include "GameFramework/Character.h"
#include "Components/CStateComponent.h"
#include "Components/CMovementComponent.h"
#include "Weapons/CAttachment.h"
#include "Weapons/CDoAction.h"
#include "Weapons/AddOns/CGhostTrail.h"
#include "Weapons/AddOns/CAura.h"

void UCSubAction_Hammer::Pressed()
{
	// bInAction이 true가 도ㅣ기전에 Check
	CheckFalse(State->IsIdleMode());
	CheckTrue(State->IsSubActionMode());
	bInAction = true;
	//Super::Pressed(); // bInAction = true;

	State->SetActionMode();
	State->OnSubActionMode();
	
	if (!!GhostTrailClass)
		GhostTrail = CHelpers::Play_GhostTrail(GhostTrailClass,Owner);

	ActionData.DoAction(Owner);
}

void UCSubAction_Hammer::Begin_SubAction_Implementation()
{
	Super::Begin_SubAction_Implementation();
	
	CheckNull(AuraClass);  // Class가 정의 나되어 있으면 리턴

     FActorSpawnParameters params;
	 FTransform   transform;

	params.Owner = Owner;
	params.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	
	transform.SetLocation(Owner->GetActorLocation());
	transform.AddToTranslation(AuraLocation); // 앞으로 이동
	transform.SetRotation(FQuat(Owner->GetActorRotation()));
	
	Owner->GetWorld()->SpawnActor<ACAura>(AuraClass,transform,params);
	
}

void UCSubAction_Hammer::End_SubAction_Implementation()
{
	Super::End_SubAction_Implementation();
	// State
	State->SetIdleMode();
	State->OffSubActionMode();

	// Movement
	Movement->Move();
	Movement->DisableFixedCamera();

	// GhostTrail
	if (!!GhostTrail)
		GhostTrail->Destroy();
}
