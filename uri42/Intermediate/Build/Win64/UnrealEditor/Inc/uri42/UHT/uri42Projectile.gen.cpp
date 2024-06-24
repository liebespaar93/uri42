// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "uri42/uri42Projectile.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeuri42Projectile() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
UPackage* Z_Construct_UPackage__Script_uri42();
URI42_API UClass* Z_Construct_UClass_Auri42Projectile();
URI42_API UClass* Z_Construct_UClass_Auri42Projectile_NoRegister();
// End Cross Module References

// Begin Class Auri42Projectile Function OnHit
struct Z_Construct_UFunction_Auri42Projectile_OnHit_Statics
{
	struct uri42Projectile_eventOnHit_Parms
	{
		UPrimitiveComponent* HitComp;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		FVector NormalImpulse;
		FHitResult Hit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** called when projectile hits something */" },
#endif
		{ "ModuleRelativePath", "uri42Projectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "called when projectile hits something" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_Auri42Projectile_OnHit_Statics::NewProp_HitComp = { "HitComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(uri42Projectile_eventOnHit_Parms, HitComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitComp_MetaData), NewProp_HitComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_Auri42Projectile_OnHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(uri42Projectile_eventOnHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_Auri42Projectile_OnHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(uri42Projectile_eventOnHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_Auri42Projectile_OnHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(uri42Projectile_eventOnHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_Auri42Projectile_OnHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(uri42Projectile_eventOnHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hit_MetaData), NewProp_Hit_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Auri42Projectile_OnHit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Auri42Projectile_OnHit_Statics::NewProp_HitComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Auri42Projectile_OnHit_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Auri42Projectile_OnHit_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Auri42Projectile_OnHit_Statics::NewProp_NormalImpulse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Auri42Projectile_OnHit_Statics::NewProp_Hit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_Auri42Projectile_OnHit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_Auri42Projectile_OnHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Auri42Projectile, nullptr, "OnHit", nullptr, nullptr, Z_Construct_UFunction_Auri42Projectile_OnHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Auri42Projectile_OnHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_Auri42Projectile_OnHit_Statics::uri42Projectile_eventOnHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_Auri42Projectile_OnHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_Auri42Projectile_OnHit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_Auri42Projectile_OnHit_Statics::uri42Projectile_eventOnHit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_Auri42Projectile_OnHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_Auri42Projectile_OnHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(Auri42Projectile::execOnHit)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit);
	P_NATIVE_END;
}
// End Class Auri42Projectile Function OnHit

// Begin Class Auri42Projectile
void Auri42Projectile::StaticRegisterNativesAuri42Projectile()
{
	UClass* Class = Auri42Projectile::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnHit", &Auri42Projectile::execOnHit },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(Auri42Projectile);
UClass* Z_Construct_UClass_Auri42Projectile_NoRegister()
{
	return Auri42Projectile::StaticClass();
}
struct Z_Construct_UClass_Auri42Projectile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "uri42Projectile.h" },
		{ "ModuleRelativePath", "uri42Projectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionComp_MetaData[] = {
		{ "Category", "Projectile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sphere collision component */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "uri42Projectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sphere collision component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileMovement_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Projectile movement component */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "uri42Projectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Projectile movement component" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileMovement;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_Auri42Projectile_OnHit, "OnHit" }, // 2258182694
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Auri42Projectile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Auri42Projectile_Statics::NewProp_CollisionComp = { "CollisionComp", nullptr, (EPropertyFlags)0x00400000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Auri42Projectile, CollisionComp), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionComp_MetaData), NewProp_CollisionComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Auri42Projectile_Statics::NewProp_ProjectileMovement = { "ProjectileMovement", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Auri42Projectile, ProjectileMovement), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileMovement_MetaData), NewProp_ProjectileMovement_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_Auri42Projectile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Auri42Projectile_Statics::NewProp_CollisionComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Auri42Projectile_Statics::NewProp_ProjectileMovement,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_Auri42Projectile_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_Auri42Projectile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_uri42,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_Auri42Projectile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_Auri42Projectile_Statics::ClassParams = {
	&Auri42Projectile::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_Auri42Projectile_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_Auri42Projectile_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Auri42Projectile_Statics::Class_MetaDataParams), Z_Construct_UClass_Auri42Projectile_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_Auri42Projectile()
{
	if (!Z_Registration_Info_UClass_Auri42Projectile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Auri42Projectile.OuterSingleton, Z_Construct_UClass_Auri42Projectile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_Auri42Projectile.OuterSingleton;
}
template<> URI42_API UClass* StaticClass<Auri42Projectile>()
{
	return Auri42Projectile::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(Auri42Projectile);
Auri42Projectile::~Auri42Projectile() {}
// End Class Auri42Projectile

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Admin_Documents_GitHub_uri42_uri42_Source_uri42_uri42Projectile_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_Auri42Projectile, Auri42Projectile::StaticClass, TEXT("Auri42Projectile"), &Z_Registration_Info_UClass_Auri42Projectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Auri42Projectile), 3639746850U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Admin_Documents_GitHub_uri42_uri42_Source_uri42_uri42Projectile_h_437717258(TEXT("/Script/uri42"),
	Z_CompiledInDeferFile_FID_Users_Admin_Documents_GitHub_uri42_uri42_Source_uri42_uri42Projectile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Admin_Documents_GitHub_uri42_uri42_Source_uri42_uri42Projectile_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
