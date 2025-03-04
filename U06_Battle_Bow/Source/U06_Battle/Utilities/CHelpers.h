// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Particles/ParticleSystem.h"
#include "NiagaraSystem.h"
#include "NiagaraFunctionLibrary.h"
#include "GameFramework/Character.h"
#include "Components/CapsuleComponent.h"
#include "Weapons/AddOns/CGhostTrail.h"

#define  CN(x) {if(x==nullptr) return;}
#define  CheckTrue(x)  { if(x==true) return;}
#define  CheckTrueResult(x,y)  { if(x==true) return y;}

#define  CheckFalse(x)  { if(x==false) return;}
#define  CheckFalseResult(x,y)  { if(x==false) return y;}

#define  CheckNull(x) { if(x==nullptr)    return;}
#define  CHECKNULL(x) { if(x==nullptr) {   CLog::Print(x); return;} }
#define  CheckNullResult(x,y)  { if(x==nullptr) return y;}

#define  CreateTextRender() \
{ \
	CHelpers::CreateComponent<UTextRenderComponent>(this, &Text, "Text", Root);\
	Text->SetRelativeLocation(FVector(0, 0, 100));\
	Text->SetRelativeRotation(FRotator(0, 180, 0));\
	Text->SetWorldScale3D(FVector(2));\
	Text->TextRenderColor = FColor::Red;\
	Text->HorizontalAlignment = EHorizTextAligment::EHTA_Center;\
	Text->Text = FText::FromString(GetName().Replace(L"Default__", L""));\
}\





class U06_BATTLE_API CHelpers
{
public:
    template<typename T>
    static void CreateComponent(AActor* InActor, T** OutComponent, FName InName, USceneComponent* InParent = nullptr, FName InSocketName = NAME_None)
    {
        *OutComponent = InActor->CreateDefaultSubobject<T>(InName);
        if (!!InParent)
        {
			// �����ڿ����� SetupAttachment()�� �����ϴ�
            // ���ϸ� _�� ������  _�� space���ڷ� ����� ������ ���Ǹ� ���Ѵ�
            (*OutComponent)->SetupAttachment(InParent,InSocketName);
            return;
        }
        InActor->SetRootComponent(*OutComponent);
    }

	template<typename T>
	static void CreateActorComponent(AActor* InActor, T** OutComponent, FName InName)
	{
		*OutComponent = InActor->CreateDefaultSubobject<T>(InName);		
	}

    template<typename T>
    static void GetAsset(T** OutObject, FString InPath)
    {
        ConstructorHelpers::FObjectFinder<T>  asset(*InPath);
        *OutObject = asset.Object;
    }

    template<typename T>
    static void GetAssetDynamic(T** OutObject, FString InPath)
    {
        *OutObject = Cast<T>(StaticLoadObject(T::StaticClass(), nullptr, *InPath));
    }

	template<typename T>
	static void GetClass(TSubclassOf<T>* OutObject, FString InPath)
	{
		ConstructorHelpers::FClassFinder<T> asset(*InPath);
		*OutObject = asset.Class;
	}

	template<typename T>
	static T* FindActor(UWorld* InWorld)
	{
		for (AActor* actor : InWorld->GetCurrentLevel()->Actors)
		{
			// actor�� Null�ΰ� üũ�ϴ� ������ pendingKill
			if (!!actor && actor->IsA<T>()) // !!actor(���Ͱ� NULL�� �ƴϰ�),AC04_Trigger�� ��Ӱ��谡 �´ٸ�
			{
				return Cast<T>(actor);
			}
		}
		return nullptr;
	}

	template<typename T>
	static void FindActors(UWorld* InWorld, TArray<T*>& OutActors)
	{
		OutActors.Empty();
		for (AActor* actor : InWorld->GetCurrentLevel()->Actors)
		{
			if (!!actor  && actor->IsA<T>())
				OutActors.Add(Cast<T>(actor));
		}
	}

	// ��������
	static void AttachTo(AActor* InActor, USceneComponent* InParent, const FName& InSocketName)
	{
		InActor->AttachToComponent(InParent, FAttachmentTransformRules(EAttachmentRule::KeepRelative, true), InSocketName);
	}

    template<typename T>
    static T*  GetComponent(AActor* InActor)
    {

        return Cast<T>(InActor->GetComponentByClass(T::StaticClass()));
    }

	template<typename T>
	static T*  GetComponent(AActor* InActor, const FString& InName)
	{
		TArray<T*> components;
		InActor->GetComponents<T>(components);

		for (T* component : components)
		{
			if (component->GetName() == InName)
				return component;
		}
		return nullptr;
	}

	// UFXSystemAsset : ��ƼŬ,���̾ư��� 
    static void PlayEffect(UWorld* InWorld, UFXSystemAsset* InAsset, const FTransform& InTransform,
        USkeletalMeshComponent* InMesh = nullptr, FName InSocketName = NAME_None)
    {
        UParticleSystem* particle = Cast<UParticleSystem>(InAsset);
        UNiagaraSystem*  niagara  = Cast<UNiagaraSystem>(InAsset);

		FVector location = InTransform.GetLocation();
		FRotator rotation = FRotator(InTransform.GetRotation());
		FVector scale = InTransform.GetScale3D();

        if (!!InMesh)
        {
            if (!!particle)
            {
              //  UGameplayStatics::SpawnEmitterAtLocation(InWorld, particle, InTransform);
				UGameplayStatics::SpawnEmitterAttached(particle, InMesh, InSocketName, location, rotation, scale);
			//	CLog::Print("Particle");
			}
            if (!!niagara)
            {
				UNiagaraFunctionLibrary::SpawnSystemAttached(niagara, InMesh, InSocketName, location, rotation, scale, EAttachLocation::KeepRelativeOffset, true,
					ENCPoolMethod::None);
            }


            return;
        }
        if (!!particle)
        {
            UGameplayStatics::SpawnEmitterAtLocation(InWorld, particle, InTransform);
            return;
        }
        if (!!niagara)
        {
			UNiagaraFunctionLibrary::SpawnSystemAtLocation(InWorld, niagara,location,rotation, scale);
            return;
        }

    }
   static ACGhostTrail* Play_GhostTrail(TSubclassOf<ACGhostTrail>& InClass, ACharacter* InOwner)
   {
       CheckNullResult(InClass, nullptr);
       CheckNullResult(InOwner, nullptr);
   
       FTransform transform;
       FVector vector = InOwner->GetActorLocation();
       vector.Z -= InOwner->GetCapsuleComponent()->GetScaledCapsuleHalfHeight();
       transform.SetTranslation(vector);
   
   
       FActorSpawnParameters params;
       params.Owner = InOwner;
       params.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
       
   
       return InOwner->GetWorld()->SpawnActor<ACGhostTrail>(InClass, transform, params);
   
   }

};
