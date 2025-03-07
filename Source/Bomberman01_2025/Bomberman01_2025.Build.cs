// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Bomberman01_2025 : ModuleRules
{
	public Bomberman01_2025(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
