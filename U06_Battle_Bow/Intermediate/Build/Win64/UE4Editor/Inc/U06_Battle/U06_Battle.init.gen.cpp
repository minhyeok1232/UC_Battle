// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeU06_Battle_init() {}
	U06_BATTLE_API UFunction* Z_Construct_UDelegateFunction_U06_Battle_WeaponTypeChanged__DelegateSignature();
	U06_BATTLE_API UFunction* Z_Construct_UDelegateFunction_U06_Battle_StateTypeChanged__DelegateSignature();
	U06_BATTLE_API UFunction* Z_Construct_UDelegateFunction_U06_Battle_ProjectileHit__DelegateSignature();
	U06_BATTLE_API UFunction* Z_Construct_UDelegateFunction_U06_Battle_ProjectileEndPlay__DelegateSignature();
	U06_BATTLE_API UFunction* Z_Construct_UDelegateFunction_U06_Battle_AttachmentBeginCollision__DelegateSignature();
	U06_BATTLE_API UFunction* Z_Construct_UDelegateFunction_U06_Battle_AttachmentEndCollision__DelegateSignature();
	U06_BATTLE_API UFunction* Z_Construct_UDelegateFunction_U06_Battle_AttachmentBeginOverlap__DelegateSignature();
	U06_BATTLE_API UFunction* Z_Construct_UDelegateFunction_U06_Battle_AttachmentEndOverlap__DelegateSignature();
	U06_BATTLE_API UFunction* Z_Construct_UDelegateFunction_U06_Battle_Equipment_BeginEquip__DelegateSignature();
	U06_BATTLE_API UFunction* Z_Construct_UDelegateFunction_U06_Battle_Equipment_EndEquip__DelegateSignature();
	U06_BATTLE_API UFunction* Z_Construct_UDelegateFunction_U06_Battle_Equipment_UnEquip__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_U06_Battle()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_U06_Battle_WeaponTypeChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_U06_Battle_StateTypeChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_U06_Battle_ProjectileHit__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_U06_Battle_ProjectileEndPlay__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_U06_Battle_AttachmentBeginCollision__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_U06_Battle_AttachmentEndCollision__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_U06_Battle_AttachmentBeginOverlap__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_U06_Battle_AttachmentEndOverlap__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_U06_Battle_Equipment_BeginEquip__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_U06_Battle_Equipment_EndEquip__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_U06_Battle_Equipment_UnEquip__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/U06_Battle",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xDC5743E1,
				0x02C13D54,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
