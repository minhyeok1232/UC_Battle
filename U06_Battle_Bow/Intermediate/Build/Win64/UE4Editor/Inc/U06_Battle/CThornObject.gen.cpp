// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "U06_Battle/Weapons/AddOns/CThornObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCThornObject() {}
// Cross Module References
	U06_BATTLE_API UClass* Z_Construct_UClass_ACThornObject_NoRegister();
	U06_BATTLE_API UClass* Z_Construct_UClass_ACThornObject();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_U06_Battle();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	U06_BATTLE_API UScriptStruct* Z_Construct_UScriptStruct_FHitData();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_UFXSystemAsset_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraParticleCallbackHandler_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ACThornObject::execOnSystemFinished)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_PSyetem);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSystemFinished(Z_Param_PSyetem);
		P_NATIVE_END;
	}
	void ACThornObject::StaticRegisterNativesACThornObject()
	{
		UClass* Class = ACThornObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnSystemFinished", &ACThornObject::execOnSystemFinished },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACThornObject_OnSystemFinished_Statics
	{
		struct CThornObject_eventOnSystemFinished_Parms
		{
			UNiagaraComponent* PSyetem;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PSyetem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PSyetem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACThornObject_OnSystemFinished_Statics::NewProp_PSyetem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACThornObject_OnSystemFinished_Statics::NewProp_PSyetem = { "PSyetem", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CThornObject_eventOnSystemFinished_Parms, PSyetem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACThornObject_OnSystemFinished_Statics::NewProp_PSyetem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACThornObject_OnSystemFinished_Statics::NewProp_PSyetem_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACThornObject_OnSystemFinished_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACThornObject_OnSystemFinished_Statics::NewProp_PSyetem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACThornObject_OnSystemFinished_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// ???\xcc\xbe\xc6\xb0??? Effect?????? Noti???? ?\xd4\xbc??? ???\xce\xb5?\n" },
		{ "ModuleRelativePath", "Weapons/AddOns/CThornObject.h" },
		{ "ToolTip", "???\xcc\xbe\xc6\xb0??? Effect?????? Noti???? ?\xd4\xbc??? ???\xce\xb5?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACThornObject_OnSystemFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACThornObject, nullptr, "OnSystemFinished", nullptr, nullptr, sizeof(CThornObject_eventOnSystemFinished_Parms), Z_Construct_UFunction_ACThornObject_OnSystemFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACThornObject_OnSystemFinished_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACThornObject_OnSystemFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACThornObject_OnSystemFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACThornObject_OnSystemFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACThornObject_OnSystemFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACThornObject_NoRegister()
	{
		return ACThornObject::StaticClass();
	}
	struct Z_Construct_UClass_ACThornObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Root;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Niagara_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Niagara;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NiagaraMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NiagaraMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NiagaraMeshRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NiagaraMeshRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CollisionEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionEffectTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CollisionEffectTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACThornObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_U06_Battle,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACThornObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACThornObject_OnSystemFinished, "OnSystemFinished" }, // 1276461492
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACThornObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Weapons/AddOns/CThornObject.h" },
		{ "ModuleRelativePath", "Weapons/AddOns/CThornObject.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACThornObject_Statics::NewProp_Root_MetaData[] = {
		{ "Category", "CThornObject" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapons/AddOns/CThornObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACThornObject_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACThornObject, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACThornObject_Statics::NewProp_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACThornObject_Statics::NewProp_Root_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACThornObject_Statics::NewProp_MeshComp_MetaData[] = {
		{ "Category", "CThornObject" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapons/AddOns/CThornObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACThornObject_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACThornObject, MeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACThornObject_Statics::NewProp_MeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACThornObject_Statics::NewProp_MeshComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACThornObject_Statics::NewProp_Niagara_MetaData[] = {
		{ "Category", "CThornObject" },
		{ "Comment", "// UNiagaraSystem\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapons/AddOns/CThornObject.h" },
		{ "ToolTip", "UNiagaraSystem" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACThornObject_Statics::NewProp_Niagara = { "Niagara", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACThornObject, Niagara), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACThornObject_Statics::NewProp_Niagara_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACThornObject_Statics::NewProp_Niagara_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACThornObject_Statics::NewProp_HitData_MetaData[] = {
		{ "Category", "Hit" },
		{ "ModuleRelativePath", "Weapons/AddOns/CThornObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACThornObject_Statics::NewProp_HitData = { "HitData", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACThornObject, HitData), Z_Construct_UScriptStruct_FHitData, METADATA_PARAMS(Z_Construct_UClass_ACThornObject_Statics::NewProp_HitData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACThornObject_Statics::NewProp_HitData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACThornObject_Statics::NewProp_NiagaraMesh_MetaData[] = {
		{ "Category", "Niagara" },
		{ "ModuleRelativePath", "Weapons/AddOns/CThornObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACThornObject_Statics::NewProp_NiagaraMesh = { "NiagaraMesh", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACThornObject, NiagaraMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACThornObject_Statics::NewProp_NiagaraMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACThornObject_Statics::NewProp_NiagaraMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACThornObject_Statics::NewProp_NiagaraMeshRotation_MetaData[] = {
		{ "Category", "Niagara" },
		{ "Comment", "// ??????X,\n" },
		{ "ModuleRelativePath", "Weapons/AddOns/CThornObject.h" },
		{ "ToolTip", "??????X," },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACThornObject_Statics::NewProp_NiagaraMeshRotation = { "NiagaraMeshRotation", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACThornObject, NiagaraMeshRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_ACThornObject_Statics::NewProp_NiagaraMeshRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACThornObject_Statics::NewProp_NiagaraMeshRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACThornObject_Statics::NewProp_CollisionEffect_MetaData[] = {
		{ "Category", "Niagara" },
		{ "ModuleRelativePath", "Weapons/AddOns/CThornObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACThornObject_Statics::NewProp_CollisionEffect = { "CollisionEffect", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACThornObject, CollisionEffect), Z_Construct_UClass_UFXSystemAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACThornObject_Statics::NewProp_CollisionEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACThornObject_Statics::NewProp_CollisionEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACThornObject_Statics::NewProp_CollisionEffectTransform_MetaData[] = {
		{ "Category", "Niagara" },
		{ "ModuleRelativePath", "Weapons/AddOns/CThornObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACThornObject_Statics::NewProp_CollisionEffectTransform = { "CollisionEffectTransform", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACThornObject, CollisionEffectTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_ACThornObject_Statics::NewProp_CollisionEffectTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACThornObject_Statics::NewProp_CollisionEffectTransform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACThornObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACThornObject_Statics::NewProp_Root,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACThornObject_Statics::NewProp_MeshComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACThornObject_Statics::NewProp_Niagara,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACThornObject_Statics::NewProp_HitData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACThornObject_Statics::NewProp_NiagaraMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACThornObject_Statics::NewProp_NiagaraMeshRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACThornObject_Statics::NewProp_CollisionEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACThornObject_Statics::NewProp_CollisionEffectTransform,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ACThornObject_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UNiagaraParticleCallbackHandler_NoRegister, (int32)VTABLE_OFFSET(ACThornObject, INiagaraParticleCallbackHandler), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACThornObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACThornObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACThornObject_Statics::ClassParams = {
		&ACThornObject::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACThornObject_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACThornObject_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACThornObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACThornObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACThornObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACThornObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACThornObject, 1918394459);
	template<> U06_BATTLE_API UClass* StaticClass<ACThornObject>()
	{
		return ACThornObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACThornObject(Z_Construct_UClass_ACThornObject, &ACThornObject::StaticClass, TEXT("/Script/U06_Battle"), TEXT("ACThornObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACThornObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
