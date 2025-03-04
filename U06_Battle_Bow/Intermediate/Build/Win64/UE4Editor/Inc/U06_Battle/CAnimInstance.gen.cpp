// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "U06_Battle/Characters/CAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCAnimInstance() {}
// Cross Module References
	U06_BATTLE_API UClass* Z_Construct_UClass_UCAnimInstance_NoRegister();
	U06_BATTLE_API UClass* Z_Construct_UClass_UCAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_U06_Battle();
	U06_BATTLE_API UEnum* Z_Construct_UEnum_U06_Battle_EWeaponType();
// End Cross Module References
	DEFINE_FUNCTION(UCAnimInstance::execOnWeaponTypeChanged)
	{
		P_GET_ENUM(EWeaponType,Z_Param_InPrevType);
		P_GET_ENUM(EWeaponType,Z_Param_InNewType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnWeaponTypeChanged(EWeaponType(Z_Param_InPrevType),EWeaponType(Z_Param_InNewType));
		P_NATIVE_END;
	}
	void UCAnimInstance::StaticRegisterNativesUCAnimInstance()
	{
		UClass* Class = UCAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnWeaponTypeChanged", &UCAnimInstance::execOnWeaponTypeChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCAnimInstance_OnWeaponTypeChanged_Statics
	{
		struct CAnimInstance_eventOnWeaponTypeChanged_Parms
		{
			EWeaponType InPrevType;
			EWeaponType InNewType;
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCAnimInstance_OnWeaponTypeChanged_Statics::NewProp_InPrevType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCAnimInstance_OnWeaponTypeChanged_Statics::NewProp_InPrevType = { "InPrevType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CAnimInstance_eventOnWeaponTypeChanged_Parms, InPrevType), Z_Construct_UEnum_U06_Battle_EWeaponType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCAnimInstance_OnWeaponTypeChanged_Statics::NewProp_InNewType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCAnimInstance_OnWeaponTypeChanged_Statics::NewProp_InNewType = { "InNewType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CAnimInstance_eventOnWeaponTypeChanged_Parms, InNewType), Z_Construct_UEnum_U06_Battle_EWeaponType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCAnimInstance_OnWeaponTypeChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCAnimInstance_OnWeaponTypeChanged_Statics::NewProp_InPrevType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCAnimInstance_OnWeaponTypeChanged_Statics::NewProp_InPrevType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCAnimInstance_OnWeaponTypeChanged_Statics::NewProp_InNewType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCAnimInstance_OnWeaponTypeChanged_Statics::NewProp_InNewType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCAnimInstance_OnWeaponTypeChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Characters/CAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCAnimInstance_OnWeaponTypeChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCAnimInstance, nullptr, "OnWeaponTypeChanged", nullptr, nullptr, sizeof(CAnimInstance_eventOnWeaponTypeChanged_Parms), Z_Construct_UFunction_UCAnimInstance_OnWeaponTypeChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCAnimInstance_OnWeaponTypeChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCAnimInstance_OnWeaponTypeChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCAnimInstance_OnWeaponTypeChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCAnimInstance_OnWeaponTypeChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCAnimInstance_OnWeaponTypeChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCAnimInstance_NoRegister()
	{
		return UCAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UCAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Direction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Pitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFalling_MetaData[];
#endif
		static void NewProp_bFalling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFalling;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WeaponType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WeaponType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBow_Aiming_MetaData[];
#endif
		static void NewProp_bBow_Aiming_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBow_Aiming;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_U06_Battle,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCAnimInstance_OnWeaponTypeChanged, "OnWeaponTypeChanged" }, // 1836881844
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *?\xd6\xb3\xd7\xb8??\xcc\xbc\xc7\xba???????\xc6\xae (NativeBegin,Na\n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Characters/CAnimInstance.h" },
		{ "ModuleRelativePath", "Characters/CAnimInstance.h" },
		{ "ToolTip", "?\xd6\xb3\xd7\xb8??\xcc\xbc\xc7\xba???????\xc6\xae (NativeBegin,Na" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCAnimInstance_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Characters/CAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCAnimInstance_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCAnimInstance, Speed), METADATA_PARAMS(Z_Construct_UClass_UCAnimInstance_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCAnimInstance_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCAnimInstance_Statics::NewProp_Direction_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Characters/CAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCAnimInstance_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCAnimInstance, Direction), METADATA_PARAMS(Z_Construct_UClass_UCAnimInstance_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCAnimInstance_Statics::NewProp_Direction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCAnimInstance_Statics::NewProp_Pitch_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Characters/CAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCAnimInstance_Statics::NewProp_Pitch = { "Pitch", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCAnimInstance, Pitch), METADATA_PARAMS(Z_Construct_UClass_UCAnimInstance_Statics::NewProp_Pitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCAnimInstance_Statics::NewProp_Pitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCAnimInstance_Statics::NewProp_bFalling_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Characters/CAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UCAnimInstance_Statics::NewProp_bFalling_SetBit(void* Obj)
	{
		((UCAnimInstance*)Obj)->bFalling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCAnimInstance_Statics::NewProp_bFalling = { "bFalling", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCAnimInstance), &Z_Construct_UClass_UCAnimInstance_Statics::NewProp_bFalling_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCAnimInstance_Statics::NewProp_bFalling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCAnimInstance_Statics::NewProp_bFalling_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCAnimInstance_Statics::NewProp_WeaponType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCAnimInstance_Statics::NewProp_WeaponType_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Characters/CAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCAnimInstance_Statics::NewProp_WeaponType = { "WeaponType", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCAnimInstance, WeaponType), Z_Construct_UEnum_U06_Battle_EWeaponType, METADATA_PARAMS(Z_Construct_UClass_UCAnimInstance_Statics::NewProp_WeaponType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCAnimInstance_Statics::NewProp_WeaponType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCAnimInstance_Statics::NewProp_bBow_Aiming_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "// Bow\n" },
		{ "ModuleRelativePath", "Characters/CAnimInstance.h" },
		{ "ToolTip", "Bow" },
	};
#endif
	void Z_Construct_UClass_UCAnimInstance_Statics::NewProp_bBow_Aiming_SetBit(void* Obj)
	{
		((UCAnimInstance*)Obj)->bBow_Aiming = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCAnimInstance_Statics::NewProp_bBow_Aiming = { "bBow_Aiming", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCAnimInstance), &Z_Construct_UClass_UCAnimInstance_Statics::NewProp_bBow_Aiming_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCAnimInstance_Statics::NewProp_bBow_Aiming_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCAnimInstance_Statics::NewProp_bBow_Aiming_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCAnimInstance_Statics::NewProp_Speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCAnimInstance_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCAnimInstance_Statics::NewProp_Pitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCAnimInstance_Statics::NewProp_bFalling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCAnimInstance_Statics::NewProp_WeaponType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCAnimInstance_Statics::NewProp_WeaponType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCAnimInstance_Statics::NewProp_bBow_Aiming,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCAnimInstance_Statics::ClassParams = {
		&UCAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UCAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCAnimInstance, 3059781905);
	template<> U06_BATTLE_API UClass* StaticClass<UCAnimInstance>()
	{
		return UCAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCAnimInstance(Z_Construct_UClass_UCAnimInstance, &UCAnimInstance::StaticClass, TEXT("/Script/U06_Battle"), TEXT("UCAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
