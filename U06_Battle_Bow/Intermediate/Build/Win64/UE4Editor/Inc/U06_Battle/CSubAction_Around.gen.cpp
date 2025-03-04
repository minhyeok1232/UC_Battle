// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "U06_Battle/Weapons/SubActions/CSubAction_Around.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCSubAction_Around() {}
// Cross Module References
	U06_BATTLE_API UClass* Z_Construct_UClass_UCSubAction_Around_NoRegister();
	U06_BATTLE_API UClass* Z_Construct_UClass_UCSubAction_Around();
	U06_BATTLE_API UClass* Z_Construct_UClass_UCSubAction();
	UPackage* Z_Construct_UPackage__Script_U06_Battle();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	U06_BATTLE_API UClass* Z_Construct_UClass_ACThornObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	U06_BATTLE_API UScriptStruct* Z_Construct_UScriptStruct_FDoActionData();
// End Cross Module References
	void UCSubAction_Around::StaticRegisterNativesUCSubAction_Around()
	{
	}
	UClass* Z_Construct_UClass_UCSubAction_Around_NoRegister()
	{
		return UCSubAction_Around::StaticClass();
	}
	struct Z_Construct_UClass_UCSubAction_Around_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ObjectClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActionData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCSubAction_Around_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCSubAction,
		(UObject* (*)())Z_Construct_UPackage__Script_U06_Battle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSubAction_Around_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Weapons/SubActions/CSubAction_Around.h" },
		{ "ModuleRelativePath", "Weapons/SubActions/CSubAction_Around.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSubAction_Around_Statics::NewProp_ObjectClass_MetaData[] = {
		{ "Category", "FallObject" },
		{ "ModuleRelativePath", "Weapons/SubActions/CSubAction_Around.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCSubAction_Around_Statics::NewProp_ObjectClass = { "ObjectClass", nullptr, (EPropertyFlags)0x0044000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCSubAction_Around, ObjectClass), Z_Construct_UClass_ACThornObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCSubAction_Around_Statics::NewProp_ObjectClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSubAction_Around_Statics::NewProp_ObjectClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSubAction_Around_Statics::NewProp_ObjectLocation_MetaData[] = {
		{ "Category", "FallObject" },
		{ "ModuleRelativePath", "Weapons/SubActions/CSubAction_Around.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCSubAction_Around_Statics::NewProp_ObjectLocation = { "ObjectLocation", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCSubAction_Around, ObjectLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UCSubAction_Around_Statics::NewProp_ObjectLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSubAction_Around_Statics::NewProp_ObjectLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSubAction_Around_Statics::NewProp_ActionData_MetaData[] = {
		{ "Category", "Action" },
		{ "ModuleRelativePath", "Weapons/SubActions/CSubAction_Around.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCSubAction_Around_Statics::NewProp_ActionData = { "ActionData", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCSubAction_Around, ActionData), Z_Construct_UScriptStruct_FDoActionData, METADATA_PARAMS(Z_Construct_UClass_UCSubAction_Around_Statics::NewProp_ActionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSubAction_Around_Statics::NewProp_ActionData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCSubAction_Around_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSubAction_Around_Statics::NewProp_ObjectClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSubAction_Around_Statics::NewProp_ObjectLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSubAction_Around_Statics::NewProp_ActionData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCSubAction_Around_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCSubAction_Around>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCSubAction_Around_Statics::ClassParams = {
		&UCSubAction_Around::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCSubAction_Around_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCSubAction_Around_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCSubAction_Around_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCSubAction_Around_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCSubAction_Around()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCSubAction_Around_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCSubAction_Around, 3583987765);
	template<> U06_BATTLE_API UClass* StaticClass<UCSubAction_Around>()
	{
		return UCSubAction_Around::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCSubAction_Around(Z_Construct_UClass_UCSubAction_Around, &UCSubAction_Around::StaticClass, TEXT("/Script/U06_Battle"), TEXT("UCSubAction_Around"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCSubAction_Around);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
