// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "U06_Battle/Weapons/SubActions/CSubAction_Hammer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCSubAction_Hammer() {}
// Cross Module References
	U06_BATTLE_API UClass* Z_Construct_UClass_UCSubAction_Hammer_NoRegister();
	U06_BATTLE_API UClass* Z_Construct_UClass_UCSubAction_Hammer();
	U06_BATTLE_API UClass* Z_Construct_UClass_UCSubAction();
	UPackage* Z_Construct_UPackage__Script_U06_Battle();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	U06_BATTLE_API UClass* Z_Construct_UClass_ACAura_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	U06_BATTLE_API UScriptStruct* Z_Construct_UScriptStruct_FDoActionData();
	U06_BATTLE_API UClass* Z_Construct_UClass_ACGhostTrail_NoRegister();
// End Cross Module References
	void UCSubAction_Hammer::StaticRegisterNativesUCSubAction_Hammer()
	{
	}
	UClass* Z_Construct_UClass_UCSubAction_Hammer_NoRegister()
	{
		return UCSubAction_Hammer::StaticClass();
	}
	struct Z_Construct_UClass_UCSubAction_Hammer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuraClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AuraClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuraLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AuraLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActionData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GhostTrailClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_GhostTrailClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GhostTrail_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GhostTrail;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCSubAction_Hammer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCSubAction,
		(UObject* (*)())Z_Construct_UPackage__Script_U06_Battle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSubAction_Hammer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Weapons/SubActions/CSubAction_Hammer.h" },
		{ "ModuleRelativePath", "Weapons/SubActions/CSubAction_Hammer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSubAction_Hammer_Statics::NewProp_AuraClass_MetaData[] = {
		{ "Category", "Aura" },
		{ "Comment", "// Hammer?????? HitData???? Aura???? ?????\xcc\xb0????? ?????\xd8\xbc? ????\n" },
		{ "ModuleRelativePath", "Weapons/SubActions/CSubAction_Hammer.h" },
		{ "ToolTip", "Hammer?????? HitData???? Aura???? ?????\xcc\xb0????? ?????\xd8\xbc? ????" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCSubAction_Hammer_Statics::NewProp_AuraClass = { "AuraClass", nullptr, (EPropertyFlags)0x0044000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCSubAction_Hammer, AuraClass), Z_Construct_UClass_ACAura_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCSubAction_Hammer_Statics::NewProp_AuraClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSubAction_Hammer_Statics::NewProp_AuraClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSubAction_Hammer_Statics::NewProp_AuraLocation_MetaData[] = {
		{ "Category", "Aura" },
		{ "ModuleRelativePath", "Weapons/SubActions/CSubAction_Hammer.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCSubAction_Hammer_Statics::NewProp_AuraLocation = { "AuraLocation", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCSubAction_Hammer, AuraLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UCSubAction_Hammer_Statics::NewProp_AuraLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSubAction_Hammer_Statics::NewProp_AuraLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSubAction_Hammer_Statics::NewProp_ActionData_MetaData[] = {
		{ "Category", "Action" },
		{ "ModuleRelativePath", "Weapons/SubActions/CSubAction_Hammer.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCSubAction_Hammer_Statics::NewProp_ActionData = { "ActionData", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCSubAction_Hammer, ActionData), Z_Construct_UScriptStruct_FDoActionData, METADATA_PARAMS(Z_Construct_UClass_UCSubAction_Hammer_Statics::NewProp_ActionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSubAction_Hammer_Statics::NewProp_ActionData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSubAction_Hammer_Statics::NewProp_GhostTrailClass_MetaData[] = {
		{ "Category", "Add-On" },
		{ "ModuleRelativePath", "Weapons/SubActions/CSubAction_Hammer.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCSubAction_Hammer_Statics::NewProp_GhostTrailClass = { "GhostTrailClass", nullptr, (EPropertyFlags)0x0044000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCSubAction_Hammer, GhostTrailClass), Z_Construct_UClass_ACGhostTrail_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCSubAction_Hammer_Statics::NewProp_GhostTrailClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSubAction_Hammer_Statics::NewProp_GhostTrailClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSubAction_Hammer_Statics::NewProp_GhostTrail_MetaData[] = {
		{ "ModuleRelativePath", "Weapons/SubActions/CSubAction_Hammer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCSubAction_Hammer_Statics::NewProp_GhostTrail = { "GhostTrail", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCSubAction_Hammer, GhostTrail), Z_Construct_UClass_ACGhostTrail_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCSubAction_Hammer_Statics::NewProp_GhostTrail_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSubAction_Hammer_Statics::NewProp_GhostTrail_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCSubAction_Hammer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSubAction_Hammer_Statics::NewProp_AuraClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSubAction_Hammer_Statics::NewProp_AuraLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSubAction_Hammer_Statics::NewProp_ActionData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSubAction_Hammer_Statics::NewProp_GhostTrailClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSubAction_Hammer_Statics::NewProp_GhostTrail,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCSubAction_Hammer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCSubAction_Hammer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCSubAction_Hammer_Statics::ClassParams = {
		&UCSubAction_Hammer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCSubAction_Hammer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCSubAction_Hammer_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCSubAction_Hammer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCSubAction_Hammer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCSubAction_Hammer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCSubAction_Hammer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCSubAction_Hammer, 16878379);
	template<> U06_BATTLE_API UClass* StaticClass<UCSubAction_Hammer>()
	{
		return UCSubAction_Hammer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCSubAction_Hammer(Z_Construct_UClass_UCSubAction_Hammer, &UCSubAction_Hammer::StaticClass, TEXT("/Script/U06_Battle"), TEXT("UCSubAction_Hammer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCSubAction_Hammer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
