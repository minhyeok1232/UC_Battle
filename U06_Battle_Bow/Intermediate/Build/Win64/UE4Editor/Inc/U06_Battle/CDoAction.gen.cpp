// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "U06_Battle/Weapons/CDoAction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCDoAction() {}
// Cross Module References
	U06_BATTLE_API UClass* Z_Construct_UClass_UCDoAction_NoRegister();
	U06_BATTLE_API UClass* Z_Construct_UClass_UCDoAction();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_U06_Battle();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	U06_BATTLE_API UClass* Z_Construct_UClass_UCMovementComponent_NoRegister();
	U06_BATTLE_API UClass* Z_Construct_UClass_UCStateComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCDoAction::execOnAttachmentEndOverlap)
	{
		P_GET_OBJECT(ACharacter,Z_Param_InAttacker);
		P_GET_OBJECT(ACharacter,Z_Param_InOther);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAttachmentEndOverlap(Z_Param_InAttacker,Z_Param_InOther);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCDoAction::execOnAttachmentBeginOverlap)
	{
		P_GET_OBJECT(ACharacter,Z_Param_InAttacker);
		P_GET_OBJECT(AActor,Z_Param_InAttackerCauser);
		P_GET_OBJECT(ACharacter,Z_Param_InOther);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAttachmentBeginOverlap(Z_Param_InAttacker,Z_Param_InAttackerCauser,Z_Param_InOther);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCDoAction::execOnAttachmentEndCollision)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAttachmentEndCollision();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCDoAction::execOnAttachmentBeginCollision)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAttachmentBeginCollision();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCDoAction::execOnUnEquip)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUnEquip();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCDoAction::execOnEndEquip)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEndEquip();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCDoAction::execOnBeginEquip)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBeginEquip();
		P_NATIVE_END;
	}
	void UCDoAction::StaticRegisterNativesUCDoAction()
	{
		UClass* Class = UCDoAction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnAttachmentBeginCollision", &UCDoAction::execOnAttachmentBeginCollision },
			{ "OnAttachmentBeginOverlap", &UCDoAction::execOnAttachmentBeginOverlap },
			{ "OnAttachmentEndCollision", &UCDoAction::execOnAttachmentEndCollision },
			{ "OnAttachmentEndOverlap", &UCDoAction::execOnAttachmentEndOverlap },
			{ "OnBeginEquip", &UCDoAction::execOnBeginEquip },
			{ "OnEndEquip", &UCDoAction::execOnEndEquip },
			{ "OnUnEquip", &UCDoAction::execOnUnEquip },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCDoAction_OnAttachmentBeginCollision_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCDoAction_OnAttachmentBeginCollision_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapons/CDoAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCDoAction_OnAttachmentBeginCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCDoAction, nullptr, "OnAttachmentBeginCollision", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCDoAction_OnAttachmentBeginCollision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCDoAction_OnAttachmentBeginCollision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCDoAction_OnAttachmentBeginCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCDoAction_OnAttachmentBeginCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCDoAction_OnAttachmentBeginOverlap_Statics
	{
		struct CDoAction_eventOnAttachmentBeginOverlap_Parms
		{
			ACharacter* InAttacker;
			AActor* InAttackerCauser;
			ACharacter* InOther;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InAttacker;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InAttackerCauser;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InOther;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCDoAction_OnAttachmentBeginOverlap_Statics::NewProp_InAttacker = { "InAttacker", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CDoAction_eventOnAttachmentBeginOverlap_Parms, InAttacker), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCDoAction_OnAttachmentBeginOverlap_Statics::NewProp_InAttackerCauser = { "InAttackerCauser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CDoAction_eventOnAttachmentBeginOverlap_Parms, InAttackerCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCDoAction_OnAttachmentBeginOverlap_Statics::NewProp_InOther = { "InOther", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CDoAction_eventOnAttachmentBeginOverlap_Parms, InOther), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCDoAction_OnAttachmentBeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCDoAction_OnAttachmentBeginOverlap_Statics::NewProp_InAttacker,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCDoAction_OnAttachmentBeginOverlap_Statics::NewProp_InAttackerCauser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCDoAction_OnAttachmentBeginOverlap_Statics::NewProp_InOther,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCDoAction_OnAttachmentBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapons/CDoAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCDoAction_OnAttachmentBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCDoAction, nullptr, "OnAttachmentBeginOverlap", nullptr, nullptr, sizeof(CDoAction_eventOnAttachmentBeginOverlap_Parms), Z_Construct_UFunction_UCDoAction_OnAttachmentBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCDoAction_OnAttachmentBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCDoAction_OnAttachmentBeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCDoAction_OnAttachmentBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCDoAction_OnAttachmentBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCDoAction_OnAttachmentBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCDoAction_OnAttachmentEndCollision_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCDoAction_OnAttachmentEndCollision_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapons/CDoAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCDoAction_OnAttachmentEndCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCDoAction, nullptr, "OnAttachmentEndCollision", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCDoAction_OnAttachmentEndCollision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCDoAction_OnAttachmentEndCollision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCDoAction_OnAttachmentEndCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCDoAction_OnAttachmentEndCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCDoAction_OnAttachmentEndOverlap_Statics
	{
		struct CDoAction_eventOnAttachmentEndOverlap_Parms
		{
			ACharacter* InAttacker;
			ACharacter* InOther;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InAttacker;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InOther;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCDoAction_OnAttachmentEndOverlap_Statics::NewProp_InAttacker = { "InAttacker", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CDoAction_eventOnAttachmentEndOverlap_Parms, InAttacker), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCDoAction_OnAttachmentEndOverlap_Statics::NewProp_InOther = { "InOther", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CDoAction_eventOnAttachmentEndOverlap_Parms, InOther), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCDoAction_OnAttachmentEndOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCDoAction_OnAttachmentEndOverlap_Statics::NewProp_InAttacker,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCDoAction_OnAttachmentEndOverlap_Statics::NewProp_InOther,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCDoAction_OnAttachmentEndOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapons/CDoAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCDoAction_OnAttachmentEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCDoAction, nullptr, "OnAttachmentEndOverlap", nullptr, nullptr, sizeof(CDoAction_eventOnAttachmentEndOverlap_Parms), Z_Construct_UFunction_UCDoAction_OnAttachmentEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCDoAction_OnAttachmentEndOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCDoAction_OnAttachmentEndOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCDoAction_OnAttachmentEndOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCDoAction_OnAttachmentEndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCDoAction_OnAttachmentEndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCDoAction_OnBeginEquip_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCDoAction_OnBeginEquip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapons/CDoAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCDoAction_OnBeginEquip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCDoAction, nullptr, "OnBeginEquip", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCDoAction_OnBeginEquip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCDoAction_OnBeginEquip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCDoAction_OnBeginEquip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCDoAction_OnBeginEquip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCDoAction_OnEndEquip_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCDoAction_OnEndEquip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapons/CDoAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCDoAction_OnEndEquip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCDoAction, nullptr, "OnEndEquip", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCDoAction_OnEndEquip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCDoAction_OnEndEquip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCDoAction_OnEndEquip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCDoAction_OnEndEquip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCDoAction_OnUnEquip_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCDoAction_OnUnEquip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapons/CDoAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCDoAction_OnUnEquip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCDoAction, nullptr, "OnUnEquip", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCDoAction_OnUnEquip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCDoAction_OnUnEquip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCDoAction_OnUnEquip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCDoAction_OnUnEquip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCDoAction_NoRegister()
	{
		return UCDoAction::StaticClass();
	}
	struct Z_Construct_UClass_UCDoAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnerCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerCharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Movement_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Movement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_State;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCDoAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_U06_Battle,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCDoAction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCDoAction_OnAttachmentBeginCollision, "OnAttachmentBeginCollision" }, // 1477459430
		{ &Z_Construct_UFunction_UCDoAction_OnAttachmentBeginOverlap, "OnAttachmentBeginOverlap" }, // 3869189270
		{ &Z_Construct_UFunction_UCDoAction_OnAttachmentEndCollision, "OnAttachmentEndCollision" }, // 1173299477
		{ &Z_Construct_UFunction_UCDoAction_OnAttachmentEndOverlap, "OnAttachmentEndOverlap" }, // 1786274388
		{ &Z_Construct_UFunction_UCDoAction_OnBeginEquip, "OnBeginEquip" }, // 2615620116
		{ &Z_Construct_UFunction_UCDoAction_OnEndEquip, "OnEndEquip" }, // 67000507
		{ &Z_Construct_UFunction_UCDoAction_OnUnEquip, "OnUnEquip" }, // 3994575199
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCDoAction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */// UCDoaction --> UCDoatcion_Sword\n// ?\xdf\xbb?\xc8\xad, ????(X)\n//UCLASS(Abstract,NotBlueprintable)\n" },
		{ "IncludePath", "Weapons/CDoAction.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Weapons/CDoAction.h" },
		{ "ToolTip", "// UCDoaction --> UCDoatcion_Sword\n// ?\xdf\xbb?\xc8\xad, ????(X)\n//UCLASS(Abstract,NotBlueprintable)" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCDoAction_Statics::NewProp_OwnerCharacter_MetaData[] = {
		{ "Comment", "// -> UObect ???????\xdd\xb7??\xc7\xbf??? ????????...(UProperty,TArray,61??)\n" },
		{ "ModuleRelativePath", "Weapons/CDoAction.h" },
		{ "ToolTip", "-> UObect ???????\xdd\xb7??\xc7\xbf??? ????????...(UProperty,TArray,61??)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCDoAction_Statics::NewProp_OwnerCharacter = { "OwnerCharacter", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCDoAction, OwnerCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCDoAction_Statics::NewProp_OwnerCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCDoAction_Statics::NewProp_OwnerCharacter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCDoAction_Statics::NewProp_Movement_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapons/CDoAction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCDoAction_Statics::NewProp_Movement = { "Movement", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCDoAction, Movement), Z_Construct_UClass_UCMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCDoAction_Statics::NewProp_Movement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCDoAction_Statics::NewProp_Movement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCDoAction_Statics::NewProp_State_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapons/CDoAction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCDoAction_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCDoAction, State), Z_Construct_UClass_UCStateComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCDoAction_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCDoAction_Statics::NewProp_State_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCDoAction_Statics::NewProp_World_MetaData[] = {
		{ "ModuleRelativePath", "Weapons/CDoAction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCDoAction_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCDoAction, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCDoAction_Statics::NewProp_World_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCDoAction_Statics::NewProp_World_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCDoAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCDoAction_Statics::NewProp_OwnerCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCDoAction_Statics::NewProp_Movement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCDoAction_Statics::NewProp_State,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCDoAction_Statics::NewProp_World,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCDoAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCDoAction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCDoAction_Statics::ClassParams = {
		&UCDoAction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCDoAction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCDoAction_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCDoAction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCDoAction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCDoAction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCDoAction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCDoAction, 212708696);
	template<> U06_BATTLE_API UClass* StaticClass<UCDoAction>()
	{
		return UCDoAction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCDoAction(Z_Construct_UClass_UCDoAction, &UCDoAction::StaticClass, TEXT("/Script/U06_Battle"), TEXT("UCDoAction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCDoAction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
