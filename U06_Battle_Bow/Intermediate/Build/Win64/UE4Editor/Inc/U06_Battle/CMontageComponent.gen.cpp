// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "U06_Battle/Components/CMontageComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCMontageComponent() {}
// Cross Module References
	U06_BATTLE_API UScriptStruct* Z_Construct_UScriptStruct_FMontagesData();
	UPackage* Z_Construct_UPackage__Script_U06_Battle();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	U06_BATTLE_API UEnum* Z_Construct_UEnum_U06_Battle_EStateType();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	U06_BATTLE_API UClass* Z_Construct_UClass_UCMontageComponent_NoRegister();
	U06_BATTLE_API UClass* Z_Construct_UClass_UCMontageComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBranchingPointNotifyPayload();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FMontagesData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FMontagesData cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FMontagesData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern U06_BATTLE_API uint32 Get_Z_Construct_UScriptStruct_FMontagesData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMontagesData, Z_Construct_UPackage__Script_U06_Battle(), TEXT("MontagesData"), sizeof(FMontagesData), Get_Z_Construct_UScriptStruct_FMontagesData_Hash());
	}
	return Singleton;
}
template<> U06_BATTLE_API UScriptStruct* StaticStruct<FMontagesData>()
{
	return FMontagesData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMontagesData(FMontagesData::StaticStruct, TEXT("/Script/U06_Battle"), TEXT("MontagesData"), false, nullptr, nullptr);
static struct FScriptStruct_U06_Battle_StaticRegisterNativesFMontagesData
{
	FScriptStruct_U06_Battle_StaticRegisterNativesFMontagesData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MontagesData")),new UScriptStruct::TCppStructOps<FMontagesData>);
	}
} ScriptStruct_U06_Battle_StaticRegisterNativesFMontagesData;
	struct Z_Construct_UScriptStruct_FMontagesData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Montage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMontagesData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// csv?? ?????????\xcc\xba??? ?????? ???? ????\n// DT_Player.csv????\n" },
		{ "ModuleRelativePath", "Components/CMontageComponent.h" },
		{ "ToolTip", "csv?? ?????????\xcc\xba??? ?????? ???? ????\nDT_Player.csv????" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMontagesData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMontagesData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMontagesData_Statics::NewProp_Index_MetaData[] = {
		{ "Category", "MontagesData" },
		{ "Comment", "// UE???? ?\xd4\xb7\xc2\xb0????\xcf\xb5???\n" },
		{ "ModuleRelativePath", "Components/CMontageComponent.h" },
		{ "ToolTip", "UE???? ?\xd4\xb7\xc2\xb0????\xcf\xb5???" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMontagesData_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMontagesData, Index), METADATA_PARAMS(Z_Construct_UScriptStruct_FMontagesData_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMontagesData_Statics::NewProp_Index_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMontagesData_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMontagesData_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "MontagesData" },
		{ "ModuleRelativePath", "Components/CMontageComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMontagesData_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMontagesData, Type), Z_Construct_UEnum_U06_Battle_EStateType, METADATA_PARAMS(Z_Construct_UScriptStruct_FMontagesData_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMontagesData_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMontagesData_Statics::NewProp_Montage_MetaData[] = {
		{ "Category", "MontagesData" },
		{ "ModuleRelativePath", "Components/CMontageComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMontagesData_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMontagesData, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMontagesData_Statics::NewProp_Montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMontagesData_Statics::NewProp_Montage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMontagesData_Statics::NewProp_PlayRate_MetaData[] = {
		{ "Category", "MontagesData" },
		{ "ModuleRelativePath", "Components/CMontageComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMontagesData_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMontagesData, PlayRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FMontagesData_Statics::NewProp_PlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMontagesData_Statics::NewProp_PlayRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMontagesData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMontagesData_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMontagesData_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMontagesData_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMontagesData_Statics::NewProp_Montage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMontagesData_Statics::NewProp_PlayRate,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMontagesData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_U06_Battle,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"MontagesData",
		sizeof(FMontagesData),
		alignof(FMontagesData),
		Z_Construct_UScriptStruct_FMontagesData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMontagesData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMontagesData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMontagesData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMontagesData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMontagesData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_U06_Battle();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MontagesData"), sizeof(FMontagesData), Get_Z_Construct_UScriptStruct_FMontagesData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMontagesData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMontagesData_Hash() { return 3430855828U; }
	DEFINE_FUNCTION(UCMontageComponent::execOnMontageEnded)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_GET_UBOOL(Z_Param_bInterrupted);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMontageEnded(Z_Param_Montage,Z_Param_bInterrupted);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCMontageComponent::execOnMontageNotifyBegin)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_NotifyName);
		P_GET_STRUCT_REF(FBranchingPointNotifyPayload,Z_Param_Out_BranchingPointPayload);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMontageNotifyBegin(Z_Param_NotifyName,Z_Param_Out_BranchingPointPayload);
		P_NATIVE_END;
	}
	void UCMontageComponent::StaticRegisterNativesUCMontageComponent()
	{
		UClass* Class = UCMontageComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnMontageEnded", &UCMontageComponent::execOnMontageEnded },
			{ "OnMontageNotifyBegin", &UCMontageComponent::execOnMontageNotifyBegin },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCMontageComponent_OnMontageEnded_Statics
	{
		struct CMontageComponent_eventOnMontageEnded_Parms
		{
			UAnimMontage* Montage;
			bool bInterrupted;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static void NewProp_bInterrupted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInterrupted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCMontageComponent_OnMontageEnded_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CMontageComponent_eventOnMontageEnded_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCMontageComponent_OnMontageEnded_Statics::NewProp_bInterrupted_SetBit(void* Obj)
	{
		((CMontageComponent_eventOnMontageEnded_Parms*)Obj)->bInterrupted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCMontageComponent_OnMontageEnded_Statics::NewProp_bInterrupted = { "bInterrupted", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CMontageComponent_eventOnMontageEnded_Parms), &Z_Construct_UFunction_UCMontageComponent_OnMontageEnded_Statics::NewProp_bInterrupted_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCMontageComponent_OnMontageEnded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCMontageComponent_OnMontageEnded_Statics::NewProp_Montage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCMontageComponent_OnMontageEnded_Statics::NewProp_bInterrupted,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCMontageComponent_OnMontageEnded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/CMontageComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCMontageComponent_OnMontageEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCMontageComponent, nullptr, "OnMontageEnded", nullptr, nullptr, sizeof(CMontageComponent_eventOnMontageEnded_Parms), Z_Construct_UFunction_UCMontageComponent_OnMontageEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCMontageComponent_OnMontageEnded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCMontageComponent_OnMontageEnded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCMontageComponent_OnMontageEnded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCMontageComponent_OnMontageEnded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCMontageComponent_OnMontageEnded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCMontageComponent_OnMontageNotifyBegin_Statics
	{
		struct CMontageComponent_eventOnMontageNotifyBegin_Parms
		{
			FName NotifyName;
			FBranchingPointNotifyPayload BranchingPointPayload;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NotifyName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BranchingPointPayload_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BranchingPointPayload;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCMontageComponent_OnMontageNotifyBegin_Statics::NewProp_NotifyName = { "NotifyName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CMontageComponent_eventOnMontageNotifyBegin_Parms, NotifyName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCMontageComponent_OnMontageNotifyBegin_Statics::NewProp_BranchingPointPayload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCMontageComponent_OnMontageNotifyBegin_Statics::NewProp_BranchingPointPayload = { "BranchingPointPayload", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CMontageComponent_eventOnMontageNotifyBegin_Parms, BranchingPointPayload), Z_Construct_UScriptStruct_FBranchingPointNotifyPayload, METADATA_PARAMS(Z_Construct_UFunction_UCMontageComponent_OnMontageNotifyBegin_Statics::NewProp_BranchingPointPayload_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCMontageComponent_OnMontageNotifyBegin_Statics::NewProp_BranchingPointPayload_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCMontageComponent_OnMontageNotifyBegin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCMontageComponent_OnMontageNotifyBegin_Statics::NewProp_NotifyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCMontageComponent_OnMontageNotifyBegin_Statics::NewProp_BranchingPointPayload,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCMontageComponent_OnMontageNotifyBegin_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//?????? ??\xc5\xb8??????, PlayAnimMontage\n" },
		{ "ModuleRelativePath", "Components/CMontageComponent.h" },
		{ "ToolTip", "?????? ??\xc5\xb8??????, PlayAnimMontage" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCMontageComponent_OnMontageNotifyBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCMontageComponent, nullptr, "OnMontageNotifyBegin", nullptr, nullptr, sizeof(CMontageComponent_eventOnMontageNotifyBegin_Parms), Z_Construct_UFunction_UCMontageComponent_OnMontageNotifyBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCMontageComponent_OnMontageNotifyBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCMontageComponent_OnMontageNotifyBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCMontageComponent_OnMontageNotifyBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCMontageComponent_OnMontageNotifyBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCMontageComponent_OnMontageNotifyBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCMontageComponent_NoRegister()
	{
		return UCMontageComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCMontageComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DataTable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCMontageComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_U06_Battle,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCMontageComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCMontageComponent_OnMontageEnded, "OnMontageEnded" }, // 2540258776
		{ &Z_Construct_UFunction_UCMontageComponent_OnMontageNotifyBegin, "OnMontageNotifyBegin" }, // 1307795411
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCMontageComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/CMontageComponent.h" },
		{ "ModuleRelativePath", "Components/CMontageComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCMontageComponent_Statics::NewProp_DataTable_MetaData[] = {
		{ "Category", "DataTable" },
		{ "ModuleRelativePath", "Components/CMontageComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCMontageComponent_Statics::NewProp_DataTable = { "DataTable", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCMontageComponent, DataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCMontageComponent_Statics::NewProp_DataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCMontageComponent_Statics::NewProp_DataTable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCMontageComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCMontageComponent_Statics::NewProp_DataTable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCMontageComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCMontageComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCMontageComponent_Statics::ClassParams = {
		&UCMontageComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCMontageComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCMontageComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCMontageComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCMontageComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCMontageComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCMontageComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCMontageComponent, 2026000278);
	template<> U06_BATTLE_API UClass* StaticClass<UCMontageComponent>()
	{
		return UCMontageComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCMontageComponent(Z_Construct_UClass_UCMontageComponent, &UCMontageComponent::StaticClass, TEXT("/Script/U06_Battle"), TEXT("UCMontageComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCMontageComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
