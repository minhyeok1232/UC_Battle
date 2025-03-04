// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "U06_Battle/Weapons/DoActions/CDoAction_Around.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCDoAction_Around() {}
// Cross Module References
	U06_BATTLE_API UClass* Z_Construct_UClass_UCDoAction_Around_NoRegister();
	U06_BATTLE_API UClass* Z_Construct_UClass_UCDoAction_Around();
	U06_BATTLE_API UClass* Z_Construct_UClass_UCDoAction();
	UPackage* Z_Construct_UPackage__Script_U06_Battle();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	U06_BATTLE_API UClass* Z_Construct_UClass_ACRotate_Object_NoRegister();
// End Cross Module References
	void UCDoAction_Around::StaticRegisterNativesUCDoAction_Around()
	{
	}
	UClass* Z_Construct_UClass_UCDoAction_Around_NoRegister()
	{
		return UCDoAction_Around::StaticClass();
	}
	struct Z_Construct_UClass_UCDoAction_Around_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_RotateClass_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotateClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RotateClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCDoAction_Around_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCDoAction,
		(UObject* (*)())Z_Construct_UPackage__Script_U06_Battle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCDoAction_Around_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Weapons/DoActions/CDoAction_Around.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Weapons/DoActions/CDoAction_Around.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCDoAction_Around_Statics::NewProp_RotateClass_Inner = { "RotateClass", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ACRotate_Object_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCDoAction_Around_Statics::NewProp_RotateClass_MetaData[] = {
		{ "Category", "SpawnClass" },
		{ "ModuleRelativePath", "Weapons/DoActions/CDoAction_Around.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCDoAction_Around_Statics::NewProp_RotateClass = { "RotateClass", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCDoAction_Around, RotateClass), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCDoAction_Around_Statics::NewProp_RotateClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCDoAction_Around_Statics::NewProp_RotateClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCDoAction_Around_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCDoAction_Around_Statics::NewProp_RotateClass_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCDoAction_Around_Statics::NewProp_RotateClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCDoAction_Around_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCDoAction_Around>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCDoAction_Around_Statics::ClassParams = {
		&UCDoAction_Around::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCDoAction_Around_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCDoAction_Around_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCDoAction_Around_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCDoAction_Around_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCDoAction_Around()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCDoAction_Around_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCDoAction_Around, 581214839);
	template<> U06_BATTLE_API UClass* StaticClass<UCDoAction_Around>()
	{
		return UCDoAction_Around::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCDoAction_Around(Z_Construct_UClass_UCDoAction_Around, &UCDoAction_Around::StaticClass, TEXT("/Script/U06_Battle"), TEXT("UCDoAction_Around"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCDoAction_Around);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
