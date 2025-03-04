// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "U06_Battle/Components/CMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCMovementComponent() {}
// Cross Module References
	U06_BATTLE_API UEnum* Z_Construct_UEnum_U06_Battle_ESpeedType();
	UPackage* Z_Construct_UPackage__Script_U06_Battle();
	U06_BATTLE_API UClass* Z_Construct_UClass_UCMovementComponent_NoRegister();
	U06_BATTLE_API UClass* Z_Construct_UClass_UCMovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
// End Cross Module References
	static UEnum* ESpeedType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_U06_Battle_ESpeedType, Z_Construct_UPackage__Script_U06_Battle(), TEXT("ESpeedType"));
		}
		return Singleton;
	}
	template<> U06_BATTLE_API UEnum* StaticEnum<ESpeedType>()
	{
		return ESpeedType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESpeedType(ESpeedType_StaticEnum, TEXT("/Script/U06_Battle"), TEXT("ESpeedType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_U06_Battle_ESpeedType_Hash() { return 686408276U; }
	UEnum* Z_Construct_UEnum_U06_Battle_ESpeedType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_U06_Battle();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESpeedType"), 0, Get_Z_Construct_UEnum_U06_Battle_ESpeedType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESpeedType::Walk", (int64)ESpeedType::Walk },
				{ "ESpeedType::Run", (int64)ESpeedType::Run },
				{ "ESpeedType::Sprint", (int64)ESpeedType::Sprint },
				{ "ESpeedType::Max", (int64)ESpeedType::Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Max.Name", "ESpeedType::Max" },
				{ "ModuleRelativePath", "Components/CMovementComponent.h" },
				{ "Run.Name", "ESpeedType::Run" },
				{ "Sprint.Name", "ESpeedType::Sprint" },
				{ "Walk.Name", "ESpeedType::Walk" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_U06_Battle,
				nullptr,
				"ESpeedType",
				"ESpeedType",
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
	void UCMovementComponent::StaticRegisterNativesUCMovementComponent()
	{
	}
	UClass* Z_Construct_UClass_UCMovementComponent_NoRegister()
	{
		return UCMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_U06_Battle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "// BP???? ?\xdf\xb0????? ???\xcf\xb0? \xc3\xb3??\n//UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )\n" },
		{ "IncludePath", "Components/CMovementComponent.h" },
		{ "ModuleRelativePath", "Components/CMovementComponent.h" },
		{ "ToolTip", "BP???? ?\xdf\xb0????? ???\xcf\xb0? \xc3\xb3??\nUCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCMovementComponent_Statics::NewProp_Speed_MetaData[] = {
		{ "ArraySizeEnum", "/Script/U06_Battle.ESpeedType" },
		{ "Category", "Speed" },
		{ "Comment", "// ActorComponent?? ?????????\xcd\xbf??? ??\xc4\xa5?? ?\xd6\xb0?\n" },
		{ "ModuleRelativePath", "Components/CMovementComponent.h" },
		{ "ToolTip", "ActorComponent?? ?????????\xcd\xbf??? ??\xc4\xa5?? ?\xd6\xb0?" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCMovementComponent_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(Speed, UCMovementComponent), STRUCT_OFFSET(UCMovementComponent, Speed), METADATA_PARAMS(Z_Construct_UClass_UCMovementComponent_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCMovementComponent_Statics::NewProp_Speed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCMovementComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCMovementComponent_Statics::NewProp_Speed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCMovementComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCMovementComponent_Statics::ClassParams = {
		&UCMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCMovementComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCMovementComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCMovementComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCMovementComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCMovementComponent, 3892670294);
	template<> U06_BATTLE_API UClass* StaticClass<UCMovementComponent>()
	{
		return UCMovementComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCMovementComponent(Z_Construct_UClass_UCMovementComponent, &UCMovementComponent::StaticClass, TEXT("/Script/U06_Battle"), TEXT("UCMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
