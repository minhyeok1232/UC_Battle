// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapons/AddOns/CArrow.h"
#include "Global.h"
#include "GameFramework/Character.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/CapsuleComponent.h"

ACArrow::ACArrow()
{
	CHelpers::CreateComponent<UCapsuleComponent>(this, &Capsule, "Capsule");
	CHelpers::CreateActorComponent<UProjectileMovementComponent>(this, &Projectile, "Projectile");

	Projectile->ProjectileGravityScale = 0.0f; // 일직선으로
	Capsule->BodyInstance.bNotifyRigidBodyCollision = true;
	Capsule->SetCollisionProfileName("BlockAll");
	
}

void ACArrow::BeginPlay()
{
	Super::BeginPlay();

	Capsule->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	Capsule->OnComponentHit.AddDynamic(this, &ACArrow::OnComponentHit);
	Projectile->Deactivate();
	
}

void ACArrow::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	//Super::EndPlay(EndPlayReason);
	// 화살이 삭제되기전에 CDoatcion_Bow Arros배열에 저장한것에서 삭제하기 위해
    if (OnEndPlay.IsBound())
    	OnEndPlay.Broadcast(this);

	Super::EndPlay(EndPlayReason);
}
 void ACArrow::OnComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	SetLifeSpan(LifeSpanAfterCollision);  // 1.0초후 Destroy->EndPlay->델리게이터호출
    
   for (AActor* actor : Ignores)
   {
		CheckTrue(actor == OtherActor) 
   }
   Capsule->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	ACharacter* character = Cast<ACharacter>(OtherActor);
	if (!!character && OnHit.IsBound())
		OnHit.Broadcast(this, character);
	
}

void ACArrow::Shoot(const FVector& InFoward)
{
	Projectile->Velocity = InFoward * Projectile->InitialSpeed;
	Projectile->Activate();  // Active하기전에 속력이 세팅
	
	Capsule->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
}


