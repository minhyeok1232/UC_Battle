// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "U06_Battle/Characters/CEnemy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCEnemy() {}
// Cross Module References
	U06_BATTLE_API UClass* Z_Construct_UClass_ACEnemy_NoRegister();
	U06_BATTLE_API UClass* Z_Construct_UClass_ACEnemy();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_U06_Battle();
	U06_BATTLE_API UEnum* Z_Construct_UEnum_U06_Battle_EStateType();
	U06_BATTLE_API UClass* Z_Construct_UClass_UCMovementComponent_NoRegister();
	U06_BATTLE_API UClass* Z_Construct_UClass_UCStateComponent_NoRegister();
	U06_BATTLE_API UClass* Z_Construct_UClass_UCMontageComponent_NoRegister();
	U06_BATTLE_API UClass* Z_Construct_UClass_UCStatusComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	U06_BATTLE_API UClass* Z_Construct_UClass_UICharacter_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ACEnemy::execRestoreColor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RestoreColor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACEnemy::execOnStateTypeChanged)
	{
		P_GET_ENUM(EStateType,Z_Param_InPrevType);
		P_GET_ENUM(EStateType,Z_Param_InNewType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStateTypeChanged(EStateType(Z_Param_InPrevType),EStateType(Z_Param_InNewType));
		P_NATIVE_END;
	}
	void ACEnemy::StaticRegisterNativesACEnemy()
	{
		UClass* Class = ACEnemy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnStateTypeChanged", &ACEnemy::execOnStateTypeChanged },
			{ "RestoreColor", &ACEnemy::execRestoreColor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACEnemy_OnStateTypeChanged_Statics
	{
		struct CEnemy_eventOnStateTypeChanged_Parms
		{
			EStateType InPrevType;
			EStateType InNewType;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InPrevType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InPrevType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InNewType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InNewType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACEnemy_OnStateTypeChanged_Statics::NewProp_InPrevType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ACEnemy_OnStateTypeChanged_Statics::NewProp_InPrevType = { "InPrevType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CEnemy_eventOnStateTypeChanged_Parms, InPrevType), Z_Construct_UEnum_U06_Battle_EStateType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACEnemy_OnStateTypeChanged_Statics::NewProp_InNewType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ACEnemy_OnStateTypeChanged_Statics::NewProp_InNewType = { "InNewType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CEnemy_eventOnStateTypeChanged_Parms, InNewType), Z_Construct_UEnum_U06_Battle_EStateType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACEnemy_OnStateTypeChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACEnemy_OnStateTypeChanged_Statics::NewProp_InPrevType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACEnemy_OnStateTypeChanged_Statics::NewProp_InPrevType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACEnemy_OnStateTypeChanged_Statics::NewProp_InNewType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACEnemy_OnStateTypeChanged_Statics::NewProp_InNewType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACEnemy_OnStateTypeChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Characters/CEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACEnemy_OnStateTypeChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACEnemy, nullptr, "OnStateTypeChanged", nullptr, nullptr, sizeof(CEnemy_eventOnStateTypeChanged_Parms), Z_Construct_UFunction_ACEnemy_OnStateTypeChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACEnemy_OnStateTypeChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACEnemy_OnStateTypeChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACEnemy_OnStateTypeChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACEnemy_OnStateTypeChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACEnemy_OnStateTypeChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACEnemy_RestoreColor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACEnemy_RestoreColor_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// SetTimer()?? ???\xce\xb5?\n" },
		{ "ModuleRelativePath", "Characters/CEnemy.h" },
		{ "ToolTip", "SetTimer()?? ???\xce\xb5?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACEnemy_RestoreColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACEnemy, nullptr, "RestoreColor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACEnemy_RestoreColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACEnemy_RestoreColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACEnemy_RestoreColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACEnemy_RestoreColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACEnemy_NoRegister()
	{
		return ACEnemy::StaticClass();
	}
	struct Z_Construct_UClass_ACEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Movement_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Movement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_State;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Montages_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montages;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Status;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OriginColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OriginColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_U06_Battle,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACEnemy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACEnemy_OnStateTypeChanged, "OnStateTypeChanged" }, // 226872420
		{ &Z_Construct_UFunction_ACEnemy_RestoreColor, "RestoreColor" }, // 2688577433
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACEnemy_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/CEnemy.h" },
		{ "ModuleRelativePath", "Characters/CEnemy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACEnemy_Statics::NewProp_Movement_MetaData[] = {
		{ "Category", "CEnemy" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/CEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACEnemy_Statics::NewProp_Movement = { "Movement", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACEnemy, Movement), Z_Construct_UClass_UCMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACEnemy_Statics::NewProp_Movement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACEnemy_Statics::NewProp_Movement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACEnemy_Statics::NewProp_State_MetaData[] = {
		{ "Category", "CEnemy" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/CEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACEnemy_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACEnemy, State), Z_Construct_UClass_UCStateComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACEnemy_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACEnemy_Statics::NewProp_State_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACEnemy_Statics::NewProp_Montages_MetaData[] = {
		{ "Category", "CEnemy" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/CEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACEnemy_Statics::NewProp_Montages = { "Montages", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACEnemy, Montages), Z_Construct_UClass_UCMontageComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACEnemy_Statics::NewProp_Montages_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACEnemy_Statics::NewProp_Montages_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACEnemy_Statics::NewProp_Status_MetaData[] = {
		{ "Category", "CEnemy" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/CEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACEnemy_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACEnemy, Status), Z_Construct_UClass_UCStatusComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACEnemy_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACEnemy_Statics::NewProp_Status_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACEnemy_Statics::NewProp_OriginColor_MetaData[] = {
		{ "Category", "CEnemy" },
		{ "ModuleRelativePath", "Characters/CEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACEnemy_Statics::NewProp_OriginColor = { "OriginColor", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACEnemy, OriginColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_ACEnemy_Statics::NewProp_OriginColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACEnemy_Statics::NewProp_OriginColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACEnemy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACEnemy_Statics::NewProp_Movement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACEnemy_Statics::NewProp_State,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACEnemy_Statics::NewProp_Montages,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACEnemy_Statics::NewProp_Status,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACEnemy_Statics::NewProp_OriginColor,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ACEnemy_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UICharacter_NoRegister, (int32)VTABLE_OFFSET(ACEnemy, IICharacter), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACEnemy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACEnemy_Statics::ClassParams = {
		&ACEnemy::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACEnemy_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACEnemy_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACEnemy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACEnemy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACEnemy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACEnemy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACEnemy, 2207983681);
	template<> U06_BATTLE_API UClass* StaticClass<ACEnemy>()
	{
		return ACEnemy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACEnemy(Z_Construct_UClass_ACEnemy, &ACEnemy::StaticClass, TEXT("/Script/U06_Battle"), TEXT("ACEnemy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACEnemy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
