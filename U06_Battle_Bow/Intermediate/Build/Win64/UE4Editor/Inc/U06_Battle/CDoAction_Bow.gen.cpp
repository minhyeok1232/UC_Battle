// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "U06_Battle/Weapons/DoActions/CDoAction_Bow.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCDoAction_Bow() {}
// Cross Module References
	U06_BATTLE_API UClass* Z_Construct_UClass_UCDoAction_Bow_NoRegister();
	U06_BATTLE_API UClass* Z_Construct_UClass_UCDoAction_Bow();
	U06_BATTLE_API UClass* Z_Construct_UClass_UCDoAction();
	UPackage* Z_Construct_UPackage__Script_U06_Battle();
	U06_BATTLE_API UClass* Z_Construct_UClass_ACArrow_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	DEFINE_FUNCTION(UCDoAction_Bow::execOnArrowEndPlay)
	{
		P_GET_OBJECT(ACArrow,Z_Param_InDestroyer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnArrowEndPlay(Z_Param_InDestroyer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCDoAction_Bow::execOnArrowHit)
	{
		P_GET_OBJECT(AActor,Z_Param_InCasuser);
		P_GET_OBJECT(ACharacter,Z_Param_InOtherCharacter);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnArrowHit(Z_Param_InCasuser,Z_Param_InOtherCharacter);
		P_NATIVE_END;
	}
	void UCDoAction_Bow::StaticRegisterNativesUCDoAction_Bow()
	{
		UClass* Class = UCDoAction_Bow::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnArrowEndPlay", &UCDoAction_Bow::execOnArrowEndPlay },
			{ "OnArrowHit", &UCDoAction_Bow::execOnArrowHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCDoAction_Bow_OnArrowEndPlay_Statics
	{
		struct CDoAction_Bow_eventOnArrowEndPlay_Parms
		{
			ACArrow* InDestroyer;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InDestroyer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCDoAction_Bow_OnArrowEndPlay_Statics::NewProp_InDestroyer = { "InDestroyer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CDoAction_Bow_eventOnArrowEndPlay_Parms, InDestroyer), Z_Construct_UClass_ACArrow_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCDoAction_Bow_OnArrowEndPlay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCDoAction_Bow_OnArrowEndPlay_Statics::NewProp_InDestroyer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCDoAction_Bow_OnArrowEndPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapons/DoActions/CDoAction_Bow.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCDoAction_Bow_OnArrowEndPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCDoAction_Bow, nullptr, "OnArrowEndPlay", nullptr, nullptr, sizeof(CDoAction_Bow_eventOnArrowEndPlay_Parms), Z_Construct_UFunction_UCDoAction_Bow_OnArrowEndPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCDoAction_Bow_OnArrowEndPlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCDoAction_Bow_OnArrowEndPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCDoAction_Bow_OnArrowEndPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCDoAction_Bow_OnArrowEndPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCDoAction_Bow_OnArrowEndPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCDoAction_Bow_OnArrowHit_Statics
	{
		struct CDoAction_Bow_eventOnArrowHit_Parms
		{
			AActor* InCasuser;
			ACharacter* InOtherCharacter;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InCasuser;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InOtherCharacter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCDoAction_Bow_OnArrowHit_Statics::NewProp_InCasuser = { "InCasuser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CDoAction_Bow_eventOnArrowHit_Parms, InCasuser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCDoAction_Bow_OnArrowHit_Statics::NewProp_InOtherCharacter = { "InOtherCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CDoAction_Bow_eventOnArrowHit_Parms, InOtherCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCDoAction_Bow_OnArrowHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCDoAction_Bow_OnArrowHit_Statics::NewProp_InCasuser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCDoAction_Bow_OnArrowHit_Statics::NewProp_InOtherCharacter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCDoAction_Bow_OnArrowHit_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// ACArrow -> CollisionCheck , Destrory ?\xcf\xbe\xee\xb3\xaa??  Tarray???? ???? Arrows???? ?\xca\xbf?\n" },
		{ "ModuleRelativePath", "Weapons/DoActions/CDoAction_Bow.h" },
		{ "ToolTip", "ACArrow -> CollisionCheck , Destrory ?\xcf\xbe\xee\xb3\xaa??  Tarray???? ???? Arrows???? ?\xca\xbf?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCDoAction_Bow_OnArrowHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCDoAction_Bow, nullptr, "OnArrowHit", nullptr, nullptr, sizeof(CDoAction_Bow_eventOnArrowHit_Parms), Z_Construct_UFunction_UCDoAction_Bow_OnArrowHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCDoAction_Bow_OnArrowHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCDoAction_Bow_OnArrowHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCDoAction_Bow_OnArrowHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCDoAction_Bow_OnArrowHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCDoAction_Bow_OnArrowHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCDoAction_Bow_NoRegister()
	{
		return UCDoAction_Bow::StaticClass();
	}
	struct Z_Construct_UClass_UCDoAction_Bow_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArrowClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ArrowClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCDoAction_Bow_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCDoAction,
		(UObject* (*)())Z_Construct_UPackage__Script_U06_Battle,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCDoAction_Bow_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCDoAction_Bow_OnArrowEndPlay, "OnArrowEndPlay" }, // 776480291
		{ &Z_Construct_UFunction_UCDoAction_Bow_OnArrowHit, "OnArrowHit" }, // 205900436
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCDoAction_Bow_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Weapons/DoActions/CDoAction_Bow.h" },
		{ "ModuleRelativePath", "Weapons/DoActions/CDoAction_Bow.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCDoAction_Bow_Statics::NewProp_ArrowClass_MetaData[] = {
		{ "Category", "Arrow" },
		{ "Comment", "// Begin/End : \xc8\xad???? ?????????? Create??\n" },
		{ "ModuleRelativePath", "Weapons/DoActions/CDoAction_Bow.h" },
		{ "ToolTip", "Begin/End : \xc8\xad???? ?????????? Create??" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCDoAction_Bow_Statics::NewProp_ArrowClass = { "ArrowClass", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCDoAction_Bow, ArrowClass), Z_Construct_UClass_ACArrow_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCDoAction_Bow_Statics::NewProp_ArrowClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCDoAction_Bow_Statics::NewProp_ArrowClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCDoAction_Bow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCDoAction_Bow_Statics::NewProp_ArrowClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCDoAction_Bow_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCDoAction_Bow>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCDoAction_Bow_Statics::ClassParams = {
		&UCDoAction_Bow::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCDoAction_Bow_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCDoAction_Bow_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCDoAction_Bow_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCDoAction_Bow_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCDoAction_Bow()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCDoAction_Bow_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCDoAction_Bow, 1874128940);
	template<> U06_BATTLE_API UClass* StaticClass<UCDoAction_Bow>()
	{
		return UCDoAction_Bow::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCDoAction_Bow(Z_Construct_UClass_UCDoAction_Bow, &UCDoAction_Bow::StaticClass, TEXT("/Script/U06_Battle"), TEXT("UCDoAction_Bow"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCDoAction_Bow);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
