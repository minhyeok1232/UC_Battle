// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "U06_Battle/Characters/ICharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeICharacter() {}
// Cross Module References
	U06_BATTLE_API UClass* Z_Construct_UClass_UICharacter_NoRegister();
	U06_BATTLE_API UClass* Z_Construct_UClass_UICharacter();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_U06_Battle();
// End Cross Module References
	void UICharacter::StaticRegisterNativesUICharacter()
	{
	}
	UClass* Z_Construct_UClass_UICharacter_NoRegister()
	{
		return UICharacter::StaticClass();
	}
	struct Z_Construct_UClass_UICharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UICharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_U06_Battle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UICharacter_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Characters/ICharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UICharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IICharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UICharacter_Statics::ClassParams = {
		&UICharacter::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UICharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UICharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UICharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UICharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UICharacter, 1255531098);
	template<> U06_BATTLE_API UClass* StaticClass<UICharacter>()
	{
		return UICharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UICharacter(Z_Construct_UClass_UICharacter, &UICharacter::StaticClass, TEXT("/Script/U06_Battle"), TEXT("UICharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UICharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
