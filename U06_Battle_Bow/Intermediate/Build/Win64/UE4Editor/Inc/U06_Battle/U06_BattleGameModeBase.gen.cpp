// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "U06_Battle/U06_BattleGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeU06_BattleGameModeBase() {}
// Cross Module References
	U06_BATTLE_API UClass* Z_Construct_UClass_AU06_BattleGameModeBase_NoRegister();
	U06_BATTLE_API UClass* Z_Construct_UClass_AU06_BattleGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_U06_Battle();
// End Cross Module References
	void AU06_BattleGameModeBase::StaticRegisterNativesAU06_BattleGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AU06_BattleGameModeBase_NoRegister()
	{
		return AU06_BattleGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AU06_BattleGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AU06_BattleGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_U06_Battle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AU06_BattleGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "U06_BattleGameModeBase.h" },
		{ "ModuleRelativePath", "U06_BattleGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AU06_BattleGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AU06_BattleGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AU06_BattleGameModeBase_Statics::ClassParams = {
		&AU06_BattleGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AU06_BattleGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AU06_BattleGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AU06_BattleGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AU06_BattleGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AU06_BattleGameModeBase, 1278851991);
	template<> U06_BATTLE_API UClass* StaticClass<AU06_BattleGameModeBase>()
	{
		return AU06_BattleGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AU06_BattleGameModeBase(Z_Construct_UClass_AU06_BattleGameModeBase, &AU06_BattleGameModeBase::StaticClass, TEXT("/Script/U06_Battle"), TEXT("AU06_BattleGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AU06_BattleGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
