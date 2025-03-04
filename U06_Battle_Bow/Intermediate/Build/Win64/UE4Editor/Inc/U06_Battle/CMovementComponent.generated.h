// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef U06_BATTLE_CMovementComponent_generated_h
#error "CMovementComponent.generated.h already included, missing '#pragma once' in CMovementComponent.h"
#endif
#define U06_BATTLE_CMovementComponent_generated_h

#define U06_Battle_Bow_Source_U06_Battle_Components_CMovementComponent_h_22_SPARSE_DATA
#define U06_Battle_Bow_Source_U06_Battle_Components_CMovementComponent_h_22_RPC_WRAPPERS
#define U06_Battle_Bow_Source_U06_Battle_Components_CMovementComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define U06_Battle_Bow_Source_U06_Battle_Components_CMovementComponent_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCMovementComponent(); \
	friend struct Z_Construct_UClass_UCMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UCMovementComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/U06_Battle"), NO_API) \
	DECLARE_SERIALIZER(UCMovementComponent)


#define U06_Battle_Bow_Source_U06_Battle_Components_CMovementComponent_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUCMovementComponent(); \
	friend struct Z_Construct_UClass_UCMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UCMovementComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/U06_Battle"), NO_API) \
	DECLARE_SERIALIZER(UCMovementComponent)


#define U06_Battle_Bow_Source_U06_Battle_Components_CMovementComponent_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCMovementComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCMovementComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCMovementComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCMovementComponent(UCMovementComponent&&); \
	NO_API UCMovementComponent(const UCMovementComponent&); \
public:


#define U06_Battle_Bow_Source_U06_Battle_Components_CMovementComponent_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCMovementComponent(UCMovementComponent&&); \
	NO_API UCMovementComponent(const UCMovementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCMovementComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCMovementComponent)


#define U06_Battle_Bow_Source_U06_Battle_Components_CMovementComponent_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Speed() { return STRUCT_OFFSET(UCMovementComponent, Speed); }


#define U06_Battle_Bow_Source_U06_Battle_Components_CMovementComponent_h_19_PROLOG
#define U06_Battle_Bow_Source_U06_Battle_Components_CMovementComponent_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	U06_Battle_Bow_Source_U06_Battle_Components_CMovementComponent_h_22_PRIVATE_PROPERTY_OFFSET \
	U06_Battle_Bow_Source_U06_Battle_Components_CMovementComponent_h_22_SPARSE_DATA \
	U06_Battle_Bow_Source_U06_Battle_Components_CMovementComponent_h_22_RPC_WRAPPERS \
	U06_Battle_Bow_Source_U06_Battle_Components_CMovementComponent_h_22_INCLASS \
	U06_Battle_Bow_Source_U06_Battle_Components_CMovementComponent_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define U06_Battle_Bow_Source_U06_Battle_Components_CMovementComponent_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	U06_Battle_Bow_Source_U06_Battle_Components_CMovementComponent_h_22_PRIVATE_PROPERTY_OFFSET \
	U06_Battle_Bow_Source_U06_Battle_Components_CMovementComponent_h_22_SPARSE_DATA \
	U06_Battle_Bow_Source_U06_Battle_Components_CMovementComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	U06_Battle_Bow_Source_U06_Battle_Components_CMovementComponent_h_22_INCLASS_NO_PURE_DECLS \
	U06_Battle_Bow_Source_U06_Battle_Components_CMovementComponent_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> U06_BATTLE_API UClass* StaticClass<class UCMovementComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID U06_Battle_Bow_Source_U06_Battle_Components_CMovementComponent_h


#define FOREACH_ENUM_ESPEEDTYPE(op) \
	op(ESpeedType::Walk) \
	op(ESpeedType::Run) \
	op(ESpeedType::Sprint) \
	op(ESpeedType::Max) 

enum class ESpeedType : uint8;
template<> U06_BATTLE_API UEnum* StaticEnum<ESpeedType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
