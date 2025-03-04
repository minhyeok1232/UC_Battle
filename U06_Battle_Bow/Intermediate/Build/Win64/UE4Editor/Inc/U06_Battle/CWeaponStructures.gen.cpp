// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "U06_Battle/Weapons/CWeaponStructures.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCWeaponStructures() {}
// Cross Module References
	U06_BATTLE_API UScriptStruct* Z_Construct_UScriptStruct_FActionDamageEvent();
	UPackage* Z_Construct_UPackage__Script_U06_Battle();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDamageEvent();
	U06_BATTLE_API UScriptStruct* Z_Construct_UScriptStruct_FHitData();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UFXSystemAsset_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	U06_BATTLE_API UScriptStruct* Z_Construct_UScriptStruct_FDoActionData();
	U06_BATTLE_API UScriptStruct* Z_Construct_UScriptStruct_FEquipmentData();
	U06_BATTLE_API UClass* Z_Construct_UClass_UCWeaponStructures_NoRegister();
	U06_BATTLE_API UClass* Z_Construct_UClass_UCWeaponStructures();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References

static_assert(std::is_polymorphic<FActionDamageEvent>() == std::is_polymorphic<FDamageEvent>(), "USTRUCT FActionDamageEvent cannot be polymorphic unless super FDamageEvent is polymorphic");

class UScriptStruct* FActionDamageEvent::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern U06_BATTLE_API uint32 Get_Z_Construct_UScriptStruct_FActionDamageEvent_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FActionDamageEvent, Z_Construct_UPackage__Script_U06_Battle(), TEXT("ActionDamageEvent"), sizeof(FActionDamageEvent), Get_Z_Construct_UScriptStruct_FActionDamageEvent_Hash());
	}
	return Singleton;
}
template<> U06_BATTLE_API UScriptStruct* StaticStruct<FActionDamageEvent>()
{
	return FActionDamageEvent::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FActionDamageEvent(FActionDamageEvent::StaticStruct, TEXT("/Script/U06_Battle"), TEXT("ActionDamageEvent"), false, nullptr, nullptr);
static struct FScriptStruct_U06_Battle_StaticRegisterNativesFActionDamageEvent
{
	FScriptStruct_U06_Battle_StaticRegisterNativesFActionDamageEvent()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ActionDamageEvent")),new UScriptStruct::TCppStructOps<FActionDamageEvent>);
	}
} ScriptStruct_U06_Battle_StaticRegisterNativesFActionDamageEvent;
	struct Z_Construct_UScriptStruct_FActionDamageEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActionDamageEvent_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "//-----------------------------------------------\n// TakeDamage()?? Call?\xd2\xb6? User?? ?????? ?????\xcd\xb8? ????????\n// FDamageEvent?? ???? ?\xde\xbe\xc6\xbc? ?????\xcf\xb8? ?\xc8\xb4?\n//-----------------------------------------------\n" },
		{ "ModuleRelativePath", "Weapons/CWeaponStructures.h" },
		{ "ToolTip", "TakeDamage()?? Call?\xd2\xb6? User?? ?????? ?????\xcd\xb8? ????????\nFDamageEvent?? ???? ?\xde\xbe\xc6\xbc? ?????\xcf\xb8? ?\xc8\xb4?" },
	};
#endif
	void* Z_Construct_UScriptStruct_FActionDamageEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActionDamageEvent>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActionDamageEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_U06_Battle,
		Z_Construct_UScriptStruct_FDamageEvent,
		&NewStructOps,
		"ActionDamageEvent",
		sizeof(FActionDamageEvent),
		alignof(FActionDamageEvent),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FActionDamageEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionDamageEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FActionDamageEvent()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FActionDamageEvent_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_U06_Battle();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ActionDamageEvent"), sizeof(FActionDamageEvent), Get_Z_Construct_UScriptStruct_FActionDamageEvent_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FActionDamageEvent_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FActionDamageEvent_Hash() { return 2438500169U; }
