// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;

public class RuntimeBlueprints : ModuleRules
{
	public RuntimeBlueprints(ReadOnlyTargetRules Target) : base(Target)
	{
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        PrivatePCHHeaderFile = "Public/RuntimeBpPCH.h";

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "JSON", "JsonUtilities", "InputCore", "UMG" });

        PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

        // Uncomment if you are using online features
        // PrivateDependencyModuleNames.Add("OnlineSubsystem");
    }
}
