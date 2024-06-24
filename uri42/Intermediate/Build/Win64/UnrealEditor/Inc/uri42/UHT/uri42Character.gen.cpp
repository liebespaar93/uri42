// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "uri42/uri42Character.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeuri42Character() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
UPackage* Z_Construct_UPackage__Script_uri42();
URI42_API UClass* Z_Construct_UClass_Auri42Character();
URI42_API UClass* Z_Construct_UClass_Auri42Character_NoRegister();
// End Cross Module References

// Begin Class Auri42Character
void Auri42Character::StaticRegisterNativesAuri42Character()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(Auri42Character);
UClass* Z_Construct_UClass_Auri42Character_NoRegister()
{
	return Auri42Character::StaticClass();
}
struct Z_Construct_UClass_Auri42Character_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "uri42Character.h" },
		{ "ModuleRelativePath", "uri42Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh1P_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pawn mesh: 1st person view (arms; seen only by self) */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "uri42Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pawn mesh: 1st person view (arms; seen only by self)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** First person camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "uri42Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "First person camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "uri42Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Move Input Action */" },
#endif
		{ "ModuleRelativePath", "uri42Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Look Input Action */" },
#endif
		{ "ModuleRelativePath", "uri42Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look Input Action" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh1P;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FirstPersonCameraComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Auri42Character>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Auri42Character_Statics::NewProp_Mesh1P = { "Mesh1P", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Auri42Character, Mesh1P), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh1P_MetaData), NewProp_Mesh1P_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Auri42Character_Statics::NewProp_FirstPersonCameraComponent = { "FirstPersonCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Auri42Character, FirstPersonCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstPersonCameraComponent_MetaData), NewProp_FirstPersonCameraComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Auri42Character_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Auri42Character, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Auri42Character_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Auri42Character, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Auri42Character_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Auri42Character, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_Auri42Character_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Auri42Character_Statics::NewProp_Mesh1P,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Auri42Character_Statics::NewProp_FirstPersonCameraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Auri42Character_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Auri42Character_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Auri42Character_Statics::NewProp_LookAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_Auri42Character_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_Auri42Character_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_uri42,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_Auri42Character_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_Auri42Character_Statics::ClassParams = {
	&Auri42Character::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_Auri42Character_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_Auri42Character_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Auri42Character_Statics::Class_MetaDataParams), Z_Construct_UClass_Auri42Character_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_Auri42Character()
{
	if (!Z_Registration_Info_UClass_Auri42Character.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Auri42Character.OuterSingleton, Z_Construct_UClass_Auri42Character_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_Auri42Character.OuterSingleton;
}
template<> URI42_API UClass* StaticClass<Auri42Character>()
{
	return Auri42Character::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(Auri42Character);
Auri42Character::~Auri42Character() {}
// End Class Auri42Character

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Admin_Documents_GitHub_uri42_uri42_Source_uri42_uri42Character_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_Auri42Character, Auri42Character::StaticClass, TEXT("Auri42Character"), &Z_Registration_Info_UClass_Auri42Character, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Auri42Character), 1889745271U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Admin_Documents_GitHub_uri42_uri42_Source_uri42_uri42Character_h_1587530850(TEXT("/Script/uri42"),
	Z_CompiledInDeferFile_FID_Users_Admin_Documents_GitHub_uri42_uri42_Source_uri42_uri42Character_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Admin_Documents_GitHub_uri42_uri42_Source_uri42_uri42Character_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
