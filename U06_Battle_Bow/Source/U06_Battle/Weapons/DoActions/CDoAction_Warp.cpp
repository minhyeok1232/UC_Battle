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
	// Enemy존재 
	Behavior = CHelpers::GetComponent<UCAIBehaviorComponent>(OwnerCharacter);
}
// 1. BP에서 Cusror의 위치를 찾아내서 그 위치로 표시
// 2. Tick()함수가 User가 Define한 함수
void UCDoAction_Warp::Tick(float InDeltaTime)
{
	Super::Tick(InDeltaTime);

	// DoAction중에는 동작안되게 함
	CheckTrue(this->bInAction);

	FVector location  = FVector::ZeroVector;
	FRotator rotation = FRotator::ZeroRotator;

	// 하늘에 Cursor
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
	// 데이터 있는지 Check
	CheckFalse(DoActionDatas.Num() > 0);
	// Idle이 아니면 return;
	CheckFalse(State->IsIdleMode())
	Super::DoAction();

	// 위치이동
	MoveToLocation = FVector::ZeroVector;
	FRotator rotation = FRotator::ZeroRotator;
	if (GetCursorLocationAndRotation(MoveToLocation, rotation) == false)
	{
		this->bInAction = false;
		return;
	}

	// 지면에 박히는 문제 해결
	float height = OwnerCharacter->GetCapsuleComponent()->GetScaledCapsuleHalfHeight();
	MoveToLocation.Z = MoveToLocation.Z + height;
	// 방향
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
// 동작되는곳 AI(X), UserControl(0)
bool UCDoAction_Warp::GetCursorLocationAndRotation(FVector& OutLocation, FRotator& OutRotation)
{
	// AI인 경우는 return
	CheckNullResult(PlayerController, false);

	// Visibility가 되는것
	FHitResult hitResult;
	PlayerController->GetHitResultUnderCursorByChannel(ETraceTypeQuery::TraceTypeQuery1, false, hitResult);
	CheckFalseResult(hitResult.bBlockingHit, false);

	OutLocation = hitResult.Location;
	OutRotation = hitResult.ImpactNormal.Rotation();
	return true;
}
