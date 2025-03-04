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
	CheckFalse(State->IsIdleMode());        // Idle��尡 �ƴϸ� ����
	CheckTrue(State->IsSubActionMode());    // ���޾� ��� ���°� ����

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
	// ���� Doction�� Bind�� ���� ����
	Attachment->OnAttachmentBeginOverlap.Remove(DoAction, "OnAttachmentBeginOverlap");
	Attachment->OnAttachmentEndCollision.Remove(DoAction, "OnAttachmentEndCollision");

	// ���ε�
	Attachment->OnAttachmentBeginOverlap.AddDynamic(this, &UCSubAction_Fist::OnAttachmentBeginOverlap);
	Attachment->OnAttachmentEndCollision.AddDynamic(this,   &UCSubAction_Fist::OnAttachmentEndCollision);

}
void UCSubAction_Fist::End_SubAction_Implementation()
{
	Super::End_SubAction_Implementation();


	// ���� Bind 4�� 2������ ���� ����
	Attachment->OnAttachmentBeginOverlap.Remove(this, "OnAttachmentBeginOverlap");
	Attachment->OnAttachmentEndCollision.Remove(this, "OnAttachmentEndCollision");

	// ���� �Լ��� �����ε�
	Attachment->OnAttachmentBeginOverlap.AddDynamic(DoAction, &UCDoAction::OnAttachmentBeginOverlap);
	Attachment->OnAttachmentEndCollision.AddDynamic(DoAction,   &UCDoAction::OnAttachmentEndCollision);



	State->SetIdleMode();
	State->OffSubActionMode();

	// DoAction�� ����Ȱ��� ������ ����ġ
	Movement->Move();
	Movement->DisableFixedCamera();

	if (!!GhostTrail)
		GhostTrail->Destroy();

}
void UCSubAction_Fist::OnAttachmentBeginOverlap(ACharacter* InAttacker, AActor* InAttackCuaser, ACharacter* InOther)
{
	CheckNull(InOther);
	// Hit�� �����͸� �迭�� ����
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