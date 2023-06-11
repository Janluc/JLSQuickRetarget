// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class JLSQuickRetarget : ModuleRules
{
	public JLSQuickRetarget(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicIncludePaths.AddRange(
			new string[] {
				System.IO.Path.GetFullPath(Target.RelativeEnginePath) + "Source/Editor/Blutility/Private",
				
				// ... add public include paths required here ...
			}
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
				// ... add other private include paths required here ...
			}
			);
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core", "Blutility", "IKRig", "IKRigEditor", "UMG", "UnrealEd"
				// ... add other public dependencies that you statically link with here ...
			}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
				"IKRig",
				"UnrealEd", 
				"EditorScriptingUtilities", 
				
				// ... add private dependencies that you statically link with here ...	
			}
			);
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);
	}
}
