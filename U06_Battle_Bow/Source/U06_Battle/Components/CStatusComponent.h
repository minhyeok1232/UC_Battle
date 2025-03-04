// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CStatusComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class U06_BATTLE_API UCStatusComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, Category = "Health")
		float MaxHealth = 100.0f;

private:
	class ACharacter* OwnerCharacter;
	float Health = 0.0f;

public:	
	UCStatusComponent();

protected:
	virtual void BeginPlay() override;

public:
	void   Damage(float InAmount);

public:
	FORCEINLINE float GetMaxHealth() { return MaxHealth; }
	FORCEINLINE float GetHealth()    { return Health; }
	FORCEINLINE bool  IsDead()       { return Health <= 0.0f; }
};
