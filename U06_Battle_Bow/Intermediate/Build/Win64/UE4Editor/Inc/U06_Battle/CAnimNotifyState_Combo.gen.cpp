// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "U06_Battle/Notifies/CAnimNotifyState_Combo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCAnimNotifyState_Combo() {}
// Cross Module References
	U06_BATTLE_API UClass* Z_Construct_UClass_UCAnimNotifyState_Combo_NoRegister();
	U06_BATTLE_API UClass* Z_Construct_UClass_UCAnimNotifyState_Combo();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	UPackage* Z_Construct_UPackage__Script_U06_Battle();
// End Cross Module References
	void UCAnimNotifyState_Combo::StaticRegisterNativesUCAnimNotifyState_Combo()
	{
	}
	UClass* Z_Construct_UClass_UCAnimNotifyState_Combo_NoRegister()
	{
		return UCAnimNotifyState_Combo::StaticClass();
	}
	struct Z_Construct_UClass_UCAnimNotifyState_Combo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCAnimNotifyState_Combo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_U06_Battle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCAnimNotifyState_Combo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Notifies/CAnimNotifyState_Combo.h" },
		{ "ModuleRelativePath", "Notifies/CAnimNotifyState_Combo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCAnimNotifyState_Combo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCAnimNotifyState_Combo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCAnimNotifyState_Combo_Statics::ClassParams = {
		&UCAnimNotifyState_Combo::StaticClass,
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
		0x001130A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCAnimNotifyState_Combo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCAnimNotifyState_Combo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCAnimNotifyState_Combo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCAnimNotifyState_Combo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCAnimNotifyState_Combo, 1491631797);
	template<> U06_BATTLE_API UClass* StaticClass<UCAnimNotifyState_Combo>()
	{
		return UCAnimNotifyState_Combo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCAnimNotifyState_Combo(Z_Construct_UClass_UCAnimNotifyState_Combo, &UCAnimNotifyState_Combo::StaticClass, TEXT("/Script/U06_Battle"), TEXT("UCAnimNotifyState_Combo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCAnimNotifyState_Combo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
