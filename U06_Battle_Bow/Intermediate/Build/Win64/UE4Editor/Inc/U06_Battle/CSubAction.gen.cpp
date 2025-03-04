// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "U06_Battle/Weapons/CSubAction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCSubAction() {}
// Cross Module References
	U06_BATTLE_API UClass* Z_Construct_UClass_UCSubAction_NoRegister();
	U06_BATTLE_API UClass* Z_Construct_UClass_UCSubAction();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_U06_Battle();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	U06_BATTLE_API UClass* Z_Construct_UClass_ACAttachment_NoRegister();
	U06_BATTLE_API UClass* Z_Construct_UClass_UCDoAction_NoRegister();
	U06_BATTLE_API UClass* Z_Construct_UClass_UCStateComponent_NoRegister();
	U06_BATTLE_API UClass* Z_Construct_UClass_UCMovementComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCSubAction::execTick)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InDeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Tick_Implementation(Z_Param_InDeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCSubAction::execEnd_SubAction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->End_SubAction_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCSubAction::execBegin_SubAction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Begin_SubAction_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_UCSubAction_Begin_SubAction = FName(TEXT("Begin_SubAction"));
	void UCSubAction::Begin_SubAction()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCSubAction_Begin_SubAction),NULL);
	}
	static FName NAME_UCSubAction_End_SubAction = FName(TEXT("End_SubAction"));
	void UCSubAction::End_SubAction()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCSubAction_End_SubAction),NULL);
	}
	static FName NAME_UCSubAction_Tick = FName(TEXT("Tick"));
	void UCSubAction::Tick(float InDeltaTime)
	{
		CSubAction_eventTick_Parms Parms;
		Parms.InDeltaTime=InDeltaTime;
		ProcessEvent(FindFunctionChecked(NAME_UCSubAction_Tick),&Parms);
	}
	void UCSubAction::StaticRegisterNativesUCSubAction()
	{
		UClass* Class = UCSubAction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Begin_SubAction", &UCSubAction::execBegin_SubAction },
			{ "End_SubAction", &UCSubAction::execEnd_SubAction },
			{ "Tick", &UCSubAction::execTick },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCSubAction_Begin_SubAction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCSubAction_Begin_SubAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapons/CSubAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCSubAction_Begin_SubAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCSubAction, nullptr, "Begin_SubAction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCSubAction_Begin_SubAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCSubAction_Begin_SubAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCSubAction_Begin_SubAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCSubAction_Begin_SubAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCSubAction_End_SubAction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCSubAction_End_SubAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapons/CSubAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCSubAction_End_SubAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCSubAction, nullptr, "End_SubAction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCSubAction_End_SubAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCSubAction_End_SubAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCSubAction_End_SubAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCSubAction_End_SubAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCSubAction_Tick_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InDeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCSubAction_Tick_Statics::NewProp_InDeltaTime = { "InDeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CSubAction_eventTick_Parms, InDeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCSubAction_Tick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCSubAction_Tick_Statics::NewProp_InDeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCSubAction_Tick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapons/CSubAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCSubAction_Tick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCSubAction, nullptr, "Tick", nullptr, nullptr, sizeof(CSubAction_eventTick_Parms), Z_Construct_UFunction_UCSubAction_Tick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCSubAction_Tick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCSubAction_Tick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCSubAction_Tick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCSubAction_Tick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCSubAction_Tick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCSubAction_NoRegister()
	{
		return UCSubAction::StaticClass();
	}
	struct Z_Construct_UClass_UCSubAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Owner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attachment_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Attachment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DoAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_State;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Movement_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Movement;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCSubAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_U06_Battle,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCSubAction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCSubAction_Begin_SubAction, "Begin_SubAction" }, // 604922253
		{ &Z_Construct_UFunction_UCSubAction_End_SubAction, "End_SubAction" }, // 426922388
		{ &Z_Construct_UFunction_UCSubAction_Tick, "Tick" }, // 277502071
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSubAction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Weapons/CSubAction.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Weapons/CSubAction.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSubAction_Statics::NewProp_Owner_MetaData[] = {
		{ "Comment", "// action?????? check flag\n" },
		{ "ModuleRelativePath", "Weapons/CSubAction.h" },
		{ "ToolTip", "action?????? check flag" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCSubAction_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCSubAction, Owner), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCSubAction_Statics::NewProp_Owner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSubAction_Statics::NewProp_Owner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSubAction_Statics::NewProp_Attachment_MetaData[] = {
		{ "ModuleRelativePath", "Weapons/CSubAction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCSubAction_Statics::NewProp_Attachment = { "Attachment", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCSubAction, Attachment), Z_Construct_UClass_ACAttachment_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCSubAction_Statics::NewProp_Attachment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSubAction_Statics::NewProp_Attachment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSubAction_Statics::NewProp_DoAction_MetaData[] = {
		{ "ModuleRelativePath", "Weapons/CSubAction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCSubAction_Statics::NewProp_DoAction = { "DoAction", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCSubAction, DoAction), Z_Construct_UClass_UCDoAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCSubAction_Statics::NewProp_DoAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSubAction_Statics::NewProp_DoAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSubAction_Statics::NewProp_State_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapons/CSubAction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCSubAction_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCSubAction, State), Z_Construct_UClass_UCStateComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCSubAction_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSubAction_Statics::NewProp_State_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSubAction_Statics::NewProp_Movement_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapons/CSubAction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCSubAction_Statics::NewProp_Movement = { "Movement", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCSubAction, Movement), Z_Construct_UClass_UCMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCSubAction_Statics::NewProp_Movement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSubAction_Statics::NewProp_Movement_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCSubAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSubAction_Statics::NewProp_Owner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSubAction_Statics::NewProp_Attachment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSubAction_Statics::NewProp_DoAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSubAction_Statics::NewProp_State,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSubAction_Statics::NewProp_Movement,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCSubAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCSubAction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCSubAction_Statics::ClassParams = {
		&UCSubAction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCSubAction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCSubAction_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCSubAction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCSubAction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCSubAction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCSubAction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCSubAction, 2467400344);
	template<> U06_BATTLE_API UClass* StaticClass<UCSubAction>()
	{
		return UCSubAction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCSubAction(Z_Construct_UClass_UCSubAction, &UCSubAction::StaticClass, TEXT("/Script/U06_Battle"), TEXT("UCSubAction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCSubAction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
