// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "U06_Battle/Weapons/CWeaponAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCWeaponAsset() {}
// Cross Module References
	U06_BATTLE_API UClass* Z_Construct_UClass_UCWeaponAsset_NoRegister();
	U06_BATTLE_API UClass* Z_Construct_UClass_UCWeaponAsset();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_U06_Battle();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	U06_BATTLE_API UClass* Z_Construct_UClass_ACAttachment_NoRegister();
	U06_BATTLE_API UClass* Z_Construct_UClass_UCEquipment_NoRegister();
	U06_BATTLE_API UScriptStruct* Z_Construct_UScriptStruct_FEquipmentData();
	U06_BATTLE_API UClass* Z_Construct_UClass_UCDoAction_NoRegister();
	U06_BATTLE_API UClass* Z_Construct_UClass_UCSubAction_NoRegister();
	U06_BATTLE_API UScriptStruct* Z_Construct_UScriptStruct_FDoActionData();
	U06_BATTLE_API UScriptStruct* Z_Construct_UScriptStruct_FHitData();
// End Cross Module References
	void UCWeaponAsset::StaticRegisterNativesUCWeaponAsset()
	{
	}
	UClass* Z_Construct_UClass_UCWeaponAsset_NoRegister()
	{
		return UCWeaponAsset::StaticClass();
	}
	struct Z_Construct_UClass_UCWeaponAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachmentClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AttachmentClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquipmentClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_EquipmentClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquipmentData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EquipmentData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoActionClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DoActionClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubActionClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SubActionClass;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DoActionDatas_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoActionDatas_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DoActionDatas;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitDatas_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitDatas_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HitDatas;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attachment_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Attachment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Equipment_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Equipment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DoAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SubAction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCWeaponAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_U06_Battle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCWeaponAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *  UObject???? ???\xd3\xb9??????? ?????????\xcf\xb8? ???????\xdd\xb7??\xc7\xbf? ?\xda\xb5????? ????\n */" },
		{ "IncludePath", "Weapons/CWeaponAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Weapons/CWeaponAsset.h" },
		{ "ToolTip", "UObject???? ???\xd3\xb9??????? ?????????\xcf\xb8? ???????\xdd\xb7??\xc7\xbf? ?\xda\xb5????? ????" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_AttachmentClass_MetaData[] = {
		{ "Category", "CWeaponAsset" },
		{ "Comment", "// Assign?? ??????\n// BP_CAttachment_Sword,........ , ?????\xcd\xbf??\xc2\xbf??? ?\xca\xb5????\xd1\xb0?, Define\n" },
		{ "ModuleRelativePath", "Weapons/CWeaponAsset.h" },
		{ "ToolTip", "Assign?? ??????\nBP_CAttachment_Sword,........ , ?????\xcd\xbf??\xc2\xbf??? ?\xca\xb5????\xd1\xb0?, Define" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_AttachmentClass = { "AttachmentClass", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCWeaponAsset, AttachmentClass), Z_Construct_UClass_ACAttachment_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_AttachmentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_AttachmentClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_EquipmentClass_MetaData[] = {
		{ "Category", "CWeaponAsset" },
		{ "ModuleRelativePath", "Weapons/CWeaponAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_EquipmentClass = { "EquipmentClass", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCWeaponAsset, EquipmentClass), Z_Construct_UClass_UCEquipment_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_EquipmentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_EquipmentClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_EquipmentData_MetaData[] = {
		{ "Category", "CWeaponAsset" },
		{ "ModuleRelativePath", "Weapons/CWeaponAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_EquipmentData = { "EquipmentData", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCWeaponAsset, EquipmentData), Z_Construct_UScriptStruct_FEquipmentData, METADATA_PARAMS(Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_EquipmentData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_EquipmentData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_DoActionClass_MetaData[] = {
		{ "Category", "CWeaponAsset" },
		{ "ModuleRelativePath", "Weapons/CWeaponAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_DoActionClass = { "DoActionClass", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCWeaponAsset, DoActionClass), Z_Construct_UClass_UCDoAction_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_DoActionClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_DoActionClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_SubActionClass_MetaData[] = {
		{ "Category", "CWeaponAsset" },
		{ "ModuleRelativePath", "Weapons/CWeaponAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_SubActionClass = { "SubActionClass", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCWeaponAsset, SubActionClass), Z_Construct_UClass_UCSubAction_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_SubActionClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_SubActionClass_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_DoActionDatas_Inner = { "DoActionDatas", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDoActionData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_DoActionDatas_MetaData[] = {
		{ "Category", "CWeaponAsset" },
		{ "ModuleRelativePath", "Weapons/CWeaponAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_DoActionDatas = { "DoActionDatas", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCWeaponAsset, DoActionDatas), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_DoActionDatas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_DoActionDatas_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_HitDatas_Inner = { "HitDatas", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHitData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_HitDatas_MetaData[] = {
		{ "Category", "CWeaponAsset" },
		{ "ModuleRelativePath", "Weapons/CWeaponAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_HitDatas = { "HitDatas", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCWeaponAsset, HitDatas), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_HitDatas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_HitDatas_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_Attachment_MetaData[] = {
		{ "Comment", "// UObject???? ???\xd3\xb9??????? ?????? ???\xcf\xb8? ???????\xdd\xb7??\xc7\xbf? ???\xc7\xb7? ????\n" },
		{ "ModuleRelativePath", "Weapons/CWeaponAsset.h" },
		{ "ToolTip", "UObject???? ???\xd3\xb9??????? ?????? ???\xcf\xb8? ???????\xdd\xb7??\xc7\xbf? ???\xc7\xb7? ????" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_Attachment = { "Attachment", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCWeaponAsset, Attachment), Z_Construct_UClass_ACAttachment_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_Attachment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_Attachment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_Equipment_MetaData[] = {
		{ "ModuleRelativePath", "Weapons/CWeaponAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_Equipment = { "Equipment", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCWeaponAsset, Equipment), Z_Construct_UClass_UCEquipment_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_Equipment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_Equipment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_DoAction_MetaData[] = {
		{ "ModuleRelativePath", "Weapons/CWeaponAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_DoAction = { "DoAction", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCWeaponAsset, DoAction), Z_Construct_UClass_UCDoAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_DoAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_DoAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_SubAction_MetaData[] = {
		{ "ModuleRelativePath", "Weapons/CWeaponAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_SubAction = { "SubAction", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCWeaponAsset, SubAction), Z_Construct_UClass_UCSubAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_SubAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_SubAction_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCWeaponAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_AttachmentClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_EquipmentClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_EquipmentData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_DoActionClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_SubActionClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_DoActionDatas_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_DoActionDatas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_HitDatas_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_HitDatas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_Attachment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_Equipment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_DoAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_SubAction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCWeaponAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCWeaponAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCWeaponAsset_Statics::ClassParams = {
		&UCWeaponAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCWeaponAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCWeaponAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCWeaponAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCWeaponAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCWeaponAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCWeaponAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCWeaponAsset, 2418156573);
	template<> U06_BATTLE_API UClass* StaticClass<UCWeaponAsset>()
	{
		return UCWeaponAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCWeaponAsset(Z_Construct_UClass_UCWeaponAsset, &UCWeaponAsset::StaticClass, TEXT("/Script/U06_Battle"), TEXT("UCWeaponAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCWeaponAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
