// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "U06_Battle/Components/CStateComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCStateComponent() {}
// Cross Module References
	U06_BATTLE_API UFunction* Z_Construct_UDelegateFunction_U06_Battle_StateTypeChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_U06_Battle();
	U06_BATTLE_API UEnum* Z_Construct_UEnum_U06_Battle_EStateType();
	U06_BATTLE_API UClass* Z_Construct_UClass_UCStateComponent_NoRegister();
	U06_BATTLE_API UClass* Z_Construct_UClass_UCStateComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_U06_Battle_StateTypeChanged__DelegateSignature_Statics
	{
		struct _Script_U06_Battle_eventStateTypeChanged_Parms
		{
			EStateType InPrevType;
			EStateType InNewType;
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_U06_Battle_StateTypeChanged__DelegateSignature_Statics::NewProp_InPrevType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_U06_Battle_StateTypeChanged__DelegateSignature_Statics::NewProp_InPrevType = { "InPrevType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_U06_Battle_eventStateTypeChanged_Parms, InPrevType), Z_Construct_UEnum_U06_Battle_EStateType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_U06_Battle_StateTypeChanged__DelegateSignature_Statics::NewProp_InNewType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_U06_Battle_StateTypeChanged__DelegateSignature_Statics::NewProp_InNewType = { "InNewType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_U06_Battle_eventStateTypeChanged_Parms, InNewType), Z_Construct_UEnum_U06_Battle_EStateType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_U06_Battle_StateTypeChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_U06_Battle_StateTypeChanged__DelegateSignature_Statics::NewProp_InPrevType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_U06_Battle_StateTypeChanged__DelegateSignature_Statics::NewProp_InPrevType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_U06_Battle_StateTypeChanged__DelegateSignature_Statics::NewProp_InNewType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_U06_Battle_StateTypeChanged__DelegateSignature_Statics::NewProp_InNewType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_U06_Battle_StateTypeChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/CStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_U06_Battle_StateTypeChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_U06_Battle, nullptr, "StateTypeChanged__DelegateSignature", nullptr, nullptr, sizeof(_Script_U06_Battle_eventStateTypeChanged_Parms), Z_Construct_UDelegateFunction_U06_Battle_StateTypeChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_U06_Battle_StateTypeChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_U06_Battle_StateTypeChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_U06_Battle_StateTypeChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_U06_Battle_StateTypeChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_U06_Battle_StateTypeChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EStateType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_U06_Battle_EStateType, Z_Construct_UPackage__Script_U06_Battle(), TEXT("EStateType"));
		}
		return Singleton;
	}
	template<> U06_BATTLE_API UEnum* StaticEnum<EStateType>()
	{
		return EStateType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EStateType(EStateType_StaticEnum, TEXT("/Script/U06_Battle"), TEXT("EStateType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_U06_Battle_EStateType_Hash() { return 858263862U; }
	UEnum* Z_Construct_UEnum_U06_Battle_EStateType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_U06_Battle();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EStateType"), 0, Get_Z_Construct_UEnum_U06_Battle_EStateType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EStateType::Idle", (int64)EStateType::Idle },
				{ "EStateType::BackStep", (int64)EStateType::BackStep },
				{ "EStateType::Roll", (int64)EStateType::Roll },
				{ "EStateType::Equip", (int64)EStateType::Equip },
				{ "EStateType::Hit", (int64)EStateType::Hit },
				{ "EStateType::Dead", (int64)EStateType::Dead },
				{ "EStateType::Action", (int64)EStateType::Action },
				{ "EStateType::Max", (int64)EStateType::Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Action.Name", "EStateType::Action" },
				{ "BackStep.Name", "EStateType::BackStep" },
				{ "Dead.Name", "EStateType::Dead" },
				{ "Equip.Name", "EStateType::Equip" },
				{ "Hit.Name", "EStateType::Hit" },
				{ "Idle.Name", "EStateType::Idle" },
				{ "Max.Name", "EStateType::Max" },
				{ "ModuleRelativePath", "Components/CStateComponent.h" },
				{ "Roll.Name", "EStateType::Roll" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_U06_Battle,
				nullptr,
				"EStateType",
				"EStateType",
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
	void UCStateComponent::StaticRegisterNativesUCStateComponent()
	{
	}
	UClass* Z_Construct_UClass_UCStateComponent_NoRegister()
	{
		return UCStateComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCStateComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCStateComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_U06_Battle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCStateComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/CStateComponent.h" },
		{ "ModuleRelativePath", "Components/CStateComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCStateComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCStateComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCStateComponent_Statics::ClassParams = {
		&UCStateComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCStateComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCStateComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCStateComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCStateComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCStateComponent, 936534086);
	template<> U06_BATTLE_API UClass* StaticClass<UCStateComponent>()
	{
		return UCStateComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCStateComponent(Z_Construct_UClass_UCStateComponent, &UCStateComponent::StaticClass, TEXT("/Script/U06_Battle"), TEXT("UCStateComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCStateComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
