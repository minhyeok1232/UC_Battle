// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapons/DoActions/CDoAction_Tornado.h"
#include "Global.h"
#include "GameFramework/Character.h"
#include "Components/CStateComponent.h"

void UCDoAction_Tornado::OnAttachmentBeginOverlap(class ACharacter* InAttacker, AActor* InAttackerCauser, class ACharacter* InOther)
{
	Super::OnAttachmentBeginOverlap(InAttacker, InAttackerCauser, InOther);


}


void UCDoAction_Tornado::OnAttachmentEndOverlap(ACharacter* InAttacker, ACharacter* InOther)
{
}

void UCDoAction_Tornado::DoAction()
{
}

void UCDoAction_Tornado::Begin_DoAction()
{
}

void UCDoAction_Tornado::End_DoAction()
{
}
