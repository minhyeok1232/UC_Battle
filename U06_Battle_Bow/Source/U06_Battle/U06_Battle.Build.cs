// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class U06_Battle : ModuleRules
{
	public U06_Battle(ReadOnlyTargetRules Target) : base(Target)
	{
		// *.pch : pre compiled header, framework.h
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
		// ������丮�׿�  ��� ���� ����
		PublicIncludePaths.Add(ModuleDirectory);
		// #pragma(library)
		PublicDependencyModuleNames.Add("Core");
		PublicDependencyModuleNames.Add("CoreUObject");
		PublicDependencyModuleNames.Add("Engine");
		PublicDependencyModuleNames.Add("InputCore");

		// �߰�
		PublicDependencyModuleNames.Add("Niagara");      
		PublicDependencyModuleNames.Add("AIModule");
		PublicDependencyModuleNames.Add("GameplayTasks");
		PublicDependencyModuleNames.Add("NavigationSystem");

		PublicDependencyModuleNames.Add("ProceduralMeshComponent");  // �޽��� ��


		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
