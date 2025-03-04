// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "U06_Battle/Weapons/SubActions/CSubAction_Sword.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCSubAction_Sword() {}
// Cross Module References
	U06_BATTLE_API UClass* Z_Construct_UClass_UCSubAction_Sword_NoRegister();
	U06_BATTLE_API UClass* Z_Construct_UClass_UCSubAction_Sword();
	U06_BATTLE_API UClass* Z_Construct_UClass_UCSubAction();
	UPackage* Z_Construct_UPackage__Script_U06_Battle();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDrawDebugTrace();
	U06_BATTLE_API UScriptStruct* Z_Construct_UScriptStruct_FDoActionData();
	U06_BATTLE_API UScriptStruct* Z_Construct_UScriptStruct_FHitData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	U06_BATTLE_API UClass* Z_Construct_UClass_ACGhostTrail_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCSubAction_Sword::execOnAttachmentEndCollision)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAttachmentEndCollision();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCSubAction_Sword::execOnAttachmentBeginOverlap)
	{
		P_GET_OBJECT(ACharacter,Z_Param_InAttacker);
		P_GET_OBJECT(AActor,Z_Param_InAttackCuaser);
		P_GET_OBJECT(ACharacter,Z_Param_InOther);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAttachmentBeginOverlap(Z_Param_InAttacker,Z_Param_InAttackCuaser,Z_Param_InOther);
		P_NATIVE_END;
	}
	void UCSubAction_Sword::StaticRegisterNativesUCSubAction_Sword()
	{
		UClass* Class = UCSubAction_Sword::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnAttachmentBeginOverlap", &UCSubAction_Sword::execOnAttachmentBeginOverlap },
			{ "OnAttachmentEndCollision", &UCSubAction_Sword::execOnAttachmentEndCollision },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCSubAction_Sword_OnAttachmentBeginOverlap_Statics
	{
		struct CSubAction_Sword_eventOnAttachmentBeginOverlap_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCSubAction_Sword_OnAttachmentBeginOverlap_Statics::NewProp_InAttacker = { "InAttacker", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CSubAction_Sword_eventOnAttachmentBeginOverlap_Parms, InAttacker), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCSubAction_Sword_OnAttachmentBeginOverlap_Statics::NewProp_InAttackCuaser = { "InAttackCuaser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CSubAction_Sword_eventOnAttachmentBeginOverlap_Parms, InAttackCuaser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCSubAction_Sword_OnAttachmentBeginOverlap_Statics::NewProp_InOther = { "InOther", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CSubAction_Sword_eventOnAttachmentBeginOverlap_Parms, InOther), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCSubAction_Sword_OnAttachmentBeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCSubAction_Sword_OnAttachmentBeginOverlap_Statics::NewProp_InAttacker,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCSubAction_Sword_OnAttachmentBeginOverlap_Statics::NewProp_InAttackCuaser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCSubAction_Sword_OnAttachmentBeginOverlap_Statics::NewProp_InOther,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCSubAction_Sword_OnAttachmentBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapons/SubActions/CSubAction_Sword.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCSubAction_Sword_OnAttachmentBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCSubAction_Sword, nullptr, "OnAttachmentBeginOverlap", nullptr, nullptr, sizeof(CSubAction_Sword_eventOnAttachmentBeginOverlap_Parms), Z_Construct_UFunction_UCSubAction_Sword_OnAttachmentBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCSubAction_Sword_OnAttachmentBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCSubAction_Sword_OnAttachmentBeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCSubAction_Sword_OnAttachmentBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCSubAction_Sword_OnAttachmentBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCSubAction_Sword_OnAttachmentBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCSubAction_Sword_OnAttachmentEndCollision_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCSubAction_Sword_OnAttachmentEndCollision_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapons/SubActions/CSubAction_Sword.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCSubAction_Sword_OnAttachmentEndCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCSubAction_Sword, nullptr, "OnAttachmentEndCollision", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCSubAction_Sword_OnAttachmentEndCollision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCSubAction_Sword_OnAttachmentEndCollision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCSubAction_Sword_OnAttachmentEndCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCSubAction_Sword_OnAttachmentEndCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCSubAction_Sword_NoRegister()
	{
		return UCSubAction_Sword::StaticClass();
	}
	struct Z_Construct_UClass_UCSubAction_Sword_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Distance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrawDebug_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DrawDebug;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActionData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GhostTrailClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_GhostTrailClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCSubAction_Sword_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCSubAction,
		(UObject* (*)())Z_Construct_UPackage__Script_U06_Battle,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCSubAction_Sword_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCSubAction_Sword_OnAttachmentBeginOverlap, "OnAttachmentBeginOverlap" }, // 1004430924
		{ &Z_Construct_UFunction_UCSubAction_Sword_OnAttachmentEndCollision, "OnAttachmentEndCollision" }, // 130049326
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSubAction_Sword_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Weapons/SubActions/CSubAction_Sword.h" },
		{ "ModuleRelativePath", "Weapons/SubActions/CSubAction_Sword.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSubAction_Sword_Statics::NewProp_Distance_MetaData[] = {
		{ "Category", "Trace" },
		{ "Comment", "// Tick???? ?\xcc\xbf?\n" },
		{ "ModuleRelativePath", "Weapons/SubActions/CSubAction_Sword.h" },
		{ "ToolTip", "Tick???? ?\xcc\xbf?" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCSubAction_Sword_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCSubAction_Sword, Distance), METADATA_PARAMS(Z_Construct_UClass_UCSubAction_Sword_Statics::NewProp_Distance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSubAction_Sword_Statics::NewProp_Distance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSubAction_Sword_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "Trace" },
		{ "ModuleRelativePath", "Weapons/SubActions/CSubAction_Sword.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCSubAction_Sword_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCSubAction_Sword, Speed), METADATA_PARAMS(Z_Construct_UClass_UCSubAction_Sword_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSubAction_Sword_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSubAction_Sword_Statics::NewProp_DrawDebug_MetaData[] = {
		{ "Category", "Trace" },
		{ "ModuleRelativePath", "Weapons/SubActions/CSubAction_Sword.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCSubAction_Sword_Statics::NewProp_DrawDebug = { "DrawDebug", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCSubAction_Sword, DrawDebug), Z_Construct_UEnum_Engine_EDrawDebugTrace, METADATA_PARAMS(Z_Construct_UClass_UCSubAction_Sword_Statics::NewProp_DrawDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSubAction_Sword_Statics::NewProp_DrawDebug_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSubAction_Sword_Statics::NewProp_ActionData_MetaData[] = {
		{ "Category", "Action" },
		{ "ModuleRelativePath", "Weapons/SubActions/CSubAction_Sword.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCSubAction_Sword_Statics::NewProp_ActionData = { "ActionData", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCSubAction_Sword, ActionData), Z_Construct_UScriptStruct_FDoActionData, METADATA_PARAMS(Z_Construct_UClass_UCSubAction_Sword_Statics::NewProp_ActionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSubAction_Sword_Statics::NewProp_ActionData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSubAction_Sword_Statics::NewProp_HitData_MetaData[] = {
		{ "Category", "Action" },
		{ "ModuleRelativePath", "Weapons/SubActions/CSubAction_Sword.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCSubAction_Sword_Statics::NewProp_HitData = { "HitData", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCSubAction_Sword, HitData), Z_Construct_UScriptStruct_FHitData, METADATA_PARAMS(Z_Construct_UClass_UCSubAction_Sword_Statics::NewProp_HitData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSubAction_Sword_Statics::NewProp_HitData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSubAction_Sword_Statics::NewProp_GhostTrailClass_MetaData[] = {
		{ "Category", "Add-On" },
		{ "ModuleRelativePath", "Weapons/SubActions/CSubAction_Sword.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCSubAction_Sword_Statics::NewProp_GhostTrailClass = { "GhostTrailClass", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCSubAction_Sword, GhostTrailClass), Z_Construct_UClass_ACGhostTrail_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCSubAction_Sword_Statics::NewProp_GhostTrailClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSubAction_Sword_Statics::NewProp_GhostTrailClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCSubAction_Sword_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSubAction_Sword_Statics::NewProp_Distance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSubAction_Sword_Statics::NewProp_Speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSubAction_Sword_Statics::NewProp_DrawDebug,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSubAction_Sword_Statics::NewProp_ActionData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSubAction_Sword_Statics::NewProp_HitData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSubAction_Sword_Statics::NewProp_GhostTrailClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCSubAction_Sword_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCSubAction_Sword>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCSubAction_Sword_Statics::ClassParams = {
		&UCSubAction_Sword::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCSubAction_Sword_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCSubAction_Sword_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCSubAction_Sword_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCSubAction_Sword_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCSubAction_Sword()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCSubAction_Sword_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCSubAction_Sword, 3718002878);
	template<> U06_BATTLE_API UClass* StaticClass<UCSubAction_Sword>()
	{
		return UCSubAction_Sword::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCSubAction_Sword(Z_Construct_UClass_UCSubAction_Sword, &UCSubAction_Sword::StaticClass, TEXT("/Script/U06_Battle"), TEXT("UCSubAction_Sword"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCSubAction_Sword);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
