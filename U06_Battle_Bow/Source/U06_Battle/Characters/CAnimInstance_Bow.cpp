// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/CAnimInstance_Bow.h"

void UCAnimInstance_Bow::NativeBeginPlay()
{
	Super::NativeBeginPlay();
}

void UCAnimInstance_Bow::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	if (Bend < 0.0f)
		Bend = 0.0f;
}
