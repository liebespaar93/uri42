// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "uri42/uri42GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeuri42GameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_uri42();
URI42_API UClass* Z_Construct_UClass_Auri42GameMode();
URI42_API UClass* Z_Construct_UClass_Auri42GameMode_NoRegister();
// End Cross Module References

// Begin Class Auri42GameMode
void Auri42GameMode::StaticRegisterNativesAuri42GameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(Auri42GameMode);
UClass* Z_Construct_UClass_Auri42GameMode_NoRegister()
{
	return Auri42GameMode::StaticClass();
}
struct Z_Construct_UClass_Auri42GameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "uri42GameMode.h" },
		{ "ModuleRelativePath", "uri42GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Auri42GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_Auri42GameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_uri42,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_Auri42GameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_Auri42GameMode_Statics::ClassParams = {
	&Auri42GameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Auri42GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_Auri42GameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_Auri42GameMode()
{
	if (!Z_Registration_Info_UClass_Auri42GameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Auri42GameMode.OuterSingleton, Z_Construct_UClass_Auri42GameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_Auri42GameMode.OuterSingleton;
}
template<> URI42_API UClass* StaticClass<Auri42GameMode>()
{
	return Auri42GameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(Auri42GameMode);
Auri42GameMode::~Auri42GameMode() {}
// End Class Auri42GameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Admin_Documents_GitHub_uri42_uri42_Source_uri42_uri42GameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_Auri42GameMode, Auri42GameMode::StaticClass, TEXT("Auri42GameMode"), &Z_Registration_Info_UClass_Auri42GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Auri42GameMode), 8252964U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Admin_Documents_GitHub_uri42_uri42_Source_uri42_uri42GameMode_h_3499853566(TEXT("/Script/uri42"),
	Z_CompiledInDeferFile_FID_Users_Admin_Documents_GitHub_uri42_uri42_Source_uri42_uri42GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Admin_Documents_GitHub_uri42_uri42_Source_uri42_uri42GameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