class UScriptStruct* FHitData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern U06_BATTLE_API uint32 Get_Z_Construct_UScriptStruct_FHitData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHitData, Z_Construct_UPackage__Script_U06_Battle(), TEXT("HitData"), sizeof(FHitData), Get_Z_Construct_UScriptStruct_FHitData_Hash());
	}
	return Singleton;
}
template<> U06_BATTLE_API UScriptStruct* StaticStruct<FHitData>()
{
	return FHitData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHitData(FHitData::StaticStruct, TEXT("/Script/U06_Battle"), TEXT("HitData"), false, nullptr, nullptr);
static struct FScriptStruct_U06_Battle_StaticRegisterNativesFHitData
{
	FScriptStruct_U06_Battle_StaticRegisterNativesFHitData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("HitData")),new UScriptStruct::TCppStructOps<FHitData>);
	}
} ScriptStruct_U06_Battle_StaticRegisterNativesFHitData;
	struct Z_Construct_UScriptStruct_FHitData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Montage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Power_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Power;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Launch_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Launch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StopTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StopTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Effect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Effect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EffectLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EffectScale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "//-----------------------------------------------\n// Hit???? ??????\n// 1. Animation, 2. Sound, 3. ???? 4. Camera Shake\n//-----------------------------------------------\n" },
		{ "ModuleRelativePath", "Weapons/CWeaponStructures.h" },
		{ "ToolTip", "Hit???? ??????\n1. Animation, 2. Sound, 3. ???? 4. Camera Shake" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHitData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHitData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitData_Statics::NewProp_Montage_MetaData[] = {
		{ "Category", "HitData" },
		{ "ModuleRelativePath", "Weapons/CWeaponStructures.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHitData_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHitData, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHitData_Statics::NewProp_Montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitData_Statics::NewProp_Montage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitData_Statics::NewProp_PlayRate_MetaData[] = {
		{ "Category", "HitData" },
		{ "ModuleRelativePath", "Weapons/CWeaponStructures.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHitData_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHitData, PlayRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FHitData_Statics::NewProp_PlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitData_Statics::NewProp_PlayRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitData_Statics::NewProp_Power_MetaData[] = {
		{ "Category", "HitData" },
		{ "ModuleRelativePath", "Weapons/CWeaponStructures.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHitData_Statics::NewProp_Power = { "Power", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHitData, Power), METADATA_PARAMS(Z_Construct_UScriptStruct_FHitData_Statics::NewProp_Power_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitData_Statics::NewProp_Power_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitData_Statics::NewProp_Launch_MetaData[] = {
		{ "Category", "HitData" },
		{ "Comment", "// Damage\n" },
		{ "ModuleRelativePath", "Weapons/CWeaponStructures.h" },
		{ "ToolTip", "Damage" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHitData_Statics::NewProp_Launch = { "Launch", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHitData, Launch), METADATA_PARAMS(Z_Construct_UScriptStruct_FHitData_Statics::NewProp_Launch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitData_Statics::NewProp_Launch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitData_Statics::NewProp_StopTime_MetaData[] = {
		{ "Category", "HitData" },
		{ "ModuleRelativePath", "Weapons/CWeaponStructures.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHitData_Statics::NewProp_StopTime = { "StopTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHitData, StopTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FHitData_Statics::NewProp_StopTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitData_Statics::NewProp_StopTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitData_Statics::NewProp_Sound_MetaData[] = {
		{ "Category", "HitData" },
		{ "Comment", "// Hit Stop\n" },
		{ "ModuleRelativePath", "Weapons/CWeaponStructures.h" },
		{ "ToolTip", "Hit Stop" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHitData_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHitData, Sound), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHitData_Statics::NewProp_Sound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitData_Statics::NewProp_Sound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitData_Statics::NewProp_Effect_MetaData[] = {
		{ "Category", "HitData" },
		{ "ModuleRelativePath", "Weapons/CWeaponStructures.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHitData_Statics::NewProp_Effect = { "Effect", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHitData, Effect), Z_Construct_UClass_UFXSystemAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHitData_Statics::NewProp_Effect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitData_Statics::NewProp_Effect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitData_Statics::NewProp_EffectLocation_MetaData[] = {
		{ "Category", "HitData" },
		{ "ModuleRelativePath", "Weapons/CWeaponStructures.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHitData_Statics::NewProp_EffectLocation = { "EffectLocation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHitData, EffectLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FHitData_Statics::NewProp_EffectLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitData_Statics::NewProp_EffectLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitData_Statics::NewProp_EffectScale_MetaData[] = {
		{ "Category", "HitData" },
		{ "ModuleRelativePath", "Weapons/CWeaponStructures.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHitData_Statics::NewProp_EffectScale = { "EffectScale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHitData, EffectScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FHitData_Statics::NewProp_EffectScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitData_Statics::NewProp_EffectScale_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHitData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitData_Statics::NewProp_Montage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitData_Statics::NewProp_PlayRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitData_Statics::NewProp_Power,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitData_Statics::NewProp_Launch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitData_Statics::NewProp_StopTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitData_Statics::NewProp_Sound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitData_Statics::NewProp_Effect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitData_Statics::NewProp_EffectLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitData_Statics::NewProp_EffectScale,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHitData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_U06_Battle,
		nullptr,
		&NewStructOps,
		"HitData",
		sizeof(FHitData),
		alignof(FHitData),
		Z_Construct_UScriptStruct_FHitData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHitData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHitData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHitData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_U06_Battle();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HitData"), sizeof(FHitData), Get_Z_Construct_UScriptStruct_FHitData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHitData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHitData_Hash() { return 355219821U; }
class UScriptStruct* FDoActionData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern U06_BATTLE_API uint32 Get_Z_Construct_UScriptStruct_FDoActionData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDoActionData, Z_Construct_UPackage__Script_U06_Battle(), TEXT("DoActionData"), sizeof(FDoActionData), Get_Z_Construct_UScriptStruct_FDoActionData_Hash());
	}
	return Singleton;
}
template<> U06_BATTLE_API UScriptStruct* StaticStruct<FDoActionData>()
{
	return FDoActionData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDoActionData(FDoActionData::StaticStruct, TEXT("/Script/U06_Battle"), TEXT("DoActionData"), false, nullptr, nullptr);
static struct FScriptStruct_U06_Battle_StaticRegisterNativesFDoActionData
{
	FScriptStruct_U06_Battle_StaticRegisterNativesFDoActionData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DoActionData")),new UScriptStruct::TCppStructOps<FDoActionData>);
	}
} ScriptStruct_U06_Battle_StaticRegisterNativesFDoActionData;
	struct Z_Construct_UScriptStruct_FDoActionData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Montage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanMove_MetaData[];
#endif
		static void NewProp_bCanMove_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanMove;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFixedCamera_MetaData[];
#endif
		static void NewProp_bFixedCamera_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFixedCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Effect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Effect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EffectLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EffectScale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDoActionData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "//-----------------------------------------------\n// ???\xdd\xb0??? ??????\n//-----------------------------------------------\n" },
		{ "ModuleRelativePath", "Weapons/CWeaponStructures.h" },
		{ "ToolTip", "???\xdd\xb0??? ??????" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDoActionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDoActionData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDoActionData_Statics::NewProp_Montage_MetaData[] = {
		{ "Category", "DoActionData" },
		{ "ModuleRelativePath", "Weapons/CWeaponStructures.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDoActionData_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDoActionData, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDoActionData_Statics::NewProp_Montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoActionData_Statics::NewProp_Montage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDoActionData_Statics::NewProp_PlayRate_MetaData[] = {
		{ "Category", "DoActionData" },
		{ "ModuleRelativePath", "Weapons/CWeaponStructures.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDoActionData_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDoActionData, PlayRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FDoActionData_Statics::NewProp_PlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoActionData_Statics::NewProp_PlayRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDoActionData_Statics::NewProp_bCanMove_MetaData[] = {
		{ "Category", "DoActionData" },
		{ "ModuleRelativePath", "Weapons/CWeaponStructures.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDoActionData_Statics::NewProp_bCanMove_SetBit(void* Obj)
	{
		((FDoActionData*)Obj)->bCanMove = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDoActionData_Statics::NewProp_bCanMove = { "bCanMove", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDoActionData), &Z_Construct_UScriptStruct_FDoActionData_Statics::NewProp_bCanMove_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDoActionData_Statics::NewProp_bCanMove_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoActionData_Statics::NewProp_bCanMove_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDoActionData_Statics::NewProp_bFixedCamera_MetaData[] = {
		{ "Category", "DoActionData" },
		{ "ModuleRelativePath", "Weapons/CWeaponStructures.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDoActionData_Statics::NewProp_bFixedCamera_SetBit(void* Obj)
	{
		((FDoActionData*)Obj)->bFixedCamera = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDoActionData_Statics::NewProp_bFixedCamera = { "bFixedCamera", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDoActionData), &Z_Construct_UScriptStruct_FDoActionData_Statics::NewProp_bFixedCamera_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDoActionData_Statics::NewProp_bFixedCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoActionData_Statics::NewProp_bFixedCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDoActionData_Statics::NewProp_Effect_MetaData[] = {
		{ "Category", "DoActionData" },
		{ "Comment", "// ??\xc6\xbc\xc5\xac , ???\xcc\xbe\xc6\xb0???\n" },
		{ "ModuleRelativePath", "Weapons/CWeaponStructures.h" },
		{ "ToolTip", "??\xc6\xbc\xc5\xac , ???\xcc\xbe\xc6\xb0???" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDoActionData_Statics::NewProp_Effect = { "Effect", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDoActionData, Effect), Z_Construct_UClass_UFXSystemAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDoActionData_Statics::NewProp_Effect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoActionData_Statics::NewProp_Effect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDoActionData_Statics::NewProp_EffectLocation_MetaData[] = {
		{ "Category", "DoActionData" },
		{ "ModuleRelativePath", "Weapons/CWeaponStructures.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDoActionData_Statics::NewProp_EffectLocation = { "EffectLocation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDoActionData, EffectLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FDoActionData_Statics::NewProp_EffectLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoActionData_Statics::NewProp_EffectLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDoActionData_Statics::NewProp_EffectScale_MetaData[] = {
		{ "Category", "DoActionData" },
		{ "ModuleRelativePath", "Weapons/CWeaponStructures.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDoActionData_Statics::NewProp_EffectScale = { "EffectScale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDoActionData, EffectScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FDoActionData_Statics::NewProp_EffectScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoActionData_Statics::NewProp_EffectScale_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDoActionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoActionData_Statics::NewProp_Montage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoActionData_Statics::NewProp_PlayRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoActionData_Statics::NewProp_bCanMove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoActionData_Statics::NewProp_bFixedCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoActionData_Statics::NewProp_Effect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoActionData_Statics::NewProp_EffectLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoActionData_Statics::NewProp_EffectScale,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDoActionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_U06_Battle,
		nullptr,
		&NewStructOps,
		"DoActionData",
		sizeof(FDoActionData),
		alignof(FDoActionData),
		Z_Construct_UScriptStruct_FDoActionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoActionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDoActionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoActionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDoActionData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDoActionData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_U06_Battle();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DoActionData"), sizeof(FDoActionData), Get_Z_Construct_UScriptStruct_FDoActionData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDoActionData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDoActionData_Hash() { return 486745585U; }
class UScriptStruct* FEquipmentData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern U06_BATTLE_API uint32 Get_Z_Construct_UScriptStruct_FEquipmentData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEquipmentData, Z_Construct_UPackage__Script_U06_Battle(), TEXT("EquipmentData"), sizeof(FEquipmentData), Get_Z_Construct_UScriptStruct_FEquipmentData_Hash());
	}
	return Singleton;
}
template<> U06_BATTLE_API UScriptStruct* StaticStruct<FEquipmentData>()
{
	return FEquipmentData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEquipmentData(FEquipmentData::StaticStruct, TEXT("/Script/U06_Battle"), TEXT("EquipmentData"), false, nullptr, nullptr);
static struct FScriptStruct_U06_Battle_StaticRegisterNativesFEquipmentData
{
	FScriptStruct_U06_Battle_StaticRegisterNativesFEquipmentData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EquipmentData")),new UScriptStruct::TCppStructOps<FEquipmentData>);
	}
} ScriptStruct_U06_Battle_StaticRegisterNativesFEquipmentData;
	struct Z_Construct_UScriptStruct_FEquipmentData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Montage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanMove_MetaData[];
#endif
		static void NewProp_bCanMove_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanMove;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseControlRotation_MetaData[];
#endif
		static void NewProp_bUseControlRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseControlRotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEquipmentData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "//-----------------------------------------------\n// ???????????? \n//-----------------------------------------------\n" },
		{ "ModuleRelativePath", "Weapons/CWeaponStructures.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEquipmentData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEquipmentData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEquipmentData_Statics::NewProp_Montage_MetaData[] = {
		{ "Category", "EquipmentData" },
		{ "ModuleRelativePath", "Weapons/CWeaponStructures.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEquipmentData_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEquipmentData, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEquipmentData_Statics::NewProp_Montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentData_Statics::NewProp_Montage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEquipmentData_Statics::NewProp_PlayRate_MetaData[] = {
		{ "Category", "EquipmentData" },
		{ "ModuleRelativePath", "Weapons/CWeaponStructures.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEquipmentData_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEquipmentData, PlayRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FEquipmentData_Statics::NewProp_PlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentData_Statics::NewProp_PlayRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEquipmentData_Statics::NewProp_bCanMove_MetaData[] = {
		{ "Category", "EquipmentData" },
		{ "ModuleRelativePath", "Weapons/CWeaponStructures.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FEquipmentData_Statics::NewProp_bCanMove_SetBit(void* Obj)
	{
		((FEquipmentData*)Obj)->bCanMove = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEquipmentData_Statics::NewProp_bCanMove = { "bCanMove", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FEquipmentData), &Z_Construct_UScriptStruct_FEquipmentData_Statics::NewProp_bCanMove_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEquipmentData_Statics::NewProp_bCanMove_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentData_Statics::NewProp_bCanMove_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEquipmentData_Statics::NewProp_bUseControlRotation_MetaData[] = {
		{ "Category", "EquipmentData" },
		{ "ModuleRelativePath", "Weapons/CWeaponStructures.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FEquipmentData_Statics::NewProp_bUseControlRotation_SetBit(void* Obj)
	{
		((FEquipmentData*)Obj)->bUseControlRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEquipmentData_Statics::NewProp_bUseControlRotation = { "bUseControlRotation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FEquipmentData), &Z_Construct_UScriptStruct_FEquipmentData_Statics::NewProp_bUseControlRotation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEquipmentData_Statics::NewProp_bUseControlRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentData_Statics::NewProp_bUseControlRotation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEquipmentData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentData_Statics::NewProp_Montage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentData_Statics::NewProp_PlayRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentData_Statics::NewProp_bCanMove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentData_Statics::NewProp_bUseControlRotation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEquipmentData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_U06_Battle,
		nullptr,
		&NewStructOps,
		"EquipmentData",
		sizeof(FEquipmentData),
		alignof(FEquipmentData),
		Z_Construct_UScriptStruct_FEquipmentData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEquipmentData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEquipmentData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEquipmentData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_U06_Battle();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EquipmentData"), sizeof(FEquipmentData), Get_Z_Construct_UScriptStruct_FEquipmentData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEquipmentData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEquipmentData_Hash() { return 3617939597U; }
	void UCWeaponStructures::StaticRegisterNativesUCWeaponStructures()
	{
	}
	UClass* Z_Construct_UClass_UCWeaponStructures_NoRegister()
	{
		return UCWeaponStructures::StaticClass();
	}
	struct Z_Construct_UClass_UCWeaponStructures_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCWeaponStructures_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_U06_Battle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCWeaponStructures_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Weapons/CWeaponStructures.h" },
		{ "ModuleRelativePath", "Weapons/CWeaponStructures.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCWeaponStructures_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCWeaponStructures>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCWeaponStructures_Statics::ClassParams = {
		&UCWeaponStructures::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCWeaponStructures_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCWeaponStructures_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCWeaponStructures()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCWeaponStructures_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCWeaponStructures, 1339204468);
	template<> U06_BATTLE_API UClass* StaticClass<UCWeaponStructures>()
	{
		return UCWeaponStructures::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCWeaponStructures(Z_Construct_UClass_UCWeaponStructures, &UCWeaponStructures::StaticClass, TEXT("/Script/U06_Battle"), TEXT("UCWeaponStructures"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCWeaponStructures);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
