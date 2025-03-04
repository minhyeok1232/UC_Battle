// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EStateType : uint8;
#ifdef U06_BATTLE_CStateComponent_generated_h
#error "CStateComponent.generated.h already included, missing '#pragma once' in CStateComponent.h"
#endif
#define U06_BATTLE_CStateComponent_generated_h

#define U06_Battle_Bow_Source_U06_Battle_Components_CStateComponent_h_15_DELEGATE \
struct _Script_U06_Battle_eventStateTypeChanged_Parms \
{ \
	EStateType InPrevType; \
	EStateType InNewType; \
}; \
static inline void FStateTypeChanged_DelegateWrapper(const FMulticastScriptDelegate& StateTypeChanged, EStateType InPrevType, EStateType InNewType) \
{ \
	_Script_U06_Battle_eventStateTypeChanged_Parms Parms; \
	Parms.InPrevType=InPrevType; \
	Parms.InNewType=InNewType; \
	StateTypeChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define U06_Battle_Bow_Source_U06_Battle_Components_CStateComponent_h_20_SPARSE_DATA
#define U06_Battle_Bow_Source_U06_Battle_Components_CStateComponent_h_20_RPC_WRAPPERS
#define U06_Battle_Bow_Source_U06_Battle_Components_CStateComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define U06_Battle_Bow_Source_U06_Battle_Components_CStateComponent_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCStateComponent(); \
	friend struct Z_Construct_UClass_UCStateComponent_Statics; \
public: \
	DECLARE_CLASS(UCStateComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/U06_Battle"), NO_API) \
	DECLARE_SERIALIZER(UCStateComponent)


#define U06_Battle_Bow_Source_U06_Battle_Components_CStateComponent_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUCStateComponent(); \
	friend struct Z_Construct_UClass_UCStateComponent_Statics; \
public: \
	DECLARE_CLASS(UCStateComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/U06_Battle"), NO_API) \
	DECLARE_SERIALIZER(UCStateComponent)


#define U06_Battle_Bow_Source_U06_Battle_Components_CStateComponent_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCStateComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCStateComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCStateComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCStateComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCStateComponent(UCStateComponent&&); \
	NO_API UCStateComponent(const UCStateComponent&); \
public:


#define U06_Battle_Bow_Source_U06_Battle_Components_CStateComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCStateComponent(UCStateComponent&&); \
	NO_API UCStateComponent(const UCStateComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCStateComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCStateComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCStateComponent)


#define U06_Battle_Bow_Source_U06_Battle_Components_CStateComponent_h_20_PRIVATE_PROPERTY_OFFSET
#define U06_Battle_Bow_Source_U06_Battle_Components_CStateComponent_h_17_PROLOG
#define U06_Battle_Bow_Source_U06_Battle_Components_CStateComponent_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	U06_Battle_Bow_Source_U06_Battle_Components_CStateComponent_h_20_PRIVATE_PROPERTY_OFFSET \
	U06_Battle_Bow_Source_U06_Battle_Components_CStateComponent_h_20_SPARSE_DATA \
	U06_Battle_Bow_Source_U06_Battle_Components_CStateComponent_h_20_RPC_WRAPPERS \
	U06_Battle_Bow_Source_U06_Battle_Components_CStateComponent_h_20_INCLASS \
	U06_Battle_Bow_Source_U06_Battle_Components_CStateComponent_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define U06_Battle_Bow_Source_U06_Battle_Components_CStateComponent_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	U06_Battle_Bow_Source_U06_Battle_Components_CStateComponent_h_20_PRIVATE_PROPERTY_OFFSET \
	U06_Battle_Bow_Source_U06_Battle_Components_CStateComponent_h_20_SPARSE_DATA \
	U06_Battle_Bow_Source_U06_Battle_Components_CStateComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	U06_Battle_Bow_Source_U06_Battle_Components_CStateComponent_h_20_INCLASS_NO_PURE_DECLS \
	U06_Battle_Bow_Source_U06_Battle_Components_CStateComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> U06_BATTLE_API UClass* StaticClass<class UCStateComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID U06_Battle_Bow_Source_U06_Battle_Components_CStateComponent_h


#define FOREACH_ENUM_ESTATETYPE(op) \
	op(EStateType::Idle) \
	op(EStateType::BackStep) \
	op(EStateType::Roll) \
	op(EStateType::Equip) \
	op(EStateType::Hit) \
	op(EStateType::Dead) \
	op(EStateType::Action) \
	op(EStateType::Max) 

enum class EStateType : uint8;
template<> U06_BATTLE_API UEnum* StaticEnum<EStateType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
