// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "uri42Projectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef URI42_uri42Projectile_generated_h
#error "uri42Projectile.generated.h already included, missing '#pragma once' in uri42Projectile.h"
#endif
#define URI42_uri42Projectile_generated_h

#define FID_Users_Admin_Documents_GitHub_uri42_uri42_Source_uri42_uri42Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit);


#define FID_Users_Admin_Documents_GitHub_uri42_uri42_Source_uri42_uri42Projectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAuri42Projectile(); \
	friend struct Z_Construct_UClass_Auri42Projectile_Statics; \
public: \
	DECLARE_CLASS(Auri42Projectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/uri42"), NO_API) \
	DECLARE_SERIALIZER(Auri42Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Users_Admin_Documents_GitHub_uri42_uri42_Source_uri42_uri42Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	Auri42Projectile(Auri42Projectile&&); \
	Auri42Projectile(const Auri42Projectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Auri42Projectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Auri42Projectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(Auri42Projectile) \
	NO_API virtual ~Auri42Projectile();


#define FID_Users_Admin_Documents_GitHub_uri42_uri42_Source_uri42_uri42Projectile_h_12_PROLOG
#define FID_Users_Admin_Documents_GitHub_uri42_uri42_Source_uri42_uri42Projectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Admin_Documents_GitHub_uri42_uri42_Source_uri42_uri42Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Admin_Documents_GitHub_uri42_uri42_Source_uri42_uri42Projectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_Admin_Documents_GitHub_uri42_uri42_Source_uri42_uri42Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> URI42_API UClass* StaticClass<class Auri42Projectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Admin_Documents_GitHub_uri42_uri42_Source_uri42_uri42Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
