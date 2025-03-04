// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimMontage;
struct FBranchingPointNotifyPayload;
#ifdef U06_BATTLE_CMontageComponent_generated_h
#error "CMontageComponent.generated.h already included, missing '#pragma once' in CMontageComponent.h"
#endif
#define U06_BATTLE_CMontageComponent_generated_h

#define U06_Battle_Bow_Source_U06_Battle_Components_CMontageComponent_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMontagesData_Statics; \
	U06_BATTLE_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> U06_BATTLE_API UScriptStruct* StaticStruct<struct FMontagesData>();

#define U06_Battle_Bow_Source_U06_Battle_Components_CMontageComponent_h_33_SPARSE_DATA
#define U06_Battle_Bow_Source_U06_Battle_Components_CMontageComponent_h_33_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnMontageEnded); \
	DECLARE_FUNCTION(execOnMontageNotifyBegin);


#define U06_Battle_Bow_Source_U06_Battle_Components_CMontageComponent_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnMontageEnded); \
	DECLARE_FUNCTION(execOnMontageNotifyBegin);


#define U06_Battle_Bow_Source_U06_Battle_Components_CMontageComponent_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCMontageComponent(); \
	friend struct Z_Construct_UClass_UCMontageComponent_Statics; \
public: \
	DECLARE_CLASS(UCMontageComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/U06_Battle"), NO_API) \
	DECLARE_SERIALIZER(UCMontageComponent)


#define U06_Battle_Bow_Source_U06_Battle_Components_CMontageComponent_h_33_INCLASS \
private: \
	static void StaticRegisterNativesUCMontageComponent(); \
	friend struct Z_Construct_UClass_UCMontageComponent_Statics; \
public: \
	DECLARE_CLASS(UCMontageComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/U06_Battle"), NO_API) \
	DECLARE_SERIALIZER(UCMontageComponent)


#define U06_Battle_Bow_Source_U06_Battle_Components_CMontageComponent_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCMontageComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCMontageComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCMontageComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCMontageComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCMontageComponent(UCMontageComponent&&); \
	NO_API UCMontageComponent(const UCMontageComponent&); \
public:


#define U06_Battle_Bow_Source_U06_Battle_Components_CMontageComponent_h_33_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCMontageComponent(UCMontageComponent&&); \
	NO_API UCMontageComponent(const UCMontageComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCMontageComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCMontageComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCMontageComponent)


#define U06_Battle_Bow_Source_U06_Battle_Components_CMontageComponent_h_33_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DataTable() { return STRUCT_OFFSET(UCMontageComponent, DataTable); }


#define U06_Battle_Bow_Source_U06_Battle_Components_CMontageComponent_h_30_PROLOG
#define U06_Battle_Bow_Source_U06_Battle_Components_CMontageComponent_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	U06_Battle_Bow_Source_U06_Battle_Components_CMontageComponent_h_33_PRIVATE_PROPERTY_OFFSET \
	U06_Battle_Bow_Source_U06_Battle_Components_CMontageComponent_h_33_SPARSE_DATA \
	U06_Battle_Bow_Source_U06_Battle_Components_CMontageComponent_h_33_RPC_WRAPPERS \
	U06_Battle_Bow_Source_U06_Battle_Components_CMontageComponent_h_33_INCLASS \
	U06_Battle_Bow_Source_U06_Battle_Components_CMontageComponent_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define U06_Battle_Bow_Source_U06_Battle_Components_CMontageComponent_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	U06_Battle_Bow_Source_U06_Battle_Components_CMontageComponent_h_33_PRIVATE_PROPERTY_OFFSET \
	U06_Battle_Bow_Source_U06_Battle_Components_CMontageComponent_h_33_SPARSE_DATA \
	U06_Battle_Bow_Source_U06_Battle_Components_CMontageComponent_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	U06_Battle_Bow_Source_U06_Battle_Components_CMontageComponent_h_33_INCLASS_NO_PURE_DECLS \
	U06_Battle_Bow_Source_U06_Battle_Components_CMontageComponent_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> U06_BATTLE_API UClass* StaticClass<class UCMontageComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID U06_Battle_Bow_Source_U06_Battle_Components_CMontageComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
