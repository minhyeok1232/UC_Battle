#include "Weapons/DoActions/CDoAction_Warp.h"
#include "Global.h"
#include "GameFramework/Character.h"
#include "GameFramework/PlayerController.h"
#include "Components/CStateComponent.h"
#include "Components/DecalComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/CAIBehaviorComponent.h"
#include "Weapons/CAttachment.h"

void UCDoAction_Warp::BeginPlay(ACharacter* InOwner, ACAttachment* InAttachment, UCEquipment* InEquipment, TArray<FDoActionData>& InDoActionData, TArray<FHitData>& InHitData)
{
	Super::BeginPlay(InOwner, InAttachment, InEquipment, InDoActionData, InHitData);

	Decal = CHelpers::GetComponent<UDecalComponent>(InAttachment);
	PlayerController = OwnerCharacter->GetController<APlayerController>();
	// Enemy���� 
	Behavior = CHelpers::GetComponent<UCAIBehaviorComponent>(OwnerCharacter);
}
// 1. BP���� Cusror�� ��ġ�� ã�Ƴ��� �� ��ġ�� ǥ��
// 2. Tick()�Լ��� User�� Define�� �Լ�
void UCDoAction_Warp::Tick(float InDeltaTime)
{
	Super::Tick(InDeltaTime);

	// DoAction�߿��� ���۾ȵǰ� ��
	CheckTrue(this->bInAction);

	FVector location  = FVector::ZeroVector;
	FRotator rotation = FRotator::ZeroRotator;

	// �ϴÿ� Cursor
	if (GetCursorLocationAndRotation(location, rotation) == false)
	{
		Decal->SetVisibility(false);
		return;
	}

	Decal->SetVisibility(true);
	Decal->SetWorldLocation(location);
	Decal->SetWorldRotation(rotation);

}
void UCDoAction_Warp::DoAction()
{
	// ������ �ִ��� Check
	CheckFalse(DoActionDatas.Num() > 0);
	// Idle�� �ƴϸ� return;
	CheckFalse(State->IsIdleMode())
	Super::DoAction();

	// ��ġ�̵�
	MoveToLocation = FVector::ZeroVector;
	FRotator rotation = FRotator::ZeroRotator;
	if (GetCursorLocationAndRotation(MoveToLocation, rotation) == false)
	{
		this->bInAction = false;
		return;
	}

	// ���鿡 ������ ���� �ذ�
	float height = OwnerCharacter->GetCapsuleComponent()->GetScaledCapsuleHalfHeight();
	MoveToLocation.Z = MoveToLocation.Z + height;
	// ����
	float yaw = UKismetMathLibrary::FindLookAtRotation(OwnerCharacter->GetActorLocation(), MoveToLocation).Yaw;
	OwnerCharacter->SetActorRotation(FRotator(0, yaw, 0));
	DoActionDatas[0].DoAction(OwnerCharacter);

}
void UCDoAction_Warp::Begin_DoAction()
{
	Super::Begin_DoAction();
	if (!!PlayerController)
	{
		OwnerCharacter->SetActorLocation(MoveToLocation);
		MoveToLocation = FVector::ZeroVector;
		return;
	}
	CheckNull(Behavior);
	FVector test = FVector::ZeroVector;
	OwnerCharacter->SetActorLocation(test);
	CLog::MessageDialog(" TO DO  AI Control");

}
void UCDoAction_Warp::End_DoAction()
{
	Super::End_DoAction();

}
// ���۵Ǵ°� AI(X), UserControl(0)
bool UCDoAction_Warp::GetCursorLocationAndRotation(FVector& OutLocation, FRotator& OutRotation)
{
	// AI�� ���� return
	CheckNullResult(PlayerController, false);

	// Visibility�� �Ǵ°�
	FHitResult hitResult;
	PlayerController->GetHitResultUnderCursorByChannel(ETraceTypeQuery::TraceTypeQuery1, false, hitResult);
	CheckFalseResult(hitResult.bBlockingHit, false);

	OutLocation = hitResult.Location;
	OutRotation = hitResult.ImpactNormal.Rotation();
	return true;
}
