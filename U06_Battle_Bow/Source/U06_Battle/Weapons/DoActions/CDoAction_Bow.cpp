// Fill out your copyright notice in the Description page of Project Settings.

#include "Weapons/DoActions/CDoAction_Bow.h"
#include "Global.h"
#include "AIController.h"
#include "Weapons/CEquipment.h"
#include "GameFramework/Character.h"
#include "Components/CStateComponent.h"
#include "Components/CMovementComponent.h"
#include "Components/PoseableMeshComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Weapons/CAttachment.h"
#include "Weapons/Attachments/CAttachment_Bow.h"
#include "Weapons/AddOns/CArrow.h"

UCDoAction_Bow::UCDoAction_Bow()
{
}

void UCDoAction_Bow::BeginPlay(class ACharacter* InOwner, class ACAttachment* InAttachment,
	class UCEquipment* InEquipment, TArray<FDoActionData>& InDoActionData, TArray<FHitData>& InHitData)
{
	Super::BeginPlay(InOwner, InAttachment, InEquipment, InDoActionData, InHitData);

	State = CHelpers::GetComponent<UCStateComponent>(InOwner);

    // Attachment�� �ִ� Mesh
	SkeletalMesh = CHelpers::GetComponent<USkeletalMeshComponent>(InAttachment);
	PoseableMesh = CHelpers::GetComponent<UPoseableMeshComponent>(InAttachment);

   // �ּҸ� ����
	ACAttachment_Bow *bow = Cast<ACAttachment_Bow>(InAttachment);
	if (!!bow)
		Bend = bow->GetBend();  // Ainmaion_Bow�� Bend�� �ּҸ� ����

	// Ȱ�� bow_string_mid ������ ��ġ�� ����
	OriginLocation = PoseableMesh->GetBoneLocationByName("bow_string_mid",EBoneSpaces::ComponentSpace);
	
	// �ּҸ� ����  : Owner->GetComp->...........
	// casting�� tick�ȿ��� �����̱� °���� �ּҷ� ����
	  bEquipped = InEquipment->GetEquipped();
	
}
void UCDoAction_Bow::DoAction()
{
	// ������ �ִ��� Check
	CheckFalse(DoActionDatas.Num() > 0);
	// Idle�� �ƴϸ� return;
	CheckFalse(State->IsIdleMode());
	CheckFalse(State->IsSubActionMode());  	
	if (0)
	{
		// Aimin������ ��� �缱���� ��
		CheckTrue(State->IsSubActionMode());  	
	}

	Super::DoAction();

	DoActionDatas[0].DoAction(OwnerCharacter);
	
	
}
void UCDoAction_Bow::Tick(float InDeltaTime)
{
	Super::Tick(InDeltaTime);
	
	bool bCheck = true;
	bCheck &= (*bEquipped == true);
	bCheck &= (bBeginAction == false);
	bCheck &= (bAttachedString == true);

	CheckFalse(bCheck);


	PoseableMesh->CopyPoseFromSkeletalComponent(SkeletalMesh);
	FVector handLoction = OwnerCharacter->GetMesh()->GetSocketLocation("Hand_Bow_Right");
	PoseableMesh->SetBoneLocationByName("bow_string_mid", handLoction, EBoneSpaces::WorldSpace);
}

void UCDoAction_Bow::Begin_DoAction()
{
	Super::Begin_DoAction();

	CheckNull(OwnerCharacter);

	bAttachedString = false;

	*Bend = 0;

	PoseableMesh->SetBoneLocationByName("bow_string_mid",OriginLocation, EBoneSpaces::ComponentSpace);

	// �տ� �ִ� Arror�� ��������
	ACArrow *arrow;
	GetAttachedArrow(arrow);

	CheckNull(arrow);

	arrow->DetachFromActor(FDetachmentTransformRules(EDetachmentRule::KeepWorld, true));

	// Hit & Destory���� Binding ó��

	arrow->OnHit.AddDynamic(this, &UCDoAction_Bow::OnArrowHit);
	arrow->OnEndPlay.AddDynamic(this, &UCDoAction_Bow::OnArrowEndPlay); // LifeSpan

	FVector forward = FQuat(OwnerCharacter->GetControlRotation()).GetForwardVector();
	arrow->Shoot(forward);

	
}

