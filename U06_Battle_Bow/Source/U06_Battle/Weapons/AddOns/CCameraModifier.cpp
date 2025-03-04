// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapons/AddOns/CCameraModifier.h"
#include  "Global.h"

// ī�޶��� ��ġ/ȸ��/FOV�k �����Ϸ���
void UCCameraModifier::ModifyCamera(float DeltaTime, FVector ViewLocation, FRotator ViewRotation, float FOV, FVector& NewViewLocation, FRotator& NewViewRotation, float& NewFOV)
{
	Super::ModifyCamera(DeltaTime, ViewLocation, ViewRotation, FOV, NewViewLocation, NewViewRotation, NewFOV);

	CLog::Print(ViewLocation, 0);
	CLog::Print(ViewRotation, 1);

	ViewLocation = Location;
	ViewRotation = Rotation;

}