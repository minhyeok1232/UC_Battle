#include "Weapons/CDoAction.h"
#include "Global.h"
#include "CAttachment.h"
#include "CEquipment.h"
#include "GameFramework/Character.h"
#include "Components/CStateComponent.h"
#include "Components/CMovementComponent.h"

UCDoAction::UCDoAction()
{

}
void UCDoAction::BeginPlay(ACharacter* InOwner, ACAttachment* InAttachment, UCEquipment* InEquipment, TArray<FDoActionData>& InDoActionData, TArray<FHitData>& InHitData)
{
	OwnerCharacter = InOwner;
	Movement = CHelpers::GetComponent<UCMovementComponent>(InOwner);
	State = CHelpers::GetComponent<UCStateComponent>(InOwner);
	World = OwnerCharacter->GetWorld();

	DoActionDatas = InDoActionData;
	HitDatas      = InHitData;
}

void UCDoAction::DoAction()
{
	bInAction = true;
	State->SetActionMode();
	// 상속받은곳에서 DoActionDatas을 이용하여 PlayMontage, X

    // Super::DoAction();
}

void UCDoAction::Begin_DoAction()
{
	bBeginAction = true;
	// Super::DoAction();
}

void UCDoAction::End_DoAction()
{
	bInAction = false;
	bBeginAction = false;

	State->SetIdleMode();
	Movement->Move();
	Movement->DisableFixedCamera();

}
