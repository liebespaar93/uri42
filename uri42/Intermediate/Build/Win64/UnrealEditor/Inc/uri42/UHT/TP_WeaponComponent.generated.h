// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TP_WeaponComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class Auri42Character;
#ifdef URI42_TP_WeaponComponent_generated_h
#error "TP_WeaponComponent.generated.h already included, missing '#pragma once' in TP_WeaponComponent.h"
#endif
#define URI42_TP_WeaponComponent_generated_h

#define FID_Users_Admin_Documents_GitHub_uri42_uri42_Source_uri42_TP_WeaponComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEndPlay); \
	DECLARE_FUNCTION(execFire); \
	DECLARE_FUNCTION(execAttachWeapon);


#define FID_Users_Admin_Documents_GitHub_uri42_uri42_Source_uri42_TP_WeaponComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTP_WeaponComponent(); \
	friend struct Z_Construct_UClass_UTP_WeaponComponent_Statics; \
public: \
	DECLARE_CLASS(UTP_WeaponComponent, USkeletalMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/uri42"), NO_API) \
	DECLARE_SERIALIZER(UTP_WeaponComponent)


#define FID_Users_Admin_Documents_GitHub_uri42_uri42_Source_uri42_TP_WeaponComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTP_WeaponComponent(UTP_WeaponComponent&&); \
	UTP_WeaponComponent(const UTP_WeaponComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTP_WeaponComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTP_WeaponComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTP_WeaponComponent) \
	NO_API virtual ~UTP_WeaponComponent();


#define FID_Users_Admin_Documents_GitHub_uri42_uri42_Source_uri42_TP_WeaponComponent_h_11_PROLOG
#define FID_Users_Admin_Documents_GitHub_uri42_uri42_Source_uri42_TP_WeaponComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Admin_Documents_GitHub_uri42_uri42_Source_uri42_TP_WeaponComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Admin_Documents_GitHub_uri42_uri42_Source_uri42_TP_WeaponComponent_h_14_INCLASS_NO_PURE_DECLS \
	FID_Users_Admin_Documents_GitHub_uri42_uri42_Source_uri42_TP_WeaponComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> URI42_API UClass* StaticClass<class UTP_WeaponComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Admin_Documents_GitHub_uri42_uri42_Source_uri42_TP_WeaponComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
