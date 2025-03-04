// Fill out your copyright notice in the Description page of Project Settings.

#include "Weapons/CAttachment.h"
#include "Global.h"
#include "GameFramework/Character.h"
#include "Components/SceneComponent.h"
#include "Components/ShapeComponent.h"     // Shape -- Capsule,Cube
#include "Components/CMovementComponent.h"
#include "Components/CStateComponent.h"



ACAttachment::ACAttachment()
{
	CHelpers::CreateComponent<USceneComponent>(this, &Root, "Root");

}

////////////////////////////////////////////////////////
// ACAttachment
//   -BP_CAttachment_Sword 
//       |-- BeginPlay : OwnerCharacter Nothing
//        -- Root
////////////////////////////////////////////////////////
void ACAttachment::BeginPlay()
{
	// Super::BeginPlay() 후에 Character를 가져오면 Kill된다

	SetUp();
	Super::BeginPlay();
}

void ACAttachment::SetUp()
{
	// 기존생성된 데이터 변수 저장
	OwnerCharacter = Cast<ACharacter>(GetOwner());
	Movement = CHelpers::GetComponent<UCMovementComponent>(GetOwner());
	State = CHelpers::GetComponent<UCStateComponent>(GetOwner());

	// Collision을 가져옴
	// Sword :1, Fist : 4
	//
	// USceneComponent
	//   |--  UShapeCompont
	//      |--  UBoxComponent
	//      |--  UCapsuleComponent
	//      |--  USphereComponent
	//
	TArray<USceneComponent*> childern;

	Root->GetChildrenComponents(true, childern);
	for (USceneComponent* child : childern)
	{
		UShapeComponent* shape = Cast<UShapeComponent>(child);
		if (shape == false) continue;

		shape->OnComponentBeginOverlap.AddDynamic(this, &ACAttachment::OnComponentBeginOverlap);
		shape->OnComponentEndOverlap.AddDynamic(this, &ACAttachment::OnComponentEndOverlap);
		Collisions.Add(shape);  // On/Off콘트롤 변수 저장
	}

	OffCollisions();
}

void ACAttachment::OnComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	CheckTrue(OwnerCharacter == OtherActor);
	CheckTrue(OwnerCharacter->GetClass() == OtherActor->GetClass());

	if (OnAttachmentBeginOverlap.IsBound())
		OnAttachmentBeginOverlap.Broadcast(OwnerCharacter, this, Cast<ACharacter>(OtherActor));
}


void ACAttachment::OnComponentEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	CheckTrue(OwnerCharacter == OtherActor);
	CheckTrue(OwnerCharacter->GetClass() == OtherActor->GetClass());

	if (OnAttachmentEndOverlap.IsBound())
		OnAttachmentEndOverlap.Broadcast(OwnerCharacter,  Cast<ACharacter>(OtherActor));
}

void ACAttachment::AttachTo(FName InSocketName)
{
	CheckNull(OwnerCharacter);
	AttachToComponent(OwnerCharacter->GetMesh(), FAttachmentTransformRules(EAttachmentRule::KeepRelative, true), InSocketName);
}

void ACAttachment::AttachToCollision(FName InSocketName)
{
	for (UShapeComponent* collision : Collisions)
	{
		if (collision->GetName() == InSocketName.ToString())
		{
			collision->AttachToComponent(OwnerCharacter->GetMesh(), FAttachmentTransformRules(EAttachmentRule::KeepRelative, true), InSocketName);

		}
	}
}

void ACAttachment::OnCollisions()
{
	if (OnAttachmentBeginCollision.IsBound())
		OnAttachmentBeginCollision.Broadcast();  // DoAction,Equip

	for (UShapeComponent* shape : Collisions)
	{
		shape->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	}
}

void ACAttachment::OffCollisions()
{
	if (OnAttachmentEndCollision.IsBound())
		OnAttachmentEndCollision.Broadcast(); // DoAction,Equip


	for (UShapeComponent* shape : Collisions)
	{
		shape->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	}

}





