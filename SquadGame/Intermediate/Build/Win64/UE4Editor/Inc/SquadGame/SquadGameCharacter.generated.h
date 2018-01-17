// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SQUADGAME_SquadGameCharacter_generated_h
#error "SquadGameCharacter.generated.h already included, missing '#pragma once' in SquadGameCharacter.h"
#endif
#define SQUADGAME_SquadGameCharacter_generated_h

#define SquadGame_Source_SquadGame_SquadGameCharacter_h_12_RPC_WRAPPERS
#define SquadGame_Source_SquadGame_SquadGameCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define SquadGame_Source_SquadGame_SquadGameCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASquadGameCharacter(); \
	friend SQUADGAME_API class UClass* Z_Construct_UClass_ASquadGameCharacter(); \
public: \
	DECLARE_CLASS(ASquadGameCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SquadGame"), NO_API) \
	DECLARE_SERIALIZER(ASquadGameCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define SquadGame_Source_SquadGame_SquadGameCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesASquadGameCharacter(); \
	friend SQUADGAME_API class UClass* Z_Construct_UClass_ASquadGameCharacter(); \
public: \
	DECLARE_CLASS(ASquadGameCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SquadGame"), NO_API) \
	DECLARE_SERIALIZER(ASquadGameCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define SquadGame_Source_SquadGame_SquadGameCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASquadGameCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASquadGameCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASquadGameCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASquadGameCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASquadGameCharacter(ASquadGameCharacter&&); \
	NO_API ASquadGameCharacter(const ASquadGameCharacter&); \
public:


#define SquadGame_Source_SquadGame_SquadGameCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASquadGameCharacter(ASquadGameCharacter&&); \
	NO_API ASquadGameCharacter(const ASquadGameCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASquadGameCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASquadGameCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASquadGameCharacter)


#define SquadGame_Source_SquadGame_SquadGameCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TopDownCameraComponent() { return STRUCT_OFFSET(ASquadGameCharacter, TopDownCameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ASquadGameCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__CursorToWorld() { return STRUCT_OFFSET(ASquadGameCharacter, CursorToWorld); }


#define SquadGame_Source_SquadGame_SquadGameCharacter_h_9_PROLOG
#define SquadGame_Source_SquadGame_SquadGameCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SquadGame_Source_SquadGame_SquadGameCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	SquadGame_Source_SquadGame_SquadGameCharacter_h_12_RPC_WRAPPERS \
	SquadGame_Source_SquadGame_SquadGameCharacter_h_12_INCLASS \
	SquadGame_Source_SquadGame_SquadGameCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SquadGame_Source_SquadGame_SquadGameCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SquadGame_Source_SquadGame_SquadGameCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	SquadGame_Source_SquadGame_SquadGameCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	SquadGame_Source_SquadGame_SquadGameCharacter_h_12_INCLASS_NO_PURE_DECLS \
	SquadGame_Source_SquadGame_SquadGameCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SquadGame_Source_SquadGame_SquadGameCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
