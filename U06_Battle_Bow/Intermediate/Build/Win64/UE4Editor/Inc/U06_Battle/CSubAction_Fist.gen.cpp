// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "U06_Battle/Weapons/SubActions/CSubAction_Fist.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCSubAction_Fist() {}
// Cross Module References
	U06_BATTLE_API UClass* Z_Construct_UClass_UCSubAction_Fist_NoRegister();
	U06_BATTLE_API UClass* Z_Construct_UClass_UCSubAction_Fist();
	U06_BATTLE_API UClass* Z_Construct_UClass_UCSubAction();
	UPackage* Z_Construct_UPackage__Script_U06_Battle();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	U06_BATTLE_API UScriptStruct* Z_Construct_UScriptStruct_FDoActionData();
	U06_BATTLE_API UScriptStruct* Z_Construct_UScriptStruct_FHitData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	U06_BATTLE_API UClass* Z_Construct_UClass_ACGhostTrail_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCSubAction_Fist::execOnAttachmentEndCollision)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAttachmentEndCollision();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCSubAction_Fist::execOnAttachmentBeginOverlap)
	{
		P_GET_OBJECT(ACharacter,Z_Param_InAttacker);
		P_GET_OBJECT(AActor,Z_Param_InAttackCuaser);
		P_GET_OBJECT(ACharacter,Z_Param_InOther);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAttachmentBeginOverlap(Z_Param_InAttacker,Z_Param_InAttackCuaser,Z_Param_InOther);
		P_NATIVE_END;
	}
	void UCSubAction_Fist::StaticRegisterNativesUCSubAction_Fist()
	{
		UClass* Class = UCSubAction_Fist::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnAttachmentBeginOverlap", &UCSubAction_Fist::execOnAttachmentBeginOverlap },
			{ "OnAttachmentEndCollision", &UCSubAction_Fist::execOnAttachmentEndCollision },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCSubAction_Fist_OnAttachmentBeginOverlap_Statics
	{
		struct CSubAction_Fist_eventOnAttachmentBeginOverlap_Parms
		{
			ACharacter* InAttacker;
			AActor* InAttackCuaser;
			ACharacter* InOther;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InAttacker;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InAttackCuaser;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InOther;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCSubAction_Fist_OnAttachmentBeginOverlap_Statics::NewProp_InAttacker = { "InAttacker", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CSubAction_Fist_eventOnAttachmentBeginOverlap_Parms, InAttacker), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCSubAction_Fist_OnAttachmentBeginOverlap_Statics::NewProp_InAttackCuaser = { "InAttackCuaser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CSubAction_Fist_eventOnAttachmentBeginOverlap_Parms, InAttackCuaser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCSubAction_Fist_OnAttachmentBeginOverlap_Statics::NewProp_InOther = { "InOther", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CSubAction_Fist_eventOnAttachmentBeginOverlap_Parms, InOther), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCSubAction_Fist_OnAttachmentBeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCSubAction_Fist_OnAttachmentBeginOverlap_Statics::NewProp_InAttacker,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCSubAction_Fist_OnAttachmentBeginOverlap_Statics::NewProp_InAttackCuaser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCSubAction_Fist_OnAttachmentBeginOverlap_Statics::NewProp_InOther,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCSubAction_Fist_OnAttachmentBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapons/SubActions/CSubAction_Fist.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCSubAction_Fist_OnAttachmentBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCSubAction_Fist, nullptr, "OnAttachmentBeginOverlap", nullptr, nullptr, sizeof(CSubAction_Fist_eventOnAttachmentBeginOverlap_Parms), Z_Construct_UFunction_UCSubAction_Fist_OnAttachmentBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCSubAction_Fist_OnAttachmentBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCSubAction_Fist_OnAttachmentBeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCSubAction_Fist_OnAttachmentBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCSubAction_Fist_OnAttachmentBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCSubAction_Fist_OnAttachmentBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCSubAction_Fist_OnAttachmentEndCollision_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCSubAction_Fist_OnAttachmentEndCollision_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapons/SubActions/CSubAction_Fist.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCSubAction_Fist_OnAttachmentEndCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCSubAction_Fist, nullptr, "OnAttachmentEndCollision", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCSubAction_Fist_OnAttachmentEndCollision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCSubAction_Fist_OnAttachmentEndCollision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCSubAction_Fist_OnAttachmentEndCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCSubAction_Fist_OnAttachmentEndCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCSubAction_Fist_NoRegister()
	{
		return UCSubAction_Fist::StaticClass();
	}
	struct Z_Construct_UClass_UCSubAction_Fist_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActionData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitDatas_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitDatas_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HitDatas;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GhostTrailClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_GhostTrailClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCSubAction_Fist_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCSubAction,
		(UObject* (*)())Z_Construct_UPackage__Script_U06_Battle,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCSubAction_Fist_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCSubAction_Fist_OnAttachmentBeginOverlap, "OnAttachmentBeginOverlap" }, // 2504698038
		{ &Z_Construct_UFunction_UCSubAction_Fist_OnAttachmentEndCollision, "OnAttachmentEndCollision" }, // 2515902234
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSubAction_Fist_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Weapons/SubActions/CSubAction_Fist.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Weapons/SubActions/CSubAction_Fist.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSubAction_Fist_Statics::NewProp_ActionData_MetaData[] = {
		{ "Category", "Action" },
		{ "ModuleRelativePath", "Weapons/SubActions/CSubAction_Fist.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCSubAction_Fist_Statics::NewProp_ActionData = { "ActionData", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCSubAction_Fist, ActionData), Z_Construct_UScriptStruct_FDoActionData, METADATA_PARAMS(Z_Construct_UClass_UCSubAction_Fist_Statics::NewProp_ActionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSubAction_Fist_Statics::NewProp_ActionData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCSubAction_Fist_Statics::NewProp_HitDatas_Inner = { "HitDatas", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHitData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSubAction_Fist_Statics::NewProp_HitDatas_MetaData[] = {
		{ "Category", "Action" },
		{ "ModuleRelativePath", "Weapons/SubActions/CSubAction_Fist.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCSubAction_Fist_Statics::NewProp_HitDatas = { "HitDatas", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCSubAction_Fist, HitDatas), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCSubAction_Fist_Statics::NewProp_HitDatas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSubAction_Fist_Statics::NewProp_HitDatas_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSubAction_Fist_Statics::NewProp_GhostTrailClass_MetaData[] = {
		{ "Category", "Add-On" },
		{ "ModuleRelativePath", "Weapons/SubActions/CSubAction_Fist.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCSubAction_Fist_Statics::NewProp_GhostTrailClass = { "GhostTrailClass", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCSubAction_Fist, GhostTrailClass), Z_Construct_UClass_ACGhostTrail_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCSubAction_Fist_Statics::NewProp_GhostTrailClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSubAction_Fist_Statics::NewProp_GhostTrailClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCSubAction_Fist_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSubAction_Fist_Statics::NewProp_ActionData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSubAction_Fist_Statics::NewProp_HitDatas_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSubAction_Fist_Statics::NewProp_HitDatas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSubAction_Fist_Statics::NewProp_GhostTrailClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCSubAction_Fist_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCSubAction_Fist>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCSubAction_Fist_Statics::ClassParams = {
		&UCSubAction_Fist::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCSubAction_Fist_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCSubAction_Fist_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCSubAction_Fist_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCSubAction_Fist_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCSubAction_Fist()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCSubAction_Fist_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCSubAction_Fist, 254845454);
	template<> U06_BATTLE_API UClass* StaticClass<UCSubAction_Fist>()
	{
		return UCSubAction_Fist::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCSubAction_Fist(Z_Construct_UClass_UCSubAction_Fist, &UCSubAction_Fist::StaticClass, TEXT("/Script/U06_Battle"), TEXT("UCSubAction_Fist"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCSubAction_Fist);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
