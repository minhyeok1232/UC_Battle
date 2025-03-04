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

    // Attachment에 있는 Mesh
	SkeletalMesh = CHelpers::GetComponent<USkeletalMeshComponent>(InAttachment);
	PoseableMesh = CHelpers::GetComponent<UPoseableMeshComponent>(InAttachment);

   // 주소를 보관
	ACAttachment_Bow *bow = Cast<ACAttachment_Bow>(InAttachment);
	if (!!bow)
		Bend = bow->GetBend();  // Ainmaion_Bow의 Bend의 주소를 저장

	// 활의 bow_string_mid 소켓의 위치를 저장
	OriginLocation = PoseableMesh->GetBoneLocationByName("bow_string_mid",EBoneSpaces::ComponentSpace);
	
	// 주소를 보관  : Owner->GetComp->...........
	// casting이 tick안에서 움직이기 째문에 주소로 보관
	  bEquipped = InEquipment->GetEquipped();
	
}
void UCDoAction_Bow::DoAction()
{
	// 데이터 있는지 Check
	CheckFalse(DoActionDatas.Num() > 0);
	// Idle이 아니면 return;
	CheckFalse(State->IsIdleMode());
	CheckFalse(State->IsSubActionMode());  	
	if (0)
	{
		// Aimin이전에 쏘면 사선으로 감
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

	// 손에 있는 Arror를 가져오기
	ACArrow *arrow;
	GetAttachedArrow(arrow);

	CheckNull(arrow);

	arrow->DetachFromActor(FDetachmentTransformRules(EDetachmentRule::KeepWorld, true));

	// Hit & Destory시의 Binding 처리

	arrow->OnHit.AddDynamic(this, &UCDoAction_Bow::OnArrowHit);
	arrow->OnEndPlay.AddDynamic(this, &UCDoAction_Bow::OnArrowEndPlay); // LifeSpan

	FVector forward = FQuat(OwnerCharacter->GetControlRotation()).GetForwardVector();
	arrow->Shoot(forward);

	
}

void UCDoAction_Bow::End_DoAction()
{
	Super::End_DoAction();
    CreateArrow();  // 화살을 가져오는 보타쥬가 없기깨문에 바로 생성하여 붙여 준다


	
}
// 1. WeaponAsset에서  OnBeginEquip() 바인딩 되어 있다
// 2-1. Equipment->Equip() -> Montange실행  -> Noti(Equipment->Begin_Equip)->BroadCast->현재BP의 OnBeginEquip
// 2-2 몽타쥬가 없는경우에 해당 (Bow,Hammer)
//     void UCEquipment::Equip_Implementation()를 참조  : OnBeginEquip(),
void UCDoAction_Bow::OnBeginEquip()
{
	Super::OnBeginEquip();
    // Spawn하기 위해 NoCollision
	OwnerCharacter->GetMesh()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	CreateArrow();
	
}

void UCDoAction_Bow::OnEndEquip()
{
	Super::OnEndEquip();
	// don't work
}
// 1. Attachment : Holster_Bow
// 2. DOactin    : Arrow? 삭제, 줄이 당겨져 있을때 원위치
void UCDoAction_Bow::OnUnEquip()
{
	Super::OnUnEquip();

	OwnerCharacter->GetMesh()->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	*Bend = 0.0f; // 줄이 땡겨져 있을때는  원위치 ( ABP_Bow)
	
	PoseableMesh->SetBoneLocationByName("bow_string_mid", OriginLocation, EBoneSpaces::ComponentSpace);

	// Enemy일때는 UnEquip하지 않는다
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
	  	
	      // 손에 들고 있는 Arrow를 삭제
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
	*Bend = 100.0f;     // ABP로 변경
	bAttachedString = true;
}

void UCDoAction_Bow::CreateArrow()
{
   if (World->bIsTearingDown == true) // Game종료,Level이 바뀌면
   		return;

	FTransform transform; // = FTransform::Identity;
	ACArrow* arrow = World->SpawnActorDeferred<ACArrow>(ArrowClass, transform, NULL, NULL, ESpawnActorCollisionHandlingMethod::AlwaysSpawn);
	CheckNull(arrow);

	// 화살의 생성 위치, Hit Test시 Owner를 ignore를  하기위 BeginPlay전 사전처리
   {
   	arrow->AddIgnoreActor(OwnerCharacter);

   	FAttachmentTransformRules rule = FAttachmentTransformRules(EAttachmentRule::KeepRelative, true);

   	arrow->AttachToComponent(OwnerCharacter->GetMesh(), rule, "Hand_Bow_Right_Arrow");
   	Arrows.Add(arrow);
   }
	
	UGameplayStatics::FinishSpawningActor(arrow, transform);
}
