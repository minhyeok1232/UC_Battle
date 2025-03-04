// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapons/Attachments/CAttachment_Bow.h"
#include "Global.h"
#include "Characters/CAnimInstance.h"
#include "Characters/CAnimInstance_Bow.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/PoseableMeshComponent.h"
#include "Components/CStateComponent.h"


ACAttachment_Bow::ACAttachment_Bow()
{
	PrimaryActorTick.bCanEverTick = true;
	CHelpers::CreateComponent<USkeletalMeshComponent>(this,&SkeletalMesh,"SkeltalMesh",Root);
	CHelpers::CreateComponent<UPoseableMeshComponent>(this,&PoseableMesh,"PoseableMesh",Root);

	USkeletalMesh *mesh;
	CHelpers::GetAsset<USkeletalMesh>(&mesh, "SkeletalMesh'/Game/Character/Weapons/ElvenBow/SK_ElvenBow.SK_ElvenBow'");
	SkeletalMesh->SetSkeletalMesh(mesh);
	SkeletalMesh->SetCollisionProfileName("NoCollision"); // 활에 숨어있는 컬리젼 꺼줌

	// Animation
	TSubclassOf<UCAnimInstance_Bow>  animInstance;
	CHelpers::GetClass<UCAnimInstance_Bow>(&animInstance, "AnimBlueprint'/Game/Weapons/Bow/ABP_Bow.ABP_Bow_C'");
	SkeletalMesh->SetAnimInstanceClass(animInstance);
}

void ACAttachment_Bow::BeginPlay()
{
	Super::BeginPlay();
	SkeletalMesh->SetVisibility(false);
	PoseableMesh->SetSkeletalMesh(SkeletalMesh->SkeletalMesh);
	PoseableMesh->CopyPoseFromSkeletalComponent(SkeletalMesh);
	
}
void ACAttachment_Bow::Tick(float DelltaTime)
{
	Super::Tick(DelltaTime);
}

void ACAttachment_Bow::OnBeginEquip_Implementation()
{
	Super::OnBeginEquip_Implementation();
	this->AttachTo("Hand_Bow_Left");

    // 커메라 조정
	APlayerController* contoller = OwnerCharacter->GetController<APlayerController>();
	if (!!contoller)
	{
		OriginViewPitchRange.X = contoller->PlayerCameraManager->ViewPitchMin;
		OriginViewPitchRange.Y = contoller->PlayerCameraManager->ViewPitchMax;

		contoller->PlayerCameraManager->ViewPitchMin = ViewPitchRange.X;  // -40.0f
		contoller->PlayerCameraManager->ViewPitchMax = ViewPitchRange.Y;  //  30.f
		
	}

}

void ACAttachment_Bow::OnUnEquip_Implementation()
{
	Super::OnUnEquip_Implementation();
	this->AttachTo("Holster_Bow");
	

	// 커메라 조정
	APlayerController* contoller = OwnerCharacter->GetController<APlayerController>();
	if (!!contoller)
	{
		contoller->PlayerCameraManager->ViewPitchMin = OriginViewPitchRange.X;  
		contoller->PlayerCameraManager->ViewPitchMax = OriginViewPitchRange.Y ;  
	}
}
// ABP에서 가져옴
float* ACAttachment_Bow::GetBend()
{
	return Cast<UCAnimInstance_Bow>(SkeletalMesh->GetAnimInstance())->GetBend();
}
