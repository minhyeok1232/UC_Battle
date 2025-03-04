// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "U06_Battle/Weapons/SubActions/CSubAction_Bow.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCSubAction_Bow() {}
// Cross Module References
	U06_BATTLE_API UScriptStruct* Z_Construct_UScriptStruct_FAimData();
	UPackage* Z_Construct_UPackage__Script_U06_Battle();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	U06_BATTLE_API UClass* Z_Construct_UClass_UCSubAction_Bow_NoRegister();
	U06_BATTLE_API UClass* Z_Construct_UClass_UCSubAction_Bow();
	U06_BATTLE_API UClass* Z_Construct_UClass_UCSubAction();
	ENGINE_API UClass* Z_Construct_UClass_UCurveVector_NoRegister();
// End Cross Module References
class UScriptStruct* FAimData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern U06_BATTLE_API uint32 Get_Z_Construct_UScriptStruct_FAimData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAimData, Z_Construct_UPackage__Script_U06_Battle(), TEXT("AimData"), sizeof(FAimData), Get_Z_Construct_UScriptStruct_FAimData_Hash());
	}
	return Singleton;
}
template<> U06_BATTLE_API UScriptStruct* StaticStruct<FAimData>()
{
	return FAimData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAimData(FAimData::StaticStruct, TEXT("/Script/U06_Battle"), TEXT("AimData"), false, nullptr, nullptr);
static struct FScriptStruct_U06_Battle_StaticRegisterNativesFAimData
{
	FScriptStruct_U06_Battle_StaticRegisterNativesFAimData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AimData")),new UScriptStruct::TCppStructOps<FAimData>);
	}
} ScriptStruct_U06_Battle_StaticRegisterNativesFAimData;
	struct Z_Construct_UScriptStruct_FAimData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetArmLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetArmLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SocketOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SocketOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableCameraLag_MetaData[];