void UCDoAction_Bow::End_DoAction()
{
	Super::End_DoAction();
    CreateArrow();  // ȭ���� �������� ��Ÿ�갡 ��������� �ٷ� �����Ͽ� �ٿ� �ش�


	
}
// 1. WeaponAsset����  OnBeginEquip() ���ε� �Ǿ� �ִ�
// 2-1. Equipment->Equip() -> Montange����  -> Noti(Equipment->Begin_Equip)->BroadCast->����BP�� OnBeginEquip
// 2-2 ��Ÿ�갡 ���°�쿡 �ش� (Bow,Hammer)
//     void UCEquipment::Equip_Implementation()�� ����  : OnBeginEquip(),
void UCDoAction_Bow::OnBeginEquip()
{
	Super::OnBeginEquip();
    // Spawn�ϱ� ���� NoCollision
	OwnerCharacter->GetMesh()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	CreateArrow();
	
}

void UCDoAction_Bow::OnEndEquip()
{
	Super::OnEndEquip();
	// don't work
}
// 1. Attachment : Holster_Bow
// 2. DOactin    : Arrow? ����, ���� ����� ������ ����ġ
void UCDoAction_Bow::OnUnEquip()
{
	Super::OnUnEquip();

	OwnerCharacter->GetMesh()->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	*Bend = 0.0f; // ���� ������ ��������  ����ġ ( ABP_Bow)
	
	PoseableMesh->SetBoneLocationByName("bow_string_mid", OriginLocation, EBoneSpaces::ComponentSpace);

	// Enemy�϶��� UnEquip���� �ʴ´�
	if (!!OwnerCharacter->GetController<AAIController>())
		return;
	
	Arrows.Empty();
	
}

void UCDoAction_Bow::OnArrowHit(class AActor* InCauser, class ACharacter* InOtherCharacter)
{
	CheckFalse(HitDatas.Num() > 0);
	HitDatas[0].SendDamage(OwnerCharacter, InCauser, InOtherCharacter);
}

void UCDoAction_Bow::OnArrowEndPlay(class ACArrow* InDestroyer)
{
	// don't work
}

void UCDoAction_Bow::GetAttachedArrow(class  ACArrow*& arrow)
{

	arrow = nullptr;
	
	  for (int32 i = Arrows.Num() - 1; i >= 0; i--)
	  {
	  	
	      // �տ� ��� �ִ� Arrow�� ����
	      if (!!Arrows[i]->GetAttachParentActor())
	      {
	      	arrow = Arrows[i];
	      	Arrows.Remove(arrow);
	      	return;
	      }
	  }
}

void UCDoAction_Bow::End_BowString()
{
	*Bend = 100.0f;     // ABP�� ����
	bAttachedString = true;
}

void UCDoAction_Bow::CreateArrow()
{
   if (World->bIsTearingDown == true) // Game����,Level�� �ٲ��
   		return;

	FTransform transform; // = FTransform::Identity;
	ACArrow* arrow = World->SpawnActorDeferred<ACArrow>(ArrowClass, transform, NULL, NULL, ESpawnActorCollisionHandlingMethod::AlwaysSpawn);
	CheckNull(arrow);

	// ȭ���� ���� ��ġ, Hit Test�� Owner�� ignore��  �ϱ��� BeginPlay�� ����ó��
   {
   	arrow->AddIgnoreActor(OwnerCharacter);

   	FAttachmentTransformRules rule = FAttachmentTransformRules(EAttachmentRule::KeepRelative, true);

   	arrow->AttachToComponent(OwnerCharacter->GetMesh(), rule, "Hand_Bow_Right_Arrow");
   	Arrows.Add(arrow);
   }
	
	UGameplayStatics::FinishSpawningActor(arrow, transform);
}
