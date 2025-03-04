// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapons/AddOns/CThornObject.h"

#include <ocidl.h>

#include "Global.h"
#include "NiagaraComponent.h"
#include "GameFramework/Character.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"

ACThornObject::ACThornObject()
{
	CHelpers::CreateComponent<USceneComponent>(this,&Root,"Root");
	//CHelpers::CreateComponent<UStaticMeshComponent>(this,&MeshComp,"Mesh",Root);
	CHelpers::CreateComponent<UNiagaraComponent>(this, &Niagara, "Niagara",Root);
	
	
	CHelpers::GetAsset<UStaticMesh>(&NiagaraMesh, "StaticMesh'/Game/sA_SkillSet_1/Models/Sm_Thorn_3.Sm_Thorn_3'");

	
	CollisionEffectTransform = FTransform::Identity;
	CollisionEffectTransform.SetScale3D(FVector(0.25,0.25,0.25));

	
	
}

// Called when the game starts or when spawned
void ACThornObject::BeginPlay()
{
	Super::BeginPlay();
	//	Callback�Լ�
	//  1.���̾ư��� : �ý���
	//    ������Ķ�̹��� -> Object(������ ���� ) : NewObject  : Callback
	//    ������Ķ�̹��� ������  ������
	//  2. 1. ��ġŬUpdate -> (+)
	//    â�� Extract->Particle ����߰�  -->  Callback

    Niagara->SetNiagaraVariableObject("Collision",this);                  // ���̾ư��� ������ --> ReceiveParticleData_Implementation
	Niagara->OnSystemFinished.AddDynamic(this,&ACThornObject::OnSystemFinished);  // Effect�Ϸ���

    if (!!NiagaraMesh)
    {
	    BoxExtent = NiagaraMesh->GetBoundingBox().GetExtent();
    }
	
}

void ACThornObject::OnSystemFinished(class UNiagaraComponent* PSyetem)
{
	Destroy();
}

// scale,position,veclocity
void ACThornObject::ReceiveParticleData_Implementation(const TArray<FBasicParticleData>& Data,
	UNiagaraSystem* NiagaraSystem)
{
	INiagaraParticleCallbackHandler::ReceiveParticleData_Implementation(Data, NiagaraSystem);
	CheckFalse(Data.Num() > 0);


    // ignore�� �������� : class����
	static TArray<AActor*> ignores;
	static FHitResult hitResult;

	ignores.AddUnique(GetOwner());
	


	for (int i=(Data.Num()-1); i >= 0; i--)
	{
      FVector position = Data[i].Position + GetActorLocation();
	  FVector scale    = Data[i].Velocity * BoxExtent;

		UKismetSystemLibrary::BoxTraceSingleByProfile(GetWorld(), position, position, scale, NiagaraMeshRotation,
				"Pawn", false, ignores, EDrawDebugTrace::ForOneFrame, hitResult, true);
		if ( !hitResult.bBlockingHit) continue;
		ACharacter* character = Cast<ACharacter>(hitResult.GetActor());
	   float height = 0.0f;
		if (!!CollisionEffect)
		{
			if (!!character)
				height = character->GetCapsuleComponent()->GetUnscaledCapsuleHalfHeight()*2.0f;
            // Effect��Ƽ�� �������� ���� 1.5��  :  180 + 90 ==> 270
			FTransform transform = CollisionEffectTransform;
            FVector location = FVector(hitResult.Location.X,hitResult.Location.Y,hitResult.Location.Z - height);
			transform.AddToTranslation(location);
			CHelpers::PlayEffect(GetWorld(),CollisionEffect,transform);
		}
		if (!!character)
			HitData.SendDamage(Cast<ACharacter>(GetOwner()),this,character);
	}



	
}


