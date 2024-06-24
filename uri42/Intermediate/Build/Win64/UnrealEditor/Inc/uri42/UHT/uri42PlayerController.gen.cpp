// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "uri42/uri42PlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeuri42PlayerController() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
UPackage* Z_Construct_UPackage__Script_uri42();
URI42_API UClass* Z_Construct_UClass_Auri42PlayerController();
URI42_API UClass* Z_Construct_UClass_Auri42PlayerController_NoRegister();
// End Cross Module References

// Begin Class Auri42PlayerController
void Auri42PlayerController::StaticRegisterNativesAuri42PlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(Auri42PlayerController);
UClass* Z_Construct_UClass_Auri42PlayerController_NoRegister()
{
	return Auri42PlayerController::StaticClass();
}
struct Z_Construct_UClass_Auri42PlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "uri42PlayerController.h" },
		{ "ModuleRelativePath", "uri42PlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Mapping Context to be used for player input */" },
#endif
		{ "ModuleRelativePath", "uri42PlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mapping Context to be used for player input" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Auri42PlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Auri42PlayerController_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Auri42PlayerController, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMappingContext_MetaData), NewProp_InputMappingContext_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_Auri42PlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Auri42PlayerController_Statics::NewProp_InputMappingContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_Auri42PlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_Auri42PlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_uri42,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_Auri42PlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_Auri42PlayerController_Statics::ClassParams = {
	&Auri42PlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_Auri42PlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_Auri42PlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Auri42PlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_Auri42PlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_Auri42PlayerController()
{
	if (!Z_Registration_Info_UClass_Auri42PlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Auri42PlayerController.OuterSingleton, Z_Construct_UClass_Auri42PlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_Auri42PlayerController.OuterSingleton;
}
template<> URI42_API UClass* StaticClass<Auri42PlayerController>()
{
	return Auri42PlayerController::StaticClass();
}
Auri42PlayerController::Auri42PlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(Auri42PlayerController);
Auri42PlayerController::~Auri42PlayerController() {}
// End Class Auri42PlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Admin_Documents_GitHub_uri42_uri42_Source_uri42_uri42PlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_Auri42PlayerController, Auri42PlayerController::StaticClass, TEXT("Auri42PlayerController"), &Z_Registration_Info_UClass_Auri42PlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Auri42PlayerController), 2046184288U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Admin_Documents_GitHub_uri42_uri42_Source_uri42_uri42PlayerController_h_296841049(TEXT("/Script/uri42"),
	Z_CompiledInDeferFile_FID_Users_Admin_Documents_GitHub_uri42_uri42_Source_uri42_uri42PlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Admin_Documents_GitHub_uri42_uri42_Source_uri42_uri42PlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
