// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "U06_Battle/Notifies/CAnimNotify_EndState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCAnimNotify_EndState() {}
// Cross Module References
	U06_BATTLE_API UClass* Z_Construct_UClass_UCAnimNotify_EndState_NoRegister();
	U06_BATTLE_API UClass* Z_Construct_UClass_UCAnimNotify_EndState();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_U06_Battle();
	U06_BATTLE_API UEnum* Z_Construct_UEnum_U06_Battle_EStateType();
// End Cross Module References
	void UCAnimNotify_EndState::StaticRegisterNativesUCAnimNotify_EndState()
	{
	}
	UClass* Z_Construct_UClass_UCAnimNotify_EndState_NoRegister()
	{
		return UCAnimNotify_EndState::StaticClass();
	}
	struct Z_Construct_UClass_UCAnimNotify_EndState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_StateType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_StateType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCAnimNotify_EndState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_U06_Battle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCAnimNotify_EndState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Notifies/CAnimNotify_EndState.h" },
		{ "ModuleRelativePath", "Notifies/CAnimNotify_EndState.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCAnimNotify_EndState_Statics::NewProp_StateType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCAnimNotify_EndState_Statics::NewProp_StateType_MetaData[] = {
		{ "Category", "Type" },
		{ "Comment", "// Animation Select?\xd2\xbc? ?\xd6\xb0?\n" },
		{ "ModuleRelativePath", "Notifies/CAnimNotify_EndState.h" },
		{ "ToolTip", "Animation Select?\xd2\xbc? ?\xd6\xb0?" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCAnimNotify_EndState_Statics::NewProp_StateType = { "StateType", nullptr, (EPropertyFlags)0x0010000000000011, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCAnimNotify_EndState, StateType), Z_Construct_UEnum_U06_Battle_EStateType, METADATA_PARAMS(Z_Construct_UClass_UCAnimNotify_EndState_Statics::NewProp_StateType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCAnimNotify_EndState_Statics::NewProp_StateType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCAnimNotify_EndState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCAnimNotify_EndState_Statics::NewProp_StateType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCAnimNotify_EndState_Statics::NewProp_StateType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCAnimNotify_EndState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCAnimNotify_EndState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCAnimNotify_EndState_Statics::ClassParams = {
		&UCAnimNotify_EndState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCAnimNotify_EndState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCAnimNotify_EndState_Statics::PropPointers),
		0,
		0x001120A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCAnimNotify_EndState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCAnimNotify_EndState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCAnimNotify_EndState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCAnimNotify_EndState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCAnimNotify_EndState, 2890967624);
	template<> U06_BATTLE_API UClass* StaticClass<UCAnimNotify_EndState>()
	{
		return UCAnimNotify_EndState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCAnimNotify_EndState(Z_Construct_UClass_UCAnimNotify_EndState, &UCAnimNotify_EndState::StaticClass, TEXT("/Script/U06_Battle"), TEXT("UCAnimNotify_EndState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCAnimNotify_EndState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
