// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "U06_Battle/Components/CWeaponComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCWeaponComponent() {}
// Cross Module References
	U06_BATTLE_API UFunction* Z_Construct_UDelegateFunction_U06_Battle_WeaponTypeChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_U06_Battle();
	U06_BATTLE_API UEnum* Z_Construct_UEnum_U06_Battle_EWeaponType();
	U06_BATTLE_API UClass* Z_Construct_UClass_UCWeaponComponent_NoRegister();
	U06_BATTLE_API UClass* Z_Construct_UClass_UCWeaponComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	U06_BATTLE_API UClass* Z_Construct_UClass_UCWeaponAsset_NoRegister();
	U06_BATTLE_API UClass* Z_Construct_UClass_UCWeaponData_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_U06_Battle_WeaponTypeChanged__DelegateSignature_Statics
	{
		struct _Script_U06_Battle_eventWeaponTypeChanged_Parms
		{
			EWeaponType InPrevType;
			EWeaponType InNewType;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InPrevType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InPrevType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InNewType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InNewType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_U06_Battle_WeaponTypeChanged__DelegateSignature_Statics::NewProp_InPrevType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_U06_Battle_WeaponTypeChanged__DelegateSignature_Statics::NewProp_InPrevType = { "InPrevType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_U06_Battle_eventWeaponTypeChanged_Parms, InPrevType), Z_Construct_UEnum_U06_Battle_EWeaponType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_U06_Battle_WeaponTypeChanged__DelegateSignature_Statics::NewProp_InNewType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_U06_Battle_WeaponTypeChanged__DelegateSignature_Statics::NewProp_InNewType = { "InNewType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_U06_Battle_eventWeaponTypeChanged_Parms, InNewType), Z_Construct_UEnum_U06_Battle_EWeaponType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_U06_Battle_WeaponTypeChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_U06_Battle_WeaponTypeChanged__DelegateSignature_Statics::NewProp_InPrevType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_U06_Battle_WeaponTypeChanged__DelegateSignature_Statics::NewProp_InPrevType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_U06_Battle_WeaponTypeChanged__DelegateSignature_Statics::NewProp_InNewType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_U06_Battle_WeaponTypeChanged__DelegateSignature_Statics::NewProp_InNewType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_U06_Battle_WeaponTypeChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/CWeaponComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_U06_Battle_WeaponTypeChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_U06_Battle, nullptr, "WeaponTypeChanged__DelegateSignature", nullptr, nullptr, sizeof(_Script_U06_Battle_eventWeaponTypeChanged_Parms), Z_Construct_UDelegateFunction_U06_Battle_WeaponTypeChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_U06_Battle_WeaponTypeChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_U06_Battle_WeaponTypeChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_U06_Battle_WeaponTypeChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_U06_Battle_WeaponTypeChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_U06_Battle_WeaponTypeChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EWeaponType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_U06_Battle_EWeaponType, Z_Construct_UPackage__Script_U06_Battle(), TEXT("EWeaponType"));
		}
		return Singleton;
	}
	template<> U06_BATTLE_API UEnum* StaticEnum<EWeaponType>()
	{
		return EWeaponType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EWeaponType(EWeaponType_StaticEnum, TEXT("/Script/U06_Battle"), TEXT("EWeaponType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_U06_Battle_EWeaponType_Hash() { return 72355186U; }
	UEnum* Z_Construct_UEnum_U06_Battle_EWeaponType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_U06_Battle();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EWeaponType"), 0, Get_Z_Construct_UEnum_U06_Battle_EWeaponType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EWeaponType::Fist", (int64)EWeaponType::Fist },
				{ "EWeaponType::Sword", (int64)EWeaponType::Sword },
				{ "EWeaponType::Hammer", (int64)EWeaponType::Hammer },
				{ "EWeaponType::Tornado", (int64)EWeaponType::Tornado },
				{ "EWeaponType::Warp", (int64)EWeaponType::Warp },
				{ "EWeaponType::Around", (int64)EWeaponType::Around },
				{ "EWeaponType::Bow", (int64)EWeaponType::Bow },
				{ "EWeaponType::Max", (int64)EWeaponType::Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Around.Comment", "// ????\n" },
				{ "Around.Name", "EWeaponType::Around" },
				{ "BlueprintType", "true" },
				{ "Bow.Comment", "// ????\n" },
				{ "Bow.Name", "EWeaponType::Bow" },
				{ "Comment", "// ????\n" },
				{ "Fist.Comment", "// ????\n" },
				{ "Fist.Name", "EWeaponType::Fist" },
				{ "Hammer.Comment", "// ????\n" },
				{ "Hammer.Name", "EWeaponType::Hammer" },
				{ "Max.Comment", "// ????\n" },
				{ "Max.Name", "EWeaponType::Max" },
				{ "ModuleRelativePath", "Components/CWeaponComponent.h" },
				{ "Sword.Comment", "// ????\n" },
				{ "Sword.Name", "EWeaponType::Sword" },
				{ "Tornado.Comment", "// ????\n" },
				{ "Tornado.Name", "EWeaponType::Tornado" },
				{ "Warp.Comment", "// ????\n" },
				{ "Warp.Name", "EWeaponType::Warp" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_U06_Battle,
				nullptr,
				"EWeaponType",
				"EWeaponType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(UCWeaponComponent::execSubAction_Released)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SubAction_Released();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCWeaponComponent::execSubAction_Pressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SubAction_Pressed();
		P_NATIVE_END;
	}
	void UCWeaponComponent::StaticRegisterNativesUCWeaponComponent()
	{
		UClass* Class = UCWeaponComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SubAction_Pressed", &UCWeaponComponent::execSubAction_Pressed },
			{ "SubAction_Released", &UCWeaponComponent::execSubAction_Released },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCWeaponComponent_SubAction_Pressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCWeaponComponent_SubAction_Pressed_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Bow?? AI?????? ?????\xcf\xb1????? BP Callable?? ????\n" },
		{ "ModuleRelativePath", "Components/CWeaponComponent.h" },
		{ "ToolTip", "Bow?? AI?????? ?????\xcf\xb1????? BP Callable?? ????" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCWeaponComponent_SubAction_Pressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCWeaponComponent, nullptr, "SubAction_Pressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCWeaponComponent_SubAction_Pressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCWeaponComponent_SubAction_Pressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCWeaponComponent_SubAction_Pressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCWeaponComponent_SubAction_Pressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCWeaponComponent_SubAction_Released_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCWeaponComponent_SubAction_Released_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/CWeaponComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCWeaponComponent_SubAction_Released_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCWeaponComponent, nullptr, "SubAction_Released", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCWeaponComponent_SubAction_Released_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCWeaponComponent_SubAction_Released_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCWeaponComponent_SubAction_Released()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCWeaponComponent_SubAction_Released_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCWeaponComponent_NoRegister()
	{
		return UCWeaponComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCWeaponComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataAssets_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DataAssets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Datas_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Datas;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCWeaponComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_U06_Battle,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCWeaponComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCWeaponComponent_SubAction_Pressed, "SubAction_Pressed" }, // 2219244514
		{ &Z_Construct_UFunction_UCWeaponComponent_SubAction_Released, "SubAction_Released" }, // 4054767384
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCWeaponComponent_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/CWeaponComponent.h" },
		{ "ModuleRelativePath", "Components/CWeaponComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCWeaponComponent_Statics::NewProp_DataAssets_MetaData[] = {
		{ "ArraySizeEnum", "/Script/U06_Battle.EWeaponType" },
		{ "Category", "DataAsset" },
		{ "ModuleRelativePath", "Components/CWeaponComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCWeaponComponent_Statics::NewProp_DataAssets = { "DataAssets", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(DataAssets, UCWeaponComponent), STRUCT_OFFSET(UCWeaponComponent, DataAssets), Z_Construct_UClass_UCWeaponAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCWeaponComponent_Statics::NewProp_DataAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCWeaponComponent_Statics::NewProp_DataAssets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCWeaponComponent_Statics::NewProp_Datas_MetaData[] = {
		{ "ArraySizeEnum", "/Script/U06_Battle.EWeaponType" },
		{ "Comment", "// ?????\xcd\xbf??\xc2\xbf??? ?????? \xc5\xac?????? ???? -->PlugIn \n" },
		{ "ModuleRelativePath", "Components/CWeaponComponent.h" },
		{ "ToolTip", "?????\xcd\xbf??\xc2\xbf??? ?????? \xc5\xac?????? ???? -->PlugIn" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCWeaponComponent_Statics::NewProp_Datas = { "Datas", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(Datas, UCWeaponComponent), STRUCT_OFFSET(UCWeaponComponent, Datas), Z_Construct_UClass_UCWeaponData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCWeaponComponent_Statics::NewProp_Datas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCWeaponComponent_Statics::NewProp_Datas_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCWeaponComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCWeaponComponent_Statics::NewProp_DataAssets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCWeaponComponent_Statics::NewProp_Datas,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCWeaponComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCWeaponComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCWeaponComponent_Statics::ClassParams = {
		&UCWeaponComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCWeaponComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCWeaponComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCWeaponComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCWeaponComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCWeaponComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCWeaponComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCWeaponComponent, 3624848484);
	template<> U06_BATTLE_API UClass* StaticClass<UCWeaponComponent>()
	{
		return UCWeaponComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCWeaponComponent(Z_Construct_UClass_UCWeaponComponent, &UCWeaponComponent::StaticClass, TEXT("/Script/U06_Battle"), TEXT("UCWeaponComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCWeaponComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
