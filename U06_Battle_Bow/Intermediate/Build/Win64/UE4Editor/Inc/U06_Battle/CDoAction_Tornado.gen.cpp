// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "U06_Battle/Weapons/DoActions/CDoAction_Tornado.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCDoAction_Tornado() {}
// Cross Module References
	U06_BATTLE_API UClass* Z_Construct_UClass_UCDoAction_Tornado_NoRegister();
	U06_BATTLE_API UClass* Z_Construct_UClass_UCDoAction_Tornado();
	U06_BATTLE_API UClass* Z_Construct_UClass_UCDoAction();
	UPackage* Z_Construct_UPackage__Script_U06_Battle();
// End Cross Module References
	void UCDoAction_Tornado::StaticRegisterNativesUCDoAction_Tornado()
	{
	}
	UClass* Z_Construct_UClass_UCDoAction_Tornado_NoRegister()
	{
		return UCDoAction_Tornado::StaticClass();
	}
	struct Z_Construct_UClass_UCDoAction_Tornado_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCDoAction_Tornado_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCDoAction,
		(UObject* (*)())Z_Construct_UPackage__Script_U06_Battle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCDoAction_Tornado_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Weapons/DoActions/CDoAction_Tornado.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Weapons/DoActions/CDoAction_Tornado.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCDoAction_Tornado_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCDoAction_Tornado>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCDoAction_Tornado_Statics::ClassParams = {
		&UCDoAction_Tornado::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCDoAction_Tornado_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCDoAction_Tornado_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCDoAction_Tornado()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCDoAction_Tornado_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCDoAction_Tornado, 499704990);
	template<> U06_BATTLE_API UClass* StaticClass<UCDoAction_Tornado>()
	{
		return UCDoAction_Tornado::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCDoAction_Tornado(Z_Construct_UClass_UCDoAction_Tornado, &UCDoAction_Tornado::StaticClass, TEXT("/Script/U06_Battle"), TEXT("UCDoAction_Tornado"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCDoAction_Tornado);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
