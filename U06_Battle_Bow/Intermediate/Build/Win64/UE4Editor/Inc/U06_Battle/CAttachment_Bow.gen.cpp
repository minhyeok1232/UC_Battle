// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "U06_Battle/Weapons/Attachments/CAttachment_Bow.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCAttachment_Bow() {}
// Cross Module References
	U06_BATTLE_API UClass* Z_Construct_UClass_ACAttachment_Bow_NoRegister();
	U06_BATTLE_API UClass* Z_Construct_UClass_ACAttachment_Bow();
	U06_BATTLE_API UClass* Z_Construct_UClass_ACAttachment();
	UPackage* Z_Construct_UPackage__Script_U06_Battle();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPoseableMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
	void ACAttachment_Bow::StaticRegisterNativesACAttachment_Bow()
	{
	}
	UClass* Z_Construct_UClass_ACAttachment_Bow_NoRegister()
	{
		return ACAttachment_Bow::StaticClass();
	}
	struct Z_Construct_UClass_ACAttachment_Bow_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PoseableMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PoseableMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViewPitchRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ViewPitchRange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACAttachment_Bow_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACAttachment,
		(UObject* (*)())Z_Construct_UPackage__Script_U06_Battle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACAttachment_Bow_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Weapons/Attachments/CAttachment_Bow.h" },
		{ "ModuleRelativePath", "Weapons/Attachments/CAttachment_Bow.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACAttachment_Bow_Statics::NewProp_SkeletalMesh_MetaData[] = {
		{ "Category", "CAttachment_Bow" },
		{ "Comment", "// Component\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapons/Attachments/CAttachment_Bow.h" },
		{ "ToolTip", "Component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACAttachment_Bow_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACAttachment_Bow, SkeletalMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACAttachment_Bow_Statics::NewProp_SkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACAttachment_Bow_Statics::NewProp_SkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACAttachment_Bow_Statics::NewProp_PoseableMesh_MetaData[] = {
		{ "Category", "CAttachment_Bow" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapons/Attachments/CAttachment_Bow.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACAttachment_Bow_Statics::NewProp_PoseableMesh = { "PoseableMesh", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACAttachment_Bow, PoseableMesh), Z_Construct_UClass_UPoseableMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACAttachment_Bow_Statics::NewProp_PoseableMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACAttachment_Bow_Statics::NewProp_PoseableMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACAttachment_Bow_Statics::NewProp_ViewPitchRange_MetaData[] = {
		{ "Category", "View" },
		{ "Comment", "// View Min,Max\n" },
		{ "ModuleRelativePath", "Weapons/Attachments/CAttachment_Bow.h" },
		{ "ToolTip", "View Min,Max" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACAttachment_Bow_Statics::NewProp_ViewPitchRange = { "ViewPitchRange", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACAttachment_Bow, ViewPitchRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_ACAttachment_Bow_Statics::NewProp_ViewPitchRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACAttachment_Bow_Statics::NewProp_ViewPitchRange_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACAttachment_Bow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACAttachment_Bow_Statics::NewProp_SkeletalMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACAttachment_Bow_Statics::NewProp_PoseableMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACAttachment_Bow_Statics::NewProp_ViewPitchRange,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACAttachment_Bow_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACAttachment_Bow>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACAttachment_Bow_Statics::ClassParams = {
		&ACAttachment_Bow::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACAttachment_Bow_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACAttachment_Bow_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACAttachment_Bow_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACAttachment_Bow_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACAttachment_Bow()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACAttachment_Bow_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACAttachment_Bow, 505878595);
	template<> U06_BATTLE_API UClass* StaticClass<ACAttachment_Bow>()
	{
		return ACAttachment_Bow::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACAttachment_Bow(Z_Construct_UClass_ACAttachment_Bow, &ACAttachment_Bow::StaticClass, TEXT("/Script/U06_Battle"), TEXT("ACAttachment_Bow"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACAttachment_Bow);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
