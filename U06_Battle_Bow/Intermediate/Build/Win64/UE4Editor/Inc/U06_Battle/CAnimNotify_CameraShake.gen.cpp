// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "U06_Battle/Notifies/CAnimNotify_CameraShake.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCAnimNotify_CameraShake() {}
// Cross Module References
	U06_BATTLE_API UClass* Z_Construct_UClass_UCAnimNotify_CameraShake_NoRegister();
	U06_BATTLE_API UClass* Z_Construct_UClass_UCAnimNotify_CameraShake();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_U06_Battle();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UMatineeCameraShake_NoRegister();
// End Cross Module References
	void UCAnimNotify_CameraShake::StaticRegisterNativesUCAnimNotify_CameraShake()
	{
	}
	UClass* Z_Construct_UClass_UCAnimNotify_CameraShake_NoRegister()
	{
		return UCAnimNotify_CameraShake::StaticClass();
	}
	struct Z_Construct_UClass_UCAnimNotify_CameraShake_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraShakeClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CameraShakeClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCAnimNotify_CameraShake_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_U06_Battle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCAnimNotify_CameraShake_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Notifies/CAnimNotify_CameraShake.h" },
		{ "ModuleRelativePath", "Notifies/CAnimNotify_CameraShake.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCAnimNotify_CameraShake_Statics::NewProp_CameraShakeClass_MetaData[] = {
		{ "Category", "CameraShake" },
		{ "Comment", "// Animation\xc3\xa2???? ?????? ??????\n" },
		{ "ModuleRelativePath", "Notifies/CAnimNotify_CameraShake.h" },
		{ "ToolTip", "Animation\xc3\xa2???? ?????? ??????" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCAnimNotify_CameraShake_Statics::NewProp_CameraShakeClass = { "CameraShakeClass", nullptr, (EPropertyFlags)0x0044000000000011, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCAnimNotify_CameraShake, CameraShakeClass), Z_Construct_UClass_UMatineeCameraShake_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCAnimNotify_CameraShake_Statics::NewProp_CameraShakeClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCAnimNotify_CameraShake_Statics::NewProp_CameraShakeClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCAnimNotify_CameraShake_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCAnimNotify_CameraShake_Statics::NewProp_CameraShakeClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCAnimNotify_CameraShake_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCAnimNotify_CameraShake>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCAnimNotify_CameraShake_Statics::ClassParams = {
		&UCAnimNotify_CameraShake::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCAnimNotify_CameraShake_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCAnimNotify_CameraShake_Statics::PropPointers),
		0,
		0x001120A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCAnimNotify_CameraShake_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCAnimNotify_CameraShake_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCAnimNotify_CameraShake()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCAnimNotify_CameraShake_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCAnimNotify_CameraShake, 2130492494);
	template<> U06_BATTLE_API UClass* StaticClass<UCAnimNotify_CameraShake>()
	{
		return UCAnimNotify_CameraShake::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCAnimNotify_CameraShake(Z_Construct_UClass_UCAnimNotify_CameraShake, &UCAnimNotify_CameraShake::StaticClass, TEXT("/Script/U06_Battle"), TEXT("UCAnimNotify_CameraShake"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCAnimNotify_CameraShake);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