#endif
		static void NewProp_bEnableCameraLag_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableCameraLag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CameraLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAimData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Weapons/SubActions/CSubAction_Bow.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAimData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAimData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAimData_Statics::NewProp_TargetArmLength_MetaData[] = {
		{ "Category", "AimData" },
		{ "ModuleRelativePath", "Weapons/SubActions/CSubAction_Bow.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAimData_Statics::NewProp_TargetArmLength = { "TargetArmLength", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAimData, TargetArmLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FAimData_Statics::NewProp_TargetArmLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAimData_Statics::NewProp_TargetArmLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAimData_Statics::NewProp_SocketOffset_MetaData[] = {
		{ "Category", "AimData" },
		{ "Comment", "// ?\xe2\xba\xbb 300-400\n" },
		{ "ModuleRelativePath", "Weapons/SubActions/CSubAction_Bow.h" },
		{ "ToolTip", "?\xe2\xba\xbb 300-400" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAimData_Statics::NewProp_SocketOffset = { "SocketOffset", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAimData, SocketOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAimData_Statics::NewProp_SocketOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAimData_Statics::NewProp_SocketOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAimData_Statics::NewProp_bEnableCameraLag_MetaData[] = {
		{ "Category", "AimData" },
		{ "Comment", "// \xc4\xab?\xde\xb6??? ???? ?\xe6\xb5\xb9 ????\n" },
		{ "ModuleRelativePath", "Weapons/SubActions/CSubAction_Bow.h" },
		{ "ToolTip", "\xc4\xab?\xde\xb6??? ???? ?\xe6\xb5\xb9 ????" },
	};
#endif
	void Z_Construct_UScriptStruct_FAimData_Statics::NewProp_bEnableCameraLag_SetBit(void* Obj)
	{
		((FAimData*)Obj)->bEnableCameraLag = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAimData_Statics::NewProp_bEnableCameraLag = { "bEnableCameraLag", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAimData), &Z_Construct_UScriptStruct_FAimData_Statics::NewProp_bEnableCameraLag_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAimData_Statics::NewProp_bEnableCameraLag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAimData_Statics::NewProp_bEnableCameraLag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAimData_Statics::NewProp_CameraLocation_MetaData[] = {
		{ "Category", "AimData" },
		{ "Comment", "// ??/\xc8\xad?? : false --> \xc4\xbf?\xde\xb6? TargetAmLeng\n// \xc4\xab?\xde\xb6??? ???? ?\xe6\xb5\xb9????\n" },
		{ "ModuleRelativePath", "Weapons/SubActions/CSubAction_Bow.h" },
		{ "ToolTip", "??/\xc8\xad?? : false --> \xc4\xbf?\xde\xb6? TargetAmLeng\n\xc4\xab?\xde\xb6??? ???? ?\xe6\xb5\xb9????" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAimData_Statics::NewProp_CameraLocation = { "CameraLocation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAimData, CameraLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAimData_Statics::NewProp_CameraLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAimData_Statics::NewProp_CameraLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAimData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAimData_Statics::NewProp_TargetArmLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAimData_Statics::NewProp_SocketOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAimData_Statics::NewProp_bEnableCameraLag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAimData_Statics::NewProp_CameraLocation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAimData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_U06_Battle,
		nullptr,
		&NewStructOps,
		"AimData",
		sizeof(FAimData),
		alignof(FAimData),
		Z_Construct_UScriptStruct_FAimData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAimData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAimData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAimData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAimData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAimData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_U06_Battle();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AimData"), sizeof(FAimData), Get_Z_Construct_UScriptStruct_FAimData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAimData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAimData_Hash() { return 3473990301U; }
	DEFINE_FUNCTION(UCSubAction_Bow::execOnAiming)
	{
		P_GET_STRUCT(FVector,Z_Param_output);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAiming(Z_Param_output);
		P_NATIVE_END;
	}
	void UCSubAction_Bow::StaticRegisterNativesUCSubAction_Bow()
	{
		UClass* Class = UCSubAction_Bow::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnAiming", &UCSubAction_Bow::execOnAiming },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCSubAction_Bow_OnAiming_Statics
	{
		struct CSubAction_Bow_eventOnAiming_Parms
		{
			FVector output;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_output;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCSubAction_Bow_OnAiming_Statics::NewProp_output = { "output", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CSubAction_Bow_eventOnAiming_Parms, output), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCSubAction_Bow_OnAiming_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCSubAction_Bow_OnAiming_Statics::NewProp_output,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCSubAction_Bow_OnAiming_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// TimeLine?????? Binding?? ?\xd4\xbc?\n" },
		{ "ModuleRelativePath", "Weapons/SubActions/CSubAction_Bow.h" },
		{ "ToolTip", "TimeLine?????? Binding?? ?\xd4\xbc?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCSubAction_Bow_OnAiming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCSubAction_Bow, nullptr, "OnAiming", nullptr, nullptr, sizeof(CSubAction_Bow_eventOnAiming_Parms), Z_Construct_UFunction_UCSubAction_Bow_OnAiming_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCSubAction_Bow_OnAiming_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00840401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCSubAction_Bow_OnAiming_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCSubAction_Bow_OnAiming_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCSubAction_Bow_OnAiming()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCSubAction_Bow_OnAiming_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCSubAction_Bow_NoRegister()
	{
		return UCSubAction_Bow::StaticClass();
	}
	struct Z_Construct_UClass_UCSubAction_Bow_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Curve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Curve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AimData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimingSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AimingSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCSubAction_Bow_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCSubAction,
		(UObject* (*)())Z_Construct_UPackage__Script_U06_Battle,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCSubAction_Bow_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCSubAction_Bow_OnAiming, "OnAiming" }, // 1144439295
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSubAction_Bow_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Weapons/SubActions/CSubAction_Bow.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Weapons/SubActions/CSubAction_Bow.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSubAction_Bow_Statics::NewProp_Curve_MetaData[] = {
		{ "Category", "Aiming" },
		{ "ModuleRelativePath", "Weapons/SubActions/CSubAction_Bow.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCSubAction_Bow_Statics::NewProp_Curve = { "Curve", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCSubAction_Bow, Curve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCSubAction_Bow_Statics::NewProp_Curve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSubAction_Bow_Statics::NewProp_Curve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSubAction_Bow_Statics::NewProp_AimData_MetaData[] = {
		{ "Category", "Aiming" },
		{ "Comment", "// X,Y,Z  LinearColor :4, Float : 1\n" },
		{ "ModuleRelativePath", "Weapons/SubActions/CSubAction_Bow.h" },
		{ "ToolTip", "X,Y,Z  LinearColor :4, Float : 1" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCSubAction_Bow_Statics::NewProp_AimData = { "AimData", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCSubAction_Bow, AimData), Z_Construct_UScriptStruct_FAimData, METADATA_PARAMS(Z_Construct_UClass_UCSubAction_Bow_Statics::NewProp_AimData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSubAction_Bow_Statics::NewProp_AimData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSubAction_Bow_Statics::NewProp_AimingSpeed_MetaData[] = {
		{ "Category", "Aiming" },
		{ "ModuleRelativePath", "Weapons/SubActions/CSubAction_Bow.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCSubAction_Bow_Statics::NewProp_AimingSpeed = { "AimingSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCSubAction_Bow, AimingSpeed), METADATA_PARAMS(Z_Construct_UClass_UCSubAction_Bow_Statics::NewProp_AimingSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSubAction_Bow_Statics::NewProp_AimingSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCSubAction_Bow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSubAction_Bow_Statics::NewProp_Curve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSubAction_Bow_Statics::NewProp_AimData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSubAction_Bow_Statics::NewProp_AimingSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCSubAction_Bow_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCSubAction_Bow>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCSubAction_Bow_Statics::ClassParams = {
		&UCSubAction_Bow::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCSubAction_Bow_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCSubAction_Bow_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCSubAction_Bow_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCSubAction_Bow_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCSubAction_Bow()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCSubAction_Bow_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCSubAction_Bow, 3531395142);
	template<> U06_BATTLE_API UClass* StaticClass<UCSubAction_Bow>()
	{
		return UCSubAction_Bow::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCSubAction_Bow(Z_Construct_UClass_UCSubAction_Bow, &UCSubAction_Bow::StaticClass, TEXT("/Script/U06_Battle"), TEXT("UCSubAction_Bow"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCSubAction_Bow);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
