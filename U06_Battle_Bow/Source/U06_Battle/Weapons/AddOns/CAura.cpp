// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapons/AddOns/CAura.h"
#include "Global.h"
#include "NiagaraComponent.h"
#include "GameFramework/Character.h"
#include "Components/BoxComponent.h"

// Sets default values
ACAura::ACAura()
{
	CHelpers::CreateComponent<USceneComponent>(this,&Root,"Root");
	CHelpers::CreateComponent<UNiagaraComponent>(this,&Niagara,"Niagara",Root);
	CHelpers::CreateComponent<UBoxComponent>(this,&Box,"Box",Root);

	UNiagaraSystem* niagara;
	CHelpers::GetAsset<UNiagaraSystem>(&niagara,"NiagaraSystem'/Game/sA_StylizedSwordSet/Fx/NS_Ulti_lv1.NS_Ulti_lv1'");
	Niagara->SetAsset(niagara);

	Box->SetHiddenInGame(false);
	
}

// Called when the game starts or when spawned
void ACAura::BeginPlay()
{
	Super::BeginPlay();
	// ReceiveParticleData_Implementation()함수가 호풀되도록 Callback명을 세팅
	Niagara->SetNiagaraVariableObject("Extract_Scale",this);
	Niagara->OnSystemFinished.AddDynamic(this,&ACAura::OnSystemFinished);

	// Hit
	Box->OnComponentBeginOverlap.AddDynamic(this,&ACAura::OnComponentBeginOverlap);
	Box->OnComponentEndOverlap.AddDynamic(this,&ACAura::OnComponentEndOverlap);


	// Hit시에는 Begin/End Overlap Hit에 데이터를 저장
	// Timer를 일정시가마다 Hit된것을 SendDamge로 호출

	GetWorld()->GetTimerManager().ClearTimer(TimerHandle);
    FTimerDelegate timerDelegate = FTimerDelegate::CreateLambda([&]()->void
    {
    	CLog::Print(Hit.Num());
	    for (int32 i = (Hit.Num()-1); i >= 0; i--)
	    	HitData.SendDamage(Cast<ACharacter>(GetOwner()),this,Hit[i]);
    	Hit.Empty();

    });

	GetWorld()->GetTimerManager().SetTimer(TimerHandle,timerDelegate,DamageInterval,true,0);
	
}

void ACAura::OnSystemFinished(UNiagaraComponent* PSyetem)
{
//	PrintLine();
	GetWorld()->GetTimerManager().ClearTimer(TimerHandle);
//	PrintLine();
	Destroy();
}

void ACAura::ReceiveParticleData_Implementation(const TArray<FBasicParticleData>& Data, UNiagaraSystem* NiagaraSystem)
{
	//CLog::Print(Data[0].Position);
	//CLog::Print(Data[0].Size);
	//CLog::Print("aaaaa");

	Box->SetRelativeScale3D(Data[0].Position);
	FVector location = Box->GetScaledBoxExtent();
	location.Y = 0;   // 2D이기 때문에 Culling해주기 위해
	Box->SetRelativeLocation(location);
	
}

void ACAura::OnComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	CheckTrue(GetOwner() == OtherActor);
	ACharacter* character = Cast<ACharacter>(OtherActor);
	if (!!character)
		Hit.AddUnique(character);
	
}

void ACAura::OnComponentEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	CheckTrue(GetOwner() == OtherActor);
	ACharacter* character = Cast<ACharacter>(OtherActor);
	if (!!character)
		Hit.Remove(character);
}
