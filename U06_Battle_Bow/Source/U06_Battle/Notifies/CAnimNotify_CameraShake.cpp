// Fill out your copyright notice in the Description page of Project Settings.


#include "Notifies/CAnimNotify_CameraShake.h"
#include "Global.h"
#include "GameFramework/Character.h"
#include "GameFramework/PlayerController.h"
#include "Camera/CameraShake.h"

// 가정 : Player,Enemy에서 공통적으로 사용할수 있게
FString UCAnimNotify_CameraShake::GetNotifyName_Implementation() const
{
	return "CameraShake";
}

void UCAnimNotify_CameraShake::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
	Super::Notify(MeshComp, Animation);

	CHECKNULL(MeshComp);
	CHECKNULL(MeshComp->GetOwner());

	
	ACharacter* character = Cast<ACharacter>(MeshComp->GetOwner());
	CHECKNULL(character);

	APlayerController* contoller = character->GetController<APlayerController>();
	CHECKNULL(contoller);

	if(!!CameraShakeClass)
		contoller->PlayerCameraManager->StartCameraShake(CameraShakeClass);
}


