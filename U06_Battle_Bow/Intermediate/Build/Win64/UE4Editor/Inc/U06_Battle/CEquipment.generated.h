// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef U06_BATTLE_CEquipment_generated_h
#error "CEquipment.generated.h already included, missing '#pragma once' in CEquipment.h"
#endif
#define U06_BATTLE_CEquipment_generated_h

#define U06_Battle_Bow_Source_U06_Battle_Weapons_CEquipment_h_20_DELEGATE \
static inline void FEquipment_UnEquip_DelegateWrapper(const FMulticastScriptDelegate& Equipment_UnEquip) \
{ \
	Equipment_UnEquip.ProcessMulticastDelegate<UObject>(NULL); \
}


#define U06_Battle_Bow_Source_U06_Battle_Weapons_CEquipment_h_19_DELEGATE \
static inline void FEquipment_EndEquip_DelegateWrapper(const FMulticastScriptDelegate& Equipment_EndEquip) \
{ \
	Equipment_EndEquip.ProcessMulticastDelegate<UObject>(NULL); \
}


#define U06_Battle_Bow_Source_U06_Battle_Weapons_CEquipment_h_18_DELEGATE \
static inline void FEquipment_BeginEquip_DelegateWrapper(const FMulticastScriptDelegate& Equipment_BeginEquip) \
{ \
	Equipment_BeginEquip.ProcessMulticastDelegate<UObject>(NULL); \
}


#define U06_Battle_Bow_Source_U06_Battle_Weapons_CEquipment_h_26_SPARSE_DATA
#define U06_Battle_Bow_Source_U06_Battle_Weapons_CEquipment_h_26_RPC_WRAPPERS \
	virtual void UnEquip_Implementation(); \
	virtual void End_Equip_Implementation(); \
	virtual void Begin_Equip_Implementation(); \
	virtual void Equip_Implementation(); \
 \
	DECLARE_FUNCTION(execUnEquip); \
	DECLARE_FUNCTION(execEnd_Equip); \
	DECLARE_FUNCTION(execBegin_Equip); \
	DECLARE_FUNCTION(execEquip);


#define U06_Battle_Bow_Source_U06_Battle_Weapons_CEquipment_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUnEquip); \
	DECLARE_FUNCTION(execEnd_Equip); \
	DECLARE_FUNCTION(execBegin_Equip); \
	DECLARE_FUNCTION(execEquip);


#define U06_Battle_Bow_Source_U06_Battle_Weapons_CEquipment_h_26_EVENT_PARMS
#define U06_Battle_Bow_Source_U06_Battle_Weapons_CEquipment_h_26_CALLBACK_WRAPPERS
#define U06_Battle_Bow_Source_U06_Battle_Weapons_CEquipment_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCEquipment(); \
	friend struct Z_Construct_UClass_UCEquipment_Statics; \
public: \
	DECLARE_CLASS(UCEquipment, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/U06_Battle"), NO_API) \
	DECLARE_SERIALIZER(UCEquipment)


#define U06_Battle_Bow_Source_U06_Battle_Weapons_CEquipment_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUCEquipment(); \
	friend struct Z_Construct_UClass_UCEquipment_Statics; \
public: \
	DECLARE_CLASS(UCEquipment, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/U06_Battle"), NO_API) \
	DECLARE_SERIALIZER(UCEquipment)


#define U06_Battle_Bow_Source_U06_Battle_Weapons_CEquipment_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCEquipment(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCEquipment) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCEquipment); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCEquipment); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCEquipment(UCEquipment&&); \
	NO_API UCEquipment(const UCEquipment&); \
public:


#define U06_Battle_Bow_Source_U06_Battle_Weapons_CEquipment_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCEquipment(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCEquipment(UCEquipment&&); \
	NO_API UCEquipment(const UCEquipment&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCEquipment); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCEquipment); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCEquipment)


#define U06_Battle_Bow_Source_U06_Battle_Weapons_CEquipment_h_26_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__OwnerCharacter() { return STRUCT_OFFSET(UCEquipment, OwnerCharacter); }


#define U06_Battle_Bow_Source_U06_Battle_Weapons_CEquipment_h_23_PROLOG \
	U06_Battle_Bow_Source_U06_Battle_Weapons_CEquipment_h_26_EVENT_PARMS


#define U06_Battle_Bow_Source_U06_Battle_Weapons_CEquipment_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	U06_Battle_Bow_Source_U06_Battle_Weapons_CEquipment_h_26_PRIVATE_PROPERTY_OFFSET \
	U06_Battle_Bow_Source_U06_Battle_Weapons_CEquipment_h_26_SPARSE_DATA \
	U06_Battle_Bow_Source_U06_Battle_Weapons_CEquipment_h_26_RPC_WRAPPERS \
	U06_Battle_Bow_Source_U06_Battle_Weapons_CEquipment_h_26_CALLBACK_WRAPPERS \
	U06_Battle_Bow_Source_U06_Battle_Weapons_CEquipment_h_26_INCLASS \
	U06_Battle_Bow_Source_U06_Battle_Weapons_CEquipment_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define U06_Battle_Bow_Source_U06_Battle_Weapons_CEquipment_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	U06_Battle_Bow_Source_U06_Battle_Weapons_CEquipment_h_26_PRIVATE_PROPERTY_OFFSET \
	U06_Battle_Bow_Source_U06_Battle_Weapons_CEquipment_h_26_SPARSE_DATA \
	U06_Battle_Bow_Source_U06_Battle_Weapons_CEquipment_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	U06_Battle_Bow_Source_U06_Battle_Weapons_CEquipment_h_26_CALLBACK_WRAPPERS \
	U06_Battle_Bow_Source_U06_Battle_Weapons_CEquipment_h_26_INCLASS_NO_PURE_DECLS \
	U06_Battle_Bow_Source_U06_Battle_Weapons_CEquipment_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> U06_BATTLE_API UClass* StaticClass<class UCEquipment>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID U06_Battle_Bow_Source_U06_Battle_Weapons_CEquipment_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
