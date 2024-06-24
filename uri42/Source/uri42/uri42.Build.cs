// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class uri42 : ModuleRules
{
	public uri42(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
