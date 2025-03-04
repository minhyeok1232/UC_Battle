// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapons/AddOns/CRotate_Object.h"
#include "Global.h"
#include "GameFramework/Character.h"
#include "Components/CapsuleComponent.h"
#include "Particles/ParticleSystemComponent.h"


ACRotate_Object::ACRotate_Object()
{
	PrimaryActorTick.bCanEverTick = true;
    CHelpers::CreateComponent<UCapsuleComponent>(this,&Capsule,"Capsule");
	CHelpers::CreateComponent<UParticleSystemComponent>(this,&Particle,"Particle",Capsule);
	Capsule->SetCapsuleRadius(44);
	Capsule->SetCapsuleHalfHeight(44);

	this->InitialLifeSpan = 5.0f;
	// HitData����
	{
		HitData.Launch = 0.0f;
		HitData.Power  = 5.0f;
		CHelpers::GetAsset<UAnimMontage>(&HitData.Montage, "AnimMontage'/Game/Character/Montages/Common/HitReaction_Montage.HitReaction_Montage'");
	}
	
}

void ACRotate_Object::BeginPlay()
{
	Super::BeginPlay();
	Angle = UKismetMathLibrary::RandomIntegerInRange(0.0f,360.f);
	// �ڸ������ε�
	Capsule->OnComponentBeginOverlap.AddDynamic(this, &ACRotate_Object::OnComponentBeginOverlap);
	Capsule->OnComponentEndOverlap.AddDynamic(this, &ACRotate_Object::OnComponentEndOverlap);
    // Timer�� �̿��Ͽ� OnComponentBeginOverlap()���� ��Ʈ�� Hits�� ��Ƴ���
	// �����ð��� ������ ó��
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &ACRotate_Object::SendMessage, DamageInterval, true);
	
}
// �ܺθ�ɿ� ���� Destroy()
void ACRotate_Object::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	CLog::Print("Timer Call");
	
	GetWorld()->GetTimerManager().ClearTimer(TimerHandle);

    if (!GetWorld()->GetTimerManager().IsTimerActive(TimerHandle))
    	GetWorld()->GetTimerManager().ClearTimer(TimerHandle);
}

// Called every frame
void ACRotate_Object::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
    // �������� Owner�� ������ ��ġ�� ã�´�
	CheckNull(GetOwner());
	FVector NewLocation = GetOwner()->GetActorLocation();

	// Angle���
	{
		if (bNegative)
			Angle -= DeltaTime*Speed;
		else
			Angle += DeltaTime*Speed;
		//Angle 360/-360�� �Ǿ�����
		if (FMath::IsNearlyEqual(Angle,bNegative ? -360.0f : 360.0f))
			Angle = 0.0f;	
	}

   FVector distance = FVector(Distance.X,0,0);
	// x = centerX * distance*cos(Angle)
	FVector value =  distance.RotateAngleAxis(Angle,FVector::UpVector);
	
	NewLocation += value;
	SetActorLocation(NewLocation);
	SetActorRotation(FRotator(0,Angle,0));  // �Ҳɹ���
	
}

void ACRotate_Object::OnComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	CheckTrue(GetOwner() == OtherActor);

	ACharacter* chararcter = Cast<ACharacter>(OtherActor);
	if (!!chararcter)
		Hits.AddUnique(chararcter);
}

void ACRotate_Object::OnComponentEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	CheckTrue(GetOwner() == OtherActor);

	ACharacter* chararcter = Cast<ACharacter>(OtherActor);
	if (!!chararcter)
		Hits.Remove(chararcter);
}

void ACRotate_Object::SendMessage()
{
	if (Hits.Num() == 0)
		return;
	for (int32 i =  Hits.Num() - 1; i >= 0; i--)
	{
		HitData.SendDamage(Cast<ACharacter>(GetOwner()),this,Hits[i]);
	}
   // Destroy();
}

