
#include "Components/CWeaponComponent.h"
#include "Global.h"
#include "CStateComponent.h"
#include "GameFramework/Character.h"
#include "Weapons/CWeaponAsset.h"
#include "Weapons/CWeaponData.h"
#include "Weapons/CAttachment.h"
#include "Weapons/CEquipment.h"
#include "Weapons/CDoAction.h"
#include "Components/CMovementComponent.h"
#include "Components/CStateComponent.h"
#include "Weapons/CSubAction.h"

// Sets default values for this component's properties
UCWeaponComponent::UCWeaponComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}


// Called when the game starts
void UCWeaponComponent::BeginPlay()
{
	Super::BeginPlay();

	OwnerCharacter = Cast<ACharacter>(GetOwner());
	Movement = CHelpers::GetComponent<UCMovementComponent>(OwnerCharacter);
	State = CHelpers::GetComponent<UCStateComponent>(OwnerCharacter);


	for (int32 i = 0; i < (int32)EWeaponType::Max; i++)
	{
		Datas[i] = NewObject<UCWeaponData>();
		if (!!DataAssets[i])
			DataAssets[i]->BeginPlay(OwnerCharacter);
		//Datas[i]->SetAttachment(DataAssets[i]->GetAttachment());
		//Datas[i]->SetEquipment(DataAssets[i]->GetEquipment());

	}

}

void UCWeaponComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	if (!!GetDoAction())
		GetDoAction()->Tick(DeltaTime);

	if (!!GetSubAction())
		GetSubAction()->Tick(DeltaTime);

}

void UCWeaponComponent::SetUnarmedMode()
{
	CheckFalse(IsIdleMode());
	GetEquipment()->UnEquip();
	ChangeType(EWeaponType::Max);
	Movement->SetSpeed(ESpeedType::Run);
}

void UCWeaponComponent::SetFistMode()
{
	CheckFalse(IsIdleMode());

	SetMode(EWeaponType::Fist);
	if (IsFistMode())
		Movement->SetSpeed(ESpeedType::Sprint);
}

void UCWeaponComponent::SetSwordMode()
{
	// Idle이 아니면 무기장착 안됨
	CheckFalse(IsIdleMode());
	SetMode(EWeaponType::Sword);
}

void UCWeaponComponent::SetHammerMode()
{
	CheckFalse(IsIdleMode());
	SetMode(EWeaponType::Hammer);
}

void UCWeaponComponent::SetTornadoMode()
{
	CheckFalse(IsIdleMode());
	CLog::MessageDialog(" TornadoMode");
	return;
	SetMode(EWeaponType::Tornado);
}

void UCWeaponComponent::SetWarpMode()
{
	CheckFalse(IsIdleMode());
	SetMode(EWeaponType::Warp);
}

void UCWeaponComponent::SetAroundMode()
{
	CheckFalse(IsIdleMode());
	SetMode(EWeaponType::Around);
}

void UCWeaponComponent::SetBowMode()
{
	CheckFalse(IsIdleMode());

	SetMode(EWeaponType::Bow);
}

// Key입력이 Tick()보다 느림, State를 별도로 보관 안함
bool UCWeaponComponent::IsIdleMode()
{
	return CHelpers::GetComponent<UCStateComponent>(OwnerCharacter)->IsIdleMode();
}

void UCWeaponComponent::SetMode(EWeaponType InType)
{
	// 동일Key를 두번 누른 상태
	if (Type == InType)
	{
		SetUnarmedMode();
		return;
	}
	// Sword --> Hammer
	if (!IsUnarmedMode())
	{
		GetEquipment()->UnEquip();
	}
	CHECKNULL(DataAssets[(int32)InType]->GetEquipment());
	DataAssets[(int32)InType]->GetEquipment()->Equip();
	ChangeType(InType);

}

void UCWeaponComponent::ChangeType(EWeaponType InType)
{
	EWeaponType prevType = Type;
	Type = InType;

	CheckTopViewCamera(prevType);

	Movement->DisableTopViewCamera();
	
	// ABP에서 WeaponType을 처리하기위해 델리게이터 호출
	if (OnWeaponTypeChanged.IsBound())
		OnWeaponTypeChanged.Broadcast(prevType, InType);
}

void UCWeaponComponent::DoAction()
{

	if (!!GetDoAction())
		GetDoAction()->DoAction();


}

ACAttachment* UCWeaponComponent::GetAttachment()
{
	CheckTrueResult(IsUnarmedMode(), nullptr);
	CheckFalseResult(!!DataAssets[(int32)Type], nullptr);
	CheckFalseResult(DataAssets[(int32)Type]->GetAttachment(), nullptr);
	return DataAssets[(int32)Type]->GetAttachment();
}

UCEquipment* UCWeaponComponent::GetEquipment()
{
	CheckTrueResult(IsUnarmedMode(), nullptr);
	CheckFalseResult(!!DataAssets[(int32)Type], nullptr);
	CheckFalseResult(DataAssets[(int32)Type]->GetEquipment(), nullptr);
	return DataAssets[(int32)Type]->GetEquipment();
}
UCDoAction* UCWeaponComponent::GetDoAction()
{

	CheckTrueResult(IsUnarmedMode(), nullptr);
	CheckFalseResult(!!DataAssets[(int32)Type], nullptr);
	CheckFalseResult(DataAssets[(int32)Type]->GetDoAction(), nullptr);
	return DataAssets[(int32)Type]->GetDoAction();
}

UCSubAction* UCWeaponComponent::GetSubAction()
{
	CheckTrueResult(IsUnarmedMode(), nullptr);
	CheckFalseResult(!!DataAssets[(int32)Type], nullptr);
	CheckFalseResult(DataAssets[(int32)Type]->GetSubAction(), nullptr);
	return DataAssets[(int32)Type]->GetSubAction();
}

class UCSubAction* UCWeaponComponent::GetSubAction(EWeaponType InType)
{
	
	CheckFalseResult(!!DataAssets[(int32)InType], nullptr);
	CheckFalseResult(DataAssets[(int32)InType]->GetSubAction(), nullptr);
	return DataAssets[(int32)InType]->GetSubAction();
}

void UCWeaponComponent::SubAction_Pressed()
{
	if (!!GetSubAction())
		GetSubAction()->Pressed();
}

void UCWeaponComponent::SubAction_Released()
{
	if (!!GetSubAction())
		GetSubAction()->Released();
}
void UCWeaponComponent::CheckTopViewCamera(EWeaponType InType)
{
	PrintLine();
	CheckNull(GetSubAction(InType));
	PrintLine();
	CheckFalse(State->IsSubActionMode());
	PrintLine();
	GetSubAction(InType)->Released();
	PrintLine();
}
