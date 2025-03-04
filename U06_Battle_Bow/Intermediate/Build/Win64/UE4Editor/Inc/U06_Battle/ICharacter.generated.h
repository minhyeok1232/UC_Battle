// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef U06_BATTLE_ICharacter_generated_h
#error "ICharacter.generated.h already included, missing '#pragma once' in ICharacter.h"
#endif
#define U06_BATTLE_ICharacter_generated_h

#define U06_Battle_Bow_Source_U06_Battle_Characters_ICharacter_h_13_SPARSE_DATA
#define U06_Battle_Bow_Source_U06_Battle_Characters_ICharacter_h_13_RPC_WRAPPERS
#define U06_Battle_Bow_Source_U06_Battle_Characters_ICharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define U06_Battle_Bow_Source_U06_Battle_Characters_ICharacter_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	U06_BATTLE_API UICharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UICharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(U06_BATTLE_API, UICharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UICharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	U06_BATTLE_API UICharacter(UICharacter&&); \
	U06_BATTLE_API UICharacter(const UICharacter&); \
public:


#define U06_Battle_Bow_Source_U06_Battle_Characters_ICharacter_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	U06_BATTLE_API UICharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	U06_BATTLE_API UICharacter(UICharacter&&); \
	U06_BATTLE_API UICharacter(const UICharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(U06_BATTLE_API, UICharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UICharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UICharacter)


#define U06_Battle_Bow_Source_U06_Battle_Characters_ICharacter_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUICharacter(); \
	friend struct Z_Construct_UClass_UICharacter_Statics; \
public: \
	DECLARE_CLASS(UICharacter, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/U06_Battle"), U06_BATTLE_API) \
	DECLARE_SERIALIZER(UICharacter)


#define U06_Battle_Bow_Source_U06_Battle_Characters_ICharacter_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	U06_Battle_Bow_Source_U06_Battle_Characters_ICharacter_h_13_GENERATED_UINTERFACE_BODY() \
	U06_Battle_Bow_Source_U06_Battle_Characters_ICharacter_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define U06_Battle_Bow_Source_U06_Battle_Characters_ICharacter_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	U06_Battle_Bow_Source_U06_Battle_Characters_ICharacter_h_13_GENERATED_UINTERFACE_BODY() \
	U06_Battle_Bow_Source_U06_Battle_Characters_ICharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define U06_Battle_Bow_Source_U06_Battle_Characters_ICharacter_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IICharacter() {} \
public: \
	typedef UICharacter UClassType; \
	typedef IICharacter ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define U06_Battle_Bow_Source_U06_Battle_Characters_ICharacter_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IICharacter() {} \
public: \
	typedef UICharacter UClassType; \
	typedef IICharacter ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define U06_Battle_Bow_Source_U06_Battle_Characters_ICharacter_h_10_PROLOG
#define U06_Battle_Bow_Source_U06_Battle_Characters_ICharacter_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	U06_Battle_Bow_Source_U06_Battle_Characters_ICharacter_h_13_SPARSE_DATA \
	U06_Battle_Bow_Source_U06_Battle_Characters_ICharacter_h_13_RPC_WRAPPERS \
	U06_Battle_Bow_Source_U06_Battle_Characters_ICharacter_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define U06_Battle_Bow_Source_U06_Battle_Characters_ICharacter_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	U06_Battle_Bow_Source_U06_Battle_Characters_ICharacter_h_13_SPARSE_DATA \
	U06_Battle_Bow_Source_U06_Battle_Characters_ICharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	U06_Battle_Bow_Source_U06_Battle_Characters_ICharacter_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> U06_BATTLE_API UClass* StaticClass<class UICharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID U06_Battle_Bow_Source_U06_Battle_Characters_ICharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
