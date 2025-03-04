// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "U06_Battle/Weapons/DoActions/CDoAction_Combo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCDoAction_Combo() {}
// Cross Module References
	U06_BATTLE_API UClass* Z_Construct_UClass_UCDoAction_Combo_NoRegister();
	U06_BATTLE_API UClass* Z_Construct_UClass_UCDoAction_Combo();
	U06_BATTLE_API UClass* Z_Construct_UClass_UCDoAction();
	UPackage* Z_Construct_UPackage__Script_U06_Battle();
// End Cross Module References
	void UCDoAction_Combo::StaticRegisterNativesUCDoAction_Combo()
	{
	}
	UClass* Z_Construct_UClass_UCDoAction_Combo_NoRegister()
	{
		return UCDoAction_Combo::StaticClass();
	}
	struct Z_Construct_UClass_UCDoAction_Combo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCDoAction_Combo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCDoAction,
		(UObject* (*)())Z_Construct_UPackage__Script_U06_Battle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCDoAction_Combo_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Sword???? Collision : \xc4\xae?? ?????\xc2\xbf??? ?\xee\xb6\xb2 ??\xc3\xbc?? ???\xe2\xb8\xb8 ?\xd8\xb5? ?????? ?\xdf\xbb?\n * \n *  1. Off\n *  2. ???\xdd\xb1??? On  : \n */" },
		{ "IncludePath", "Weapons/DoActions/CDoAction_Combo.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Weapons/DoActions/CDoAction_Combo.h" },
		{ "ToolTip", "Sword???? Collision : \xc4\xae?? ?????\xc2\xbf??? ?\xee\xb6\xb2 ??\xc3\xbc?? ???\xe2\xb8\xb8 ?\xd8\xb5? ?????? ?\xdf\xbb?\n\n 1. Off\n 2. ???\xdd\xb1??? On  :" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCDoAction_Combo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCDoAction_Combo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCDoAction_Combo_Statics::ClassParams = {
		&UCDoAction_Combo::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCDoAction_Combo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCDoAction_Combo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCDoAction_Combo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCDoAction_Combo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCDoAction_Combo, 970714098);
	template<> U06_BATTLE_API UClass* StaticClass<UCDoAction_Combo>()
	{
		return UCDoAction_Combo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCDoAction_Combo(Z_Construct_UClass_UCDoAction_Combo, &UCDoAction_Combo::StaticClass, TEXT("/Script/U06_Battle"), TEXT("UCDoAction_Combo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCDoAction_Combo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
