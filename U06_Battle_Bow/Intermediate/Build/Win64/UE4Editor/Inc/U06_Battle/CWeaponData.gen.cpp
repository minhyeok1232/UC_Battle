// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "U06_Battle/Weapons/CWeaponData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCWeaponData() {}
// Cross Module References
	U06_BATTLE_API UClass* Z_Construct_UClass_UCWeaponData_NoRegister();
	U06_BATTLE_API UClass* Z_Construct_UClass_UCWeaponData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_U06_Battle();
	U06_BATTLE_API UClass* Z_Construct_UClass_ACAttachment_NoRegister();
	U06_BATTLE_API UClass* Z_Construct_UClass_UCEquipment_NoRegister();
// End Cross Module References
	void UCWeaponData::StaticRegisterNativesUCWeaponData()
	{
	}
	UClass* Z_Construct_UClass_UCWeaponData_NoRegister()
	{
		return UCWeaponData::StaticClass();
	}
	struct Z_Construct_UClass_UCWeaponData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attachment_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Attachment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Equipment_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Equipment;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCWeaponData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_U06_Battle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCWeaponData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *  WeaponAsset?? BeginPlay() Spawn?? ?????\xcd\xb8? ?????\xcf\xb4? Class\n */" },
		{ "IncludePath", "Weapons/CWeaponData.h" },
		{ "ModuleRelativePath", "Weapons/CWeaponData.h" },
		{ "ToolTip", "WeaponAsset?? BeginPlay() Spawn?? ?????\xcd\xb8? ?????\xcf\xb4? Class" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCWeaponData_Statics::NewProp_Attachment_MetaData[] = {
		{ "Comment", "// Object?\xcc\xb9\xc7\xb7? ????\xc8\xad\n" },
		{ "ModuleRelativePath", "Weapons/CWeaponData.h" },
		{ "ToolTip", "Object?\xcc\xb9\xc7\xb7? ????\xc8\xad" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCWeaponData_Statics::NewProp_Attachment = { "Attachment", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCWeaponData, Attachment), Z_Construct_UClass_ACAttachment_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCWeaponData_Statics::NewProp_Attachment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCWeaponData_Statics::NewProp_Attachment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCWeaponData_Statics::NewProp_Equipment_MetaData[] = {
		{ "ModuleRelativePath", "Weapons/CWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCWeaponData_Statics::NewProp_Equipment = { "Equipment", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCWeaponData, Equipment), Z_Construct_UClass_UCEquipment_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCWeaponData_Statics::NewProp_Equipment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCWeaponData_Statics::NewProp_Equipment_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCWeaponData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCWeaponData_Statics::NewProp_Attachment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCWeaponData_Statics::NewProp_Equipment,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCWeaponData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCWeaponData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCWeaponData_Statics::ClassParams = {
		&UCWeaponData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCWeaponData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCWeaponData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCWeaponData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCWeaponData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCWeaponData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCWeaponData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCWeaponData, 4196256132);
	template<> U06_BATTLE_API UClass* StaticClass<UCWeaponData>()
	{
		return UCWeaponData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCWeaponData(Z_Construct_UClass_UCWeaponData, &UCWeaponData::StaticClass, TEXT("/Script/U06_Battle"), TEXT("UCWeaponData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCWeaponData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
