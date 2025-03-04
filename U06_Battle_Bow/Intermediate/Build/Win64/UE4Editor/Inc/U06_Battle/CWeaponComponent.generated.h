// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EWeaponType : uint8;
#ifdef U06_BATTLE_CWeaponComponent_generated_h
#error "CWeaponComponent.generated.h already included, missing '#pragma once' in CWeaponComponent.h"
#endif
#define U06_BATTLE_CWeaponComponent_generated_h

#define U06_Battle_Bow_Source_U06_Battle_Components_CWeaponComponent_h_29_DELEGATE \
struct _Script_U06_Battle_eventWeaponTypeChanged_Parms \
{ \
	EWeaponType InPrevType; \
	EWeaponType InNewType; \
}; \
static inline void FWeaponTypeChanged_DelegateWrapper(const FMulticastScriptDelegate& WeaponTypeChanged, EWeaponType InPrevType, EWeaponType InNewType) \
{ \
	_Script_U06_Battle_eventWeaponTypeChanged_Parms Parms; \
	Parms.InPrevType=InPrevType; \
	Parms.InNewType=InNewType; \
	WeaponTypeChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define U06_Battle_Bow_Source_U06_Battle_Components_CWeaponComponent_h_34_SPARSE_DATA
#define U06_Battle_Bow_Source_U06_Battle_Components_CWeaponComponent_h_34_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSubAction_Released); \
	DECLARE_FUNCTION(execSubAction_Pressed);


#define U06_Battle_Bow_Source_U06_Battle_Components_CWeaponComponent_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSubAction_Released); \
	DECLARE_FUNCTION(execSubAction_Pressed);


#define U06_Battle_Bow_Source_U06_Battle_Components_CWeaponComponent_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCWeaponComponent(); \
	friend struct Z_Construct_UClass_UCWeaponComponent_Statics; \
public: \
	DECLARE_CLASS(UCWeaponComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/U06_Battle"), NO_API) \
	DECLARE_SERIALIZER(UCWeaponComponent)


#define U06_Battle_Bow_Source_U06_Battle_Components_CWeaponComponent_h_34_INCLASS \
private: \
	static void StaticRegisterNativesUCWeaponComponent(); \
	friend struct Z_Construct_UClass_UCWeaponComponent_Statics; \
public: \
	DECLARE_CLASS(UCWeaponComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/U06_Battle"), NO_API) \
	DECLARE_SERIALIZER(UCWeaponComponent)


#define U06_Battle_Bow_Source_U06_Battle_Components_CWeaponComponent_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCWeaponComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCWeaponComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCWeaponComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCWeaponComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCWeaponComponent(UCWeaponComponent&&); \
	NO_API UCWeaponComponent(const UCWeaponComponent&); \
public:


#define U06_Battle_Bow_Source_U06_Battle_Components_CWeaponComponent_h_34_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCWeaponComponent(UCWeaponComponent&&); \
	NO_API UCWeaponComponent(const UCWeaponComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCWeaponComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCWeaponComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCWeaponComponent)


#define U06_Battle_Bow_Source_U06_Battle_Components_CWeaponComponent_h_34_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DataAssets() { return STRUCT_OFFSET(UCWeaponComponent, DataAssets); } \
	FORCEINLINE static uint32 __PPO__Datas() { return STRUCT_OFFSET(UCWeaponComponent, Datas); }


#define U06_Battle_Bow_Source_U06_Battle_Components_CWeaponComponent_h_31_PROLOG
#define U06_Battle_Bow_Source_U06_Battle_Components_CWeaponComponent_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	U06_Battle_Bow_Source_U06_Battle_Components_CWeaponComponent_h_34_PRIVATE_PROPERTY_OFFSET \
	U06_Battle_Bow_Source_U06_Battle_Components_CWeaponComponent_h_34_SPARSE_DATA \
	U06_Battle_Bow_Source_U06_Battle_Components_CWeaponComponent_h_34_RPC_WRAPPERS \
	U06_Battle_Bow_Source_U06_Battle_Components_CWeaponComponent_h_34_INCLASS \
	U06_Battle_Bow_Source_U06_Battle_Components_CWeaponComponent_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define U06_Battle_Bow_Source_U06_Battle_Components_CWeaponComponent_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	U06_Battle_Bow_Source_U06_Battle_Components_CWeaponComponent_h_34_PRIVATE_PROPERTY_OFFSET \
	U06_Battle_Bow_Source_U06_Battle_Components_CWeaponComponent_h_34_SPARSE_DATA \
	U06_Battle_Bow_Source_U06_Battle_Components_CWeaponComponent_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	U06_Battle_Bow_Source_U06_Battle_Components_CWeaponComponent_h_34_INCLASS_NO_PURE_DECLS \
	U06_Battle_Bow_Source_U06_Battle_Components_CWeaponComponent_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> U06_BATTLE_API UClass* StaticClass<class UCWeaponComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID U06_Battle_Bow_Source_U06_Battle_Components_CWeaponComponent_h


#define FOREACH_ENUM_EWEAPONTYPE(op) \
	op(EWeaponType::Fist) \
	op(EWeaponType::Sword) \
	op(EWeaponType::Hammer) \
	op(EWeaponType::Tornado) \
	op(EWeaponType::Warp) \
	op(EWeaponType::Around) \
	op(EWeaponType::Bow) \
	op(EWeaponType::Max) 

enum class EWeaponType : uint8;
template<> U06_BATTLE_API UEnum* StaticEnum<EWeaponType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
