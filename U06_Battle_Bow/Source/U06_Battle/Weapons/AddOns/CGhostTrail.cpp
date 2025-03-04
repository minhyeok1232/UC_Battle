// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapons/AddOns/CGhostTrail.h"
#include "Global.h"
#include "GameFramework/Character.h"
#include "Components/PoseableMeshComponent.h"
#include "Components/CapsuleComponent.h"          
#include "Materials/MaterialInstanceConstant.h"
#include "Materials/MaterialInstanceDynamic.h"

ACGhostTrail::ACGhostTrail()
{
	CHelpers::CreateComponent<UPoseableMeshComponent>(this, &Mesh, "Mesh");

}


void ACGhostTrail::BeginPlay()
{
	Super::BeginPlay();
	
//	MaterialInstanceConstant'/Game/Materials/M_GhostTrail_Inst.M_GhostTrail_Inst'
	// material
	{
		UMaterialInstanceConstant* matrial;
		CHelpers::GetAssetDynamic<UMaterialInstanceConstant>(&matrial, "MaterialInstanceConstant'/Game/Materials/M_GhostTrail_Inst.M_GhostTrail_Inst'");
		Material = UMaterialInstanceDynamic::Create(matrial, this);
		Material->SetVectorParameterValue("Color", Color);
		Material->SetScalarParameterValue("Exp", Exponent);

	}

	Owner = Cast<ACharacter>(GetOwner());

	// 처음부터 잔상 보이지 않게
	Mesh->SetVisibility(false);
	// poseable mesh
	{
		// 1. 대상을 Select
		Mesh->SetSkeletalMesh(Owner->GetMesh()->SkeletalMesh);
		// 2. 복사
		Mesh->CopyPoseFromSkeletalComponent(Owner->GetMesh());
		Mesh->SetRelativeScale3D(Scale);
	}

	// Material Assign
	for (int32 i = 0; i < Owner->GetMesh()->SkeletalMesh->Materials.Num(); i++)
	{
		Mesh->SetMaterial(i, Material);
	}

	// 0.2초마다 PoseableMesh를 위치변경
	FTimerDelegate timerDelegate;
	timerDelegate.BindUFunction(this,"RestoreMesh");

	GetWorld()->GetTimerManager().SetTimer(TimerHandle, timerDelegate, Interval, true,StartDelay);
}

void ACGhostTrail::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
	GetWorld()->GetTimerManager().ClearTimer(TimerHandle);

}
void ACGhostTrail::RestoreMesh()
{
	if (Mesh->IsVisible() == false)
		Mesh->ToggleVisibility();

	float height = Owner->GetCapsuleComponent()->GetScaledCapsuleHalfHeight();
	FVector location = Owner->GetActorLocation() - FVector(ScaleAmount.X, ScaleAmount.Y, height - ScaleAmount.Z);
	SetActorLocation(location);
	SetActorRotation(Owner->GetActorRotation() + FRotator(0, -90, 0));

	Mesh->CopyPoseFromSkeletalComponent(Owner->GetMesh());

}

