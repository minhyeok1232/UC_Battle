// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "U06_Battle/Notifies/MyAnimNotifyState_SubAction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyAnimNotifyState_SubAction() {}
// Cross Module References
	U06_BATTLE_API UClass* Z_Construct_UClass_UMyAnimNotifyState_SubAction_NoRegister();
	U06_BATTLE_API UClass* Z_Construct_UClass_UMyAnimNotifyState_SubAction();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	UPackage* Z_Construct_UPackage__Script_U06_Battle();
// End Cross Module References
	void UMyAnimNotifyState_SubAction::StaticRegisterNativesUMyAnimNotifyState_SubAction()
	{
	}
	UClass* Z_Construct_UClass_UMyAnimNotifyState_SubAction_NoRegister()
	{
		return UMyAnimNotifyState_SubAction::StaticClass();
	}
	struct Z_Construct_UClass_UMyAnimNotifyState_SubAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyAnimNotifyState_SubAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_U06_Battle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyAnimNotifyState_SubAction_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Notifies/MyAnimNotifyState_SubAction.h" },
		{ "ModuleRelativePath", "Notifies/MyAnimNotifyState_SubAction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyAnimNotifyState_SubAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyAnimNotifyState_SubAction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMyAnimNotifyState_SubAction_Statics::ClassParams = {
		&UMyAnimNotifyState_SubAction::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMyAnimNotifyState_SubAction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyAnimNotifyState_SubAction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyAnimNotifyState_SubAction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMyAnimNotifyState_SubAction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMyAnimNotifyState_SubAction, 4276572100);
	template<> U06_BATTLE_API UClass* StaticClass<UMyAnimNotifyState_SubAction>()
	{
		return UMyAnimNotifyState_SubAction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyAnimNotifyState_SubAction(Z_Construct_UClass_UMyAnimNotifyState_SubAction, &UMyAnimNotifyState_SubAction::StaticClass, TEXT("/Script/U06_Battle"), TEXT("UMyAnimNotifyState_SubAction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyAnimNotifyState_SubAction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
