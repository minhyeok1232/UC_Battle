// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "U06_Battle/Weapons/AddOns/CGhostTrail.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCGhostTrail() {}
// Cross Module References
	U06_BATTLE_API UClass* Z_Construct_UClass_ACGhostTrail_NoRegister();
	U06_BATTLE_API UClass* Z_Construct_UClass_ACGhostTrail();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_U06_Battle();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UPoseableMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ACGhostTrail::execRestoreMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RestoreMesh();
		P_NATIVE_END;
	}
	void ACGhostTrail::StaticRegisterNativesACGhostTrail()
	{
		UClass* Class = ACGhostTrail::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RestoreMesh", &ACGhostTrail::execRestoreMesh },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACGhostTrail_RestoreMesh_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACGhostTrail_RestoreMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapons/AddOns/CGhostTrail.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACGhostTrail_RestoreMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACGhostTrail, nullptr, "RestoreMesh", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACGhostTrail_RestoreMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACGhostTrail_RestoreMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACGhostTrail_RestoreMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACGhostTrail_RestoreMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACGhostTrail_NoRegister()
	{
		return ACGhostTrail::StaticClass();
	}
	struct Z_Construct_UClass_ACGhostTrail_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Interval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Exponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Exponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScaleAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACGhostTrail_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_U06_Battle,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACGhostTrail_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACGhostTrail_RestoreMesh, "RestoreMesh" }, // 3274538185
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACGhostTrail_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Weapons/AddOns/CGhostTrail.h" },
		{ "ModuleRelativePath", "Weapons/AddOns/CGhostTrail.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACGhostTrail_Statics::NewProp_StartDelay_MetaData[] = {
		{ "Category", "Capture" },
		{ "Comment", "// Ghost?? ???? ????????\n" },
		{ "ModuleRelativePath", "Weapons/AddOns/CGhostTrail.h" },
		{ "ToolTip", "Ghost?? ???? ????????" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACGhostTrail_Statics::NewProp_StartDelay = { "StartDelay", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACGhostTrail, StartDelay), METADATA_PARAMS(Z_Construct_UClass_ACGhostTrail_Statics::NewProp_StartDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACGhostTrail_Statics::NewProp_StartDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACGhostTrail_Statics::NewProp_Interval_MetaData[] = {
		{ "Category", "Capture" },
		{ "ModuleRelativePath", "Weapons/AddOns/CGhostTrail.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACGhostTrail_Statics::NewProp_Interval = { "Interval", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACGhostTrail, Interval), METADATA_PARAMS(Z_Construct_UClass_ACGhostTrail_Statics::NewProp_Interval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACGhostTrail_Statics::NewProp_Interval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACGhostTrail_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "Capture" },
		{ "ModuleRelativePath", "Weapons/AddOns/CGhostTrail.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACGhostTrail_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACGhostTrail, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_ACGhostTrail_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACGhostTrail_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACGhostTrail_Statics::NewProp_Exponent_MetaData[] = {
		{ "Category", "Capture" },
		{ "ModuleRelativePath", "Weapons/AddOns/CGhostTrail.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACGhostTrail_Statics::NewProp_Exponent = { "Exponent", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACGhostTrail, Exponent), METADATA_PARAMS(Z_Construct_UClass_ACGhostTrail_Statics::NewProp_Exponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACGhostTrail_Statics::NewProp_Exponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACGhostTrail_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "Capture" },
		{ "ModuleRelativePath", "Weapons/AddOns/CGhostTrail.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACGhostTrail_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACGhostTrail, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ACGhostTrail_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACGhostTrail_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACGhostTrail_Statics::NewProp_ScaleAmount_MetaData[] = {
		{ "Category", "Capture" },
		{ "ModuleRelativePath", "Weapons/AddOns/CGhostTrail.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACGhostTrail_Statics::NewProp_ScaleAmount = { "ScaleAmount", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACGhostTrail, ScaleAmount), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ACGhostTrail_Statics::NewProp_ScaleAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACGhostTrail_Statics::NewProp_ScaleAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACGhostTrail_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "CGhostTrail" },
		{ "Comment", "// Component\n//???\xcc\xb7?\xc5\xbb Mesh?? ?????\xd8\xbc?\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapons/AddOns/CGhostTrail.h" },
		{ "ToolTip", "Component\n???\xcc\xb7?\xc5\xbb Mesh?? ?????\xd8\xbc?" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACGhostTrail_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACGhostTrail, Mesh), Z_Construct_UClass_UPoseableMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACGhostTrail_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACGhostTrail_Statics::NewProp_Mesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACGhostTrail_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACGhostTrail_Statics::NewProp_StartDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACGhostTrail_Statics::NewProp_Interval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACGhostTrail_Statics::NewProp_Color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACGhostTrail_Statics::NewProp_Exponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACGhostTrail_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACGhostTrail_Statics::NewProp_ScaleAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACGhostTrail_Statics::NewProp_Mesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACGhostTrail_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACGhostTrail>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACGhostTrail_Statics::ClassParams = {
		&ACGhostTrail::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACGhostTrail_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACGhostTrail_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACGhostTrail_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACGhostTrail_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACGhostTrail()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACGhostTrail_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACGhostTrail, 4181840807);
	template<> U06_BATTLE_API UClass* StaticClass<ACGhostTrail>()
	{
		return ACGhostTrail::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACGhostTrail(Z_Construct_UClass_ACGhostTrail, &ACGhostTrail::StaticClass, TEXT("/Script/U06_Battle"), TEXT("ACGhostTrail"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACGhostTrail);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
