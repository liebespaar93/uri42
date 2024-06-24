// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeuri42_init() {}
	URI42_API UFunction* Z_Construct_UDelegateFunction_uri42_OnPickUp__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_uri42;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_uri42()
	{
		if (!Z_Registration_Info_UPackage__Script_uri42.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_uri42_OnPickUp__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/uri42",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x31B5C1AD,
				0x2F5BD7EC,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_uri42.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_uri42.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_uri42(Z_Construct_UPackage__Script_uri42, TEXT("/Script/uri42"), Z_Registration_Info_UPackage__Script_uri42, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x31B5C1AD, 0x2F5BD7EC));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
