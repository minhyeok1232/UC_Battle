// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "U06_Battle/Weapons/AddOns/CArrow.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCArrow() {}
// Cross Module References
	U06_BATTLE_API UFunction* Z_Construct_UDelegateFunction_U06_Battle_ProjectileEndPlay__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_U06_Battle();
	U06_BATTLE_API UClass* Z_Construct_UClass_ACArrow_NoRegister();
	U06_BATTLE_API UFunction* Z_Construct_UDelegateFunction_U06_Battle_ProjectileHit__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	U06_BATTLE_API UClass* Z_Construct_UClass_ACArrow();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_U06_Battle_ProjectileEndPlay__DelegateSignature_Statics
	{
		struct _Script_U06_Battle_eventProjectileEndPlay_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_U06_Battle_ProjectileEndPlay__DelegateSignature_Statics::NewProp_InDestroyer = { "InDestroyer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_U06_Battle_eventProjectileEndPlay_Parms, InDestroyer), Z_Construct_UClass_ACArrow_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_U06_Battle_ProjectileEndPlay__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_U06_Battle_ProjectileEndPlay__DelegateSignature_Statics::NewProp_InDestroyer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_U06_Battle_ProjectileEndPlay__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapons/AddOns/CArrow.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_U06_Battle_ProjectileEndPlay__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_U06_Battle, nullptr, "ProjectileEndPlay__DelegateSignature", nullptr, nullptr, sizeof(_Script_U06_Battle_eventProjectileEndPlay_Parms), Z_Construct_UDelegateFunction_U06_Battle_ProjectileEndPlay__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_U06_Battle_ProjectileEndPlay__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_U06_Battle_ProjectileEndPlay__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_U06_Battle_ProjectileEndPlay__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_U06_Battle_ProjectileEndPlay__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_U06_Battle_ProjectileEndPlay__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_U06_Battle_ProjectileHit__DelegateSignature_Statics
	{
		struct _Script_U06_Battle_eventProjectileHit_Parms
		{
			AActor* InCauser;
			ACharacter* InOtherCharacter;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InCauser;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InOtherCharacter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_U06_Battle_ProjectileHit__DelegateSignature_Statics::NewProp_InCauser = { "InCauser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_U06_Battle_eventProjectileHit_Parms, InCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_U06_Battle_ProjectileHit__DelegateSignature_Statics::NewProp_InOtherCharacter = { "InOtherCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_U06_Battle_eventProjectileHit_Parms, InOtherCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_U06_Battle_ProjectileHit__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_U06_Battle_ProjectileHit__DelegateSignature_Statics::NewProp_InCauser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_U06_Battle_ProjectileHit__DelegateSignature_Statics::NewProp_InOtherCharacter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_U06_Battle_ProjectileHit__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Arrow : Create?? ?\xd9\xbc? ( ???????\xe5\xba\xaf?? CDoaction_Bow)\n// ?????????\xcd\xb7? CDoaction_Bow????  Hit??, Destrory?\xc9\xb6? Arrows?\xe8\xbf\xad?? ?????? ???? (CoreDump ?\xdf\xbb??)\n" },
		{ "ModuleRelativePath", "Weapons/AddOns/CArrow.h" },
		{ "ToolTip", "Arrow : Create?? ?\xd9\xbc? ( ???????\xe5\xba\xaf?? CDoaction_Bow)\n?????????\xcd\xb7? CDoaction_Bow????  Hit??, Destrory?\xc9\xb6? Arrows?\xe8\xbf\xad?? ?????? ???? (CoreDump ?\xdf\xbb??)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_U06_Battle_ProjectileHit__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_U06_Battle, nullptr, "ProjectileHit__DelegateSignature", nullptr, nullptr, sizeof(_Script_U06_Battle_eventProjectileHit_Parms), Z_Construct_UDelegateFunction_U06_Battle_ProjectileHit__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_U06_Battle_ProjectileHit__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_U06_Battle_ProjectileHit__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_U06_Battle_ProjectileHit__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_U06_Battle_ProjectileHit__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_U06_Battle_ProjectileHit__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(ACArrow::execOnComponentHit)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnComponentHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	void ACArrow::StaticRegisterNativesACArrow()
	{
		UClass* Class = ACArrow::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnComponentHit", &ACArrow::execOnComponentHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACArrow_OnComponentHit_Statics
	{
		struct CArrow_eventOnComponentHit_Parms
		{
			UPrimitiveComponent* HitComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			FVector NormalImpulse;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACArrow_OnComponentHit_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACArrow_OnComponentHit_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CArrow_eventOnComponentHit_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACArrow_OnComponentHit_Statics::NewProp_HitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACArrow_OnComponentHit_Statics::NewProp_HitComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACArrow_OnComponentHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CArrow_eventOnComponentHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACArrow_OnComponentHit_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACArrow_OnComponentHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CArrow_eventOnComponentHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACArrow_OnComponentHit_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACArrow_OnComponentHit_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACArrow_OnComponentHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CArrow_eventOnComponentHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACArrow_OnComponentHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACArrow_OnComponentHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CArrow_eventOnComponentHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ACArrow_OnComponentHit_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACArrow_OnComponentHit_Statics::NewProp_Hit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACArrow_OnComponentHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACArrow_OnComponentHit_Statics::NewProp_HitComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACArrow_OnComponentHit_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACArrow_OnComponentHit_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACArrow_OnComponentHit_Statics::NewProp_NormalImpulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACArrow_OnComponentHit_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACArrow_OnComponentHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapons/AddOns/CArrow.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACArrow_OnComponentHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACArrow, nullptr, "OnComponentHit", nullptr, nullptr, sizeof(CArrow_eventOnComponentHit_Parms), Z_Construct_UFunction_ACArrow_OnComponentHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACArrow_OnComponentHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C40401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACArrow_OnComponentHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACArrow_OnComponentHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACArrow_OnComponentHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACArrow_OnComponentHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACArrow_NoRegister()
	{
		return ACArrow::StaticClass();
	}
	struct Z_Construct_UClass_ACArrow_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Capsule_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Capsule;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Projectile_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Projectile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LifeSpanAfterCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LifeSpanAfterCollision;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACArrow_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_U06_Battle,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACArrow_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACArrow_OnComponentHit, "OnComponentHit" }, // 1329344877
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACArrow_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Weapons/AddOns/CArrow.h" },
		{ "ModuleRelativePath", "Weapons/AddOns/CArrow.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACArrow_Statics::NewProp_Capsule_MetaData[] = {
		{ "Category", "CArrow" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapons/AddOns/CArrow.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACArrow_Statics::NewProp_Capsule = { "Capsule", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACArrow, Capsule), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACArrow_Statics::NewProp_Capsule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACArrow_Statics::NewProp_Capsule_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACArrow_Statics::NewProp_Projectile_MetaData[] = {
		{ "Category", "CArrow" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapons/AddOns/CArrow.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACArrow_Statics::NewProp_Projectile = { "Projectile", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACArrow, Projectile), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACArrow_Statics::NewProp_Projectile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACArrow_Statics::NewProp_Projectile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACArrow_Statics::NewProp_LifeSpanAfterCollision_MetaData[] = {
		{ "Category", "LifeSpan" },
		{ "ModuleRelativePath", "Weapons/AddOns/CArrow.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACArrow_Statics::NewProp_LifeSpanAfterCollision = { "LifeSpanAfterCollision", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACArrow, LifeSpanAfterCollision), METADATA_PARAMS(Z_Construct_UClass_ACArrow_Statics::NewProp_LifeSpanAfterCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACArrow_Statics::NewProp_LifeSpanAfterCollision_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACArrow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACArrow_Statics::NewProp_Capsule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACArrow_Statics::NewProp_Projectile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACArrow_Statics::NewProp_LifeSpanAfterCollision,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACArrow_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACArrow>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACArrow_Statics::ClassParams = {
		&ACArrow::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACArrow_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACArrow_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACArrow_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACArrow_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACArrow()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACArrow_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACArrow, 4288138651);
	template<> U06_BATTLE_API UClass* StaticClass<ACArrow>()
	{
		return ACArrow::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACArrow(Z_Construct_UClass_ACArrow, &ACArrow::StaticClass, TEXT("/Script/U06_Battle"), TEXT("ACArrow"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACArrow);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
