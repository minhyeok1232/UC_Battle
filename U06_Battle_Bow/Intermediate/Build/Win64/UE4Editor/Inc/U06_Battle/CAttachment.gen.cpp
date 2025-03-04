// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "U06_Battle/Weapons/CAttachment.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCAttachment() {}
// Cross Module References
	U06_BATTLE_API UFunction* Z_Construct_UDelegateFunction_U06_Battle_AttachmentEndOverlap__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_U06_Battle();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	U06_BATTLE_API UFunction* Z_Construct_UDelegateFunction_U06_Battle_AttachmentBeginOverlap__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	U06_BATTLE_API UFunction* Z_Construct_UDelegateFunction_U06_Battle_AttachmentEndCollision__DelegateSignature();
	U06_BATTLE_API UFunction* Z_Construct_UDelegateFunction_U06_Battle_AttachmentBeginCollision__DelegateSignature();
	U06_BATTLE_API UClass* Z_Construct_UClass_ACAttachment_NoRegister();
	U06_BATTLE_API UClass* Z_Construct_UClass_ACAttachment();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UShapeComponent_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_U06_Battle_AttachmentEndOverlap__DelegateSignature_Statics
	{
		struct _Script_U06_Battle_eventAttachmentEndOverlap_Parms
		{
			ACharacter* InAttacker;
			ACharacter* InOther;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InAttacker;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InOther;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_U06_Battle_AttachmentEndOverlap__DelegateSignature_Statics::NewProp_InAttacker = { "InAttacker", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_U06_Battle_eventAttachmentEndOverlap_Parms, InAttacker), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_U06_Battle_AttachmentEndOverlap__DelegateSignature_Statics::NewProp_InOther = { "InOther", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_U06_Battle_eventAttachmentEndOverlap_Parms, InOther), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_U06_Battle_AttachmentEndOverlap__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_U06_Battle_AttachmentEndOverlap__DelegateSignature_Statics::NewProp_InAttacker,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_U06_Battle_AttachmentEndOverlap__DelegateSignature_Statics::NewProp_InOther,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_U06_Battle_AttachmentEndOverlap__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapons/CAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_U06_Battle_AttachmentEndOverlap__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_U06_Battle, nullptr, "AttachmentEndOverlap__DelegateSignature", nullptr, nullptr, sizeof(_Script_U06_Battle_eventAttachmentEndOverlap_Parms), Z_Construct_UDelegateFunction_U06_Battle_AttachmentEndOverlap__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_U06_Battle_AttachmentEndOverlap__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_U06_Battle_AttachmentEndOverlap__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_U06_Battle_AttachmentEndOverlap__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_U06_Battle_AttachmentEndOverlap__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_U06_Battle_AttachmentEndOverlap__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_U06_Battle_AttachmentBeginOverlap__DelegateSignature_Statics
	{
		struct _Script_U06_Battle_eventAttachmentBeginOverlap_Parms
		{
			ACharacter* InAttacker;
			AActor* InAttackCauser;
			ACharacter* InOther;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InAttacker;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InAttackCauser;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InOther;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_U06_Battle_AttachmentBeginOverlap__DelegateSignature_Statics::NewProp_InAttacker = { "InAttacker", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_U06_Battle_eventAttachmentBeginOverlap_Parms, InAttacker), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_U06_Battle_AttachmentBeginOverlap__DelegateSignature_Statics::NewProp_InAttackCauser = { "InAttackCauser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_U06_Battle_eventAttachmentBeginOverlap_Parms, InAttackCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_U06_Battle_AttachmentBeginOverlap__DelegateSignature_Statics::NewProp_InOther = { "InOther", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_U06_Battle_eventAttachmentBeginOverlap_Parms, InOther), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_U06_Battle_AttachmentBeginOverlap__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_U06_Battle_AttachmentBeginOverlap__DelegateSignature_Statics::NewProp_InAttacker,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_U06_Battle_AttachmentBeginOverlap__DelegateSignature_Statics::NewProp_InAttackCauser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_U06_Battle_AttachmentBeginOverlap__DelegateSignature_Statics::NewProp_InOther,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_U06_Battle_AttachmentBeginOverlap__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Hit???? ??????????\n" },
		{ "ModuleRelativePath", "Weapons/CAttachment.h" },
		{ "ToolTip", "Hit???? ??????????" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_U06_Battle_AttachmentBeginOverlap__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_U06_Battle, nullptr, "AttachmentBeginOverlap__DelegateSignature", nullptr, nullptr, sizeof(_Script_U06_Battle_eventAttachmentBeginOverlap_Parms), Z_Construct_UDelegateFunction_U06_Battle_AttachmentBeginOverlap__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_U06_Battle_AttachmentBeginOverlap__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_U06_Battle_AttachmentBeginOverlap__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_U06_Battle_AttachmentBeginOverlap__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_U06_Battle_AttachmentBeginOverlap__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_U06_Battle_AttachmentBeginOverlap__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_U06_Battle_AttachmentEndCollision__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_U06_Battle_AttachmentEndCollision__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapons/CAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_U06_Battle_AttachmentEndCollision__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_U06_Battle, nullptr, "AttachmentEndCollision__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_U06_Battle_AttachmentEndCollision__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_U06_Battle_AttachmentEndCollision__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_U06_Battle_AttachmentEndCollision__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_U06_Battle_AttachmentEndCollision__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_U06_Battle_AttachmentBeginCollision__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_U06_Battle_AttachmentBeginCollision__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Collision???? ??????????  : DoAction --> Attachemt\n" },
		{ "ModuleRelativePath", "Weapons/CAttachment.h" },
		{ "ToolTip", "Collision???? ??????????  : DoAction --> Attachemt" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_U06_Battle_AttachmentBeginCollision__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_U06_Battle, nullptr, "AttachmentBeginCollision__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_U06_Battle_AttachmentBeginCollision__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_U06_Battle_AttachmentBeginCollision__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_U06_Battle_AttachmentBeginCollision__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_U06_Battle_AttachmentBeginCollision__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(ACAttachment::execAttachToCollision)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InSocketName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AttachToCollision(Z_Param_InSocketName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACAttachment::execAttachTo)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InSocketName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AttachTo(Z_Param_InSocketName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACAttachment::execOnComponentEndOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnComponentEndOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACAttachment::execOnComponentBeginOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnComponentBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACAttachment::execOnUnEquip)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUnEquip_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACAttachment::execOnEndEquip)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEndEquip_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACAttachment::execOnBeginEquip)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBeginEquip_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_ACAttachment_OnBeginEquip = FName(TEXT("OnBeginEquip"));
	void ACAttachment::OnBeginEquip()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACAttachment_OnBeginEquip),NULL);
	}
	static FName NAME_ACAttachment_OnEndEquip = FName(TEXT("OnEndEquip"));
	void ACAttachment::OnEndEquip()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACAttachment_OnEndEquip),NULL);
	}
	static FName NAME_ACAttachment_OnUnEquip = FName(TEXT("OnUnEquip"));
	void ACAttachment::OnUnEquip()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACAttachment_OnUnEquip),NULL);
	}
	void ACAttachment::StaticRegisterNativesACAttachment()
	{
		UClass* Class = ACAttachment::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AttachTo", &ACAttachment::execAttachTo },
			{ "AttachToCollision", &ACAttachment::execAttachToCollision },
			{ "OnBeginEquip", &ACAttachment::execOnBeginEquip },
			{ "OnComponentBeginOverlap", &ACAttachment::execOnComponentBeginOverlap },
			{ "OnComponentEndOverlap", &ACAttachment::execOnComponentEndOverlap },
			{ "OnEndEquip", &ACAttachment::execOnEndEquip },
			{ "OnUnEquip", &ACAttachment::execOnUnEquip },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACAttachment_AttachTo_Statics
	{
		struct CAttachment_eventAttachTo_Parms
		{
			FName InSocketName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InSocketName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ACAttachment_AttachTo_Statics::NewProp_InSocketName = { "InSocketName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CAttachment_eventAttachTo_Parms, InSocketName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACAttachment_AttachTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACAttachment_AttachTo_Statics::NewProp_InSocketName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACAttachment_AttachTo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attach" },
		{ "Comment", "// Sword,Hammer...\n" },
		{ "ModuleRelativePath", "Weapons/CAttachment.h" },
		{ "ToolTip", "Sword,Hammer..." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACAttachment_AttachTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACAttachment, nullptr, "AttachTo", nullptr, nullptr, sizeof(CAttachment_eventAttachTo_Parms), Z_Construct_UFunction_ACAttachment_AttachTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACAttachment_AttachTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACAttachment_AttachTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACAttachment_AttachTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACAttachment_AttachTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACAttachment_AttachTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACAttachment_AttachToCollision_Statics
	{
		struct CAttachment_eventAttachToCollision_Parms
		{
			FName InSocketName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InSocketName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ACAttachment_AttachToCollision_Statics::NewProp_InSocketName = { "InSocketName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CAttachment_eventAttachToCollision_Parms, InSocketName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACAttachment_AttachToCollision_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACAttachment_AttachToCollision_Statics::NewProp_InSocketName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACAttachment_AttachToCollision_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attach" },
		{ "Comment", "// Sword,Hammer...\n" },
		{ "ModuleRelativePath", "Weapons/CAttachment.h" },
		{ "ToolTip", "Sword,Hammer..." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACAttachment_AttachToCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACAttachment, nullptr, "AttachToCollision", nullptr, nullptr, sizeof(CAttachment_eventAttachToCollision_Parms), Z_Construct_UFunction_ACAttachment_AttachToCollision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACAttachment_AttachToCollision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACAttachment_AttachToCollision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACAttachment_AttachToCollision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACAttachment_AttachToCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACAttachment_AttachToCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACAttachment_OnBeginEquip_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACAttachment_OnBeginEquip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapons/CAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACAttachment_OnBeginEquip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACAttachment, nullptr, "OnBeginEquip", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACAttachment_OnBeginEquip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACAttachment_OnBeginEquip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACAttachment_OnBeginEquip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACAttachment_OnBeginEquip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACAttachment_OnComponentBeginOverlap_Statics
	{
		struct CAttachment_eventOnComponentBeginOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACAttachment_OnComponentBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACAttachment_OnComponentBeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CAttachment_eventOnComponentBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACAttachment_OnComponentBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACAttachment_OnComponentBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACAttachment_OnComponentBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CAttachment_eventOnComponentBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACAttachment_OnComponentBeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACAttachment_OnComponentBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CAttachment_eventOnComponentBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACAttachment_OnComponentBeginOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACAttachment_OnComponentBeginOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACAttachment_OnComponentBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CAttachment_eventOnComponentBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ACAttachment_OnComponentBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((CAttachment_eventOnComponentBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACAttachment_OnComponentBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CAttachment_eventOnComponentBeginOverlap_Parms), &Z_Construct_UFunction_ACAttachment_OnComponentBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACAttachment_OnComponentBeginOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACAttachment_OnComponentBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CAttachment_eventOnComponentBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ACAttachment_OnComponentBeginOverlap_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACAttachment_OnComponentBeginOverlap_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACAttachment_OnComponentBeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACAttachment_OnComponentBeginOverlap_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACAttachment_OnComponentBeginOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACAttachment_OnComponentBeginOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACAttachment_OnComponentBeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACAttachment_OnComponentBeginOverlap_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACAttachment_OnComponentBeginOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACAttachment_OnComponentBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// C++?????? Hit?\xc8\xb0??? ?\xd7\xbb? ???\xce\xb5??\xd8\xbc? ????\n" },
		{ "ModuleRelativePath", "Weapons/CAttachment.h" },
		{ "ToolTip", "C++?????? Hit?\xc8\xb0??? ?\xd7\xbb? ???\xce\xb5??\xd8\xbc? ????" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACAttachment_OnComponentBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACAttachment, nullptr, "OnComponentBeginOverlap", nullptr, nullptr, sizeof(CAttachment_eventOnComponentBeginOverlap_Parms), Z_Construct_UFunction_ACAttachment_OnComponentBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACAttachment_OnComponentBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACAttachment_OnComponentBeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACAttachment_OnComponentBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACAttachment_OnComponentBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACAttachment_OnComponentBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACAttachment_OnComponentEndOverlap_Statics
	{
		struct CAttachment_eventOnComponentEndOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACAttachment_OnComponentEndOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACAttachment_OnComponentEndOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CAttachment_eventOnComponentEndOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACAttachment_OnComponentEndOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACAttachment_OnComponentEndOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACAttachment_OnComponentEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CAttachment_eventOnComponentEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACAttachment_OnComponentEndOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACAttachment_OnComponentEndOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CAttachment_eventOnComponentEndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACAttachment_OnComponentEndOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACAttachment_OnComponentEndOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACAttachment_OnComponentEndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CAttachment_eventOnComponentEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACAttachment_OnComponentEndOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACAttachment_OnComponentEndOverlap_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACAttachment_OnComponentEndOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACAttachment_OnComponentEndOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACAttachment_OnComponentEndOverlap_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACAttachment_OnComponentEndOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapons/CAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACAttachment_OnComponentEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACAttachment, nullptr, "OnComponentEndOverlap", nullptr, nullptr, sizeof(CAttachment_eventOnComponentEndOverlap_Parms), Z_Construct_UFunction_ACAttachment_OnComponentEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACAttachment_OnComponentEndOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACAttachment_OnComponentEndOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACAttachment_OnComponentEndOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACAttachment_OnComponentEndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACAttachment_OnComponentEndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACAttachment_OnEndEquip_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACAttachment_OnEndEquip_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// C?????? ???? \n" },
		{ "ModuleRelativePath", "Weapons/CAttachment.h" },
		{ "ToolTip", "C?????? ????" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACAttachment_OnEndEquip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACAttachment, nullptr, "OnEndEquip", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACAttachment_OnEndEquip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACAttachment_OnEndEquip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACAttachment_OnEndEquip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACAttachment_OnEndEquip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACAttachment_OnUnEquip_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACAttachment_OnUnEquip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapons/CAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACAttachment_OnUnEquip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACAttachment, nullptr, "OnUnEquip", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACAttachment_OnUnEquip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACAttachment_OnUnEquip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACAttachment_OnUnEquip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACAttachment_OnUnEquip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACAttachment_NoRegister()
	{
		return ACAttachment::StaticClass();
	}
	struct Z_Construct_UClass_ACAttachment_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnerCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerCharacter;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Collisions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Collisions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Collisions;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACAttachment_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_U06_Battle,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACAttachment_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACAttachment_AttachTo, "AttachTo" }, // 1429900417
		{ &Z_Construct_UFunction_ACAttachment_AttachToCollision, "AttachToCollision" }, // 3160362973
		{ &Z_Construct_UFunction_ACAttachment_OnBeginEquip, "OnBeginEquip" }, // 2692242916
		{ &Z_Construct_UFunction_ACAttachment_OnComponentBeginOverlap, "OnComponentBeginOverlap" }, // 1614449166
		{ &Z_Construct_UFunction_ACAttachment_OnComponentEndOverlap, "OnComponentEndOverlap" }, // 413776426
		{ &Z_Construct_UFunction_ACAttachment_OnEndEquip, "OnEndEquip" }, // 2130000781
		{ &Z_Construct_UFunction_ACAttachment_OnUnEquip, "OnUnEquip" }, // 3289061852
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACAttachment_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Weapons/CAttachment.h" },
		{ "ModuleRelativePath", "Weapons/CAttachment.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACAttachment_Statics::NewProp_Root_MetaData[] = {
		{ "Category", "CAttachment" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapons/CAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACAttachment_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACAttachment, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACAttachment_Statics::NewProp_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACAttachment_Statics::NewProp_Root_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACAttachment_Statics::NewProp_OwnerCharacter_MetaData[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "Weapons/CAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACAttachment_Statics::NewProp_OwnerCharacter = { "OwnerCharacter", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACAttachment, OwnerCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACAttachment_Statics::NewProp_OwnerCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACAttachment_Statics::NewProp_OwnerCharacter_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACAttachment_Statics::NewProp_Collisions_Inner = { "Collisions", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UShapeComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACAttachment_Statics::NewProp_Collisions_MetaData[] = {
		{ "Category", "Game" },
		{ "Comment", "// Parent????\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapons/CAttachment.h" },
		{ "ToolTip", "Parent????" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACAttachment_Statics::NewProp_Collisions = { "Collisions", nullptr, (EPropertyFlags)0x002008800000001c, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACAttachment, Collisions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACAttachment_Statics::NewProp_Collisions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACAttachment_Statics::NewProp_Collisions_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACAttachment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACAttachment_Statics::NewProp_Root,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACAttachment_Statics::NewProp_OwnerCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACAttachment_Statics::NewProp_Collisions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACAttachment_Statics::NewProp_Collisions,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACAttachment_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACAttachment>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACAttachment_Statics::ClassParams = {
		&ACAttachment::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACAttachment_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACAttachment_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACAttachment_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACAttachment_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACAttachment()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACAttachment_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACAttachment, 1820437752);
	template<> U06_BATTLE_API UClass* StaticClass<ACAttachment>()
	{
		return ACAttachment::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACAttachment(Z_Construct_UClass_ACAttachment, &ACAttachment::StaticClass, TEXT("/Script/U06_Battle"), TEXT("ACAttachment"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACAttachment);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
