#include "Weapons/SubActions/CSubAction_Fist.h"
#include "Weapons/CSubAction.h"              
#include "Global.h"
#include "Components/CStateComponent.h"     //UCSubAction
#include "Components/CMovementComponent.h"  //UCSubAction
#include "Weapons/CAttachment.h"            //UCSubAction
#include "Weapons/CDoAction.h"              //UCSubAction
#include "Weapons/AddOns/CGhostTrail.h"

void UCSubAction_Fist::Pressed()
{
	CheckFalse(State->IsIdleMode());        // Idle모드가 아니면 리턴
	CheckTrue(State->IsSubActionMode());    // 연달아 들어 오는거 방지

	Super::Pressed();  // bAction : true
	State->SetActionMode();
	State->OnSubActionMode();
	if (!!GhostTrailClass)
		GhostTrail = CHelpers::Play_GhostTrail(GhostTrailClass, Owner);

	ActionData.DoAction(Owner);
}
void UCSubAction_Fist::Released()
{
	Super::Released();

}

void UCSubAction_Fist::Begin_SubAction_Implementation()
{
	Super::Begin_SubAction_Implementation();
	// 기존 Doction에 Bind된 것을 삭제
	Attachment->OnAttachmentBeginOverlap.Remove(DoAction, "OnAttachmentBeginOverlap");
	Attachment->OnAttachmentEndCollision.Remove(DoAction, "OnAttachmentEndCollision");

	// 바인딩
	Attachment->OnAttachmentBeginOverlap.AddDynamic(this, &UCSubAction_Fist::OnAttachmentBeginOverlap);
	Attachment->OnAttachmentEndCollision.AddDynamic(this,   &UCSubAction_Fist::OnAttachmentEndCollision);

}
void UCSubAction_Fist::End_SubAction_Implementation()
{
	Super::End_SubAction_Implementation();


	// 현재 Bind 4중 2개를된 것을 삭제
	Attachment->OnAttachmentBeginOverlap.Remove(this, "OnAttachmentBeginOverlap");
	Attachment->OnAttachmentEndCollision.Remove(this, "OnAttachmentEndCollision");

	// 현재 함수로 제바인딩
	Attachment->OnAttachmentBeginOverlap.AddDynamic(DoAction, &UCDoAction::OnAttachmentBeginOverlap);
	Attachment->OnAttachmentEndCollision.AddDynamic(DoAction,   &UCDoAction::OnAttachmentEndCollision);



	State->SetIdleMode();
	State->OffSubActionMode();

	// DoAction에 변경된것이 있으면 원위치
	Movement->Move();
	Movement->DisableFixedCamera();

	if (!!GhostTrail)
		GhostTrail->Destroy();

}
void UCSubAction_Fist::OnAttachmentBeginOverlap(ACharacter* InAttacker, AActor* InAttackCuaser, ACharacter* InOther)
{
	CheckNull(InOther);
	// Hit된 데이터를 배열에 저장
//	for (ACharacter* character : Hit)
//	{
//		if (InOther == character)
//			return;
//	}
//	Hit.AddUnique(InOther);
//
//	CheckTrue(HitIndex >= HitDatas.Num());
	HitDatas[0].SendDamage(Owner, InAttackCuaser, InOther, 1);

}
void UCSubAction_Fist::OnAttachmentEndCollision()
{
	CLog::Print("EndCollision");
	Hit.Empty();
	HitIndex++;
}