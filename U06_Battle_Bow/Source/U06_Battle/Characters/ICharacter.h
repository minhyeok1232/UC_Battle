// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ICharacter.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UICharacter : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class U06_BATTLE_API IICharacter
{
	GENERATED_BODY()

	// 인터페이스는 여기서부터 수정가능
	// CPlayer : public Character,public UICharacter
    // 블프에서 가상함수 IDamage, 
public:
	virtual void End_Avoid() {};  // 순수가상함수(X) virtual void End_Avoid()=0
	virtual void End_Hit()   {};
	virtual void End_Dead()  {};
public:
	void  Create_DynamicMaterial(class ACharacter* InCharacter);
	void  Change_Color(class ACharacter* InCharacter, FLinearColor InColor);

};
