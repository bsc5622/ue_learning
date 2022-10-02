// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ue_learning : ModuleRules
{
	public ue_learning(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
