// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "U06_Battle/Components/CAIBehaviorComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCAIBehaviorComponent() {}
// Cross Module References
	U06_BATTLE_API UClass* Z_Construct_UClass_UCAIBehaviorComponent_NoRegister();
	U06_BATTLE_API UClass* Z_Construct_UClass_UCAIBehaviorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_U06_Battle();
// End Cross Module References
	void UCAIBehaviorComponent::StaticRegisterNativesUCAIBehaviorComponent()
	{
	}
	UClass* Z_Construct_UClass_UCAIBehaviorComponent_NoRegister()
	{
		return UCAIBehaviorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCAIBehaviorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCAIBehaviorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_U06_Battle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCAIBehaviorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/CAIBehaviorComponent.h" },
		{ "ModuleRelativePath", "Components/CAIBehaviorComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCAIBehaviorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCAIBehaviorComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCAIBehaviorComponent_Statics::ClassParams = {
		&UCAIBehaviorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCAIBehaviorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCAIBehaviorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCAIBehaviorComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCAIBehaviorComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCAIBehaviorComponent, 4251940749);
	template<> U06_BATTLE_API UClass* StaticClass<UCAIBehaviorComponent>()
	{
		return UCAIBehaviorComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCAIBehaviorComponent(Z_Construct_UClass_UCAIBehaviorComponent, &UCAIBehaviorComponent::StaticClass, TEXT("/Script/U06_Battle"), TEXT("UCAIBehaviorComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCAIBehaviorComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
