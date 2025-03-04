// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "U06_Battle/Notifies/CAnimNotifyState_Collision.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCAnimNotifyState_Collision() {}
// Cross Module References
	U06_BATTLE_API UClass* Z_Construct_UClass_UCAnimNotifyState_Collision_NoRegister();
	U06_BATTLE_API UClass* Z_Construct_UClass_UCAnimNotifyState_Collision();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	UPackage* Z_Construct_UPackage__Script_U06_Battle();
// End Cross Module References
	void UCAnimNotifyState_Collision::StaticRegisterNativesUCAnimNotifyState_Collision()
	{
	}
	UClass* Z_Construct_UClass_UCAnimNotifyState_Collision_NoRegister()
	{
		return UCAnimNotifyState_Collision::StaticClass();
	}
	struct Z_Construct_UClass_UCAnimNotifyState_Collision_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCAnimNotifyState_Collision_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_U06_Battle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCAnimNotifyState_Collision_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Notifies/CAnimNotifyState_Collision.h" },
		{ "ModuleRelativePath", "Notifies/CAnimNotifyState_Collision.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCAnimNotifyState_Collision_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCAnimNotifyState_Collision>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCAnimNotifyState_Collision_Statics::ClassParams = {
		&UCAnimNotifyState_Collision::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCAnimNotifyState_Collision_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCAnimNotifyState_Collision_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCAnimNotifyState_Collision()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCAnimNotifyState_Collision_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCAnimNotifyState_Collision, 677323030);
	template<> U06_BATTLE_API UClass* StaticClass<UCAnimNotifyState_Collision>()
	{
		return UCAnimNotifyState_Collision::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCAnimNotifyState_Collision(Z_Construct_UClass_UCAnimNotifyState_Collision, &UCAnimNotifyState_Collision::StaticClass, TEXT("/Script/U06_Battle"), TEXT("UCAnimNotifyState_Collision"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCAnimNotifyState_Collision);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
