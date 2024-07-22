// Fill out your copyright notice in the Description page of Project Settings.


#include "FolderInWolrdOutliner.h"

#include "EditorActorFolders.h"
#include "Editor/EditorEngine.h"

FFolder UFolderInWolrdOutliner::ToFolder(FString FolderPath)
{
	
	if (GEditor == nullptr)
	{
		return FFolder();
	}

	UWorld* World = GEditor->GetEditorWorldContext().World();

	FFolder::FRootObject FolderRoot = FFolder::GetWorldRootFolder(World).GetRootObject();

	return FFolder(FolderRoot, *FolderPath);
}

void UFolderInWolrdOutliner::CreateFolderInWorld(FString FolderPath, bool& bOutSuccess, FString& OutInfoMessage)
{
	if (GEditor == nullptr)
	{
		bOutSuccess = false;
		OutInfoMessage = FString::Printf(TEXT("Create Folder In World Failed - GEditor Null '%s'"), *FolderPath);
		return;
	}
	UWorld* World = GEditor->GetEditorWorldContext().World();

	FFolder FolderToCreate = ToFolder(FolderPath);

	FActorFolders::Get().CreateFolder(*World, FolderToCreate);

	World->MarkPackageDirty();

	bOutSuccess = true;

	OutInfoMessage = FString::Printf(TEXT("Create Folder In World Succeeded - '%s'"), *FolderPath);
}

void UFolderInWolrdOutliner::MoveActorInWorldFolder(AActor* Actor, FString FolderPath, bool& bOutSuccess, FString& OutInfoMessage)
{
	if (Actor == nullptr)
	{
		bOutSuccess = false;
		OutInfoMessage = FString::Printf(TEXT("Move Actor In World Folder Failed - Actor is not valid '%s'"), *FolderPath);
		return;
	}
	
	Actor->SetFolderPath_Recursively(*FolderPath);

	Actor->GetWorld()->MarkPackageDirty();

	bOutSuccess = true;
	
	OutInfoMessage = FString::Printf(TEXT("Move Actor In World Folder Succeeded - '%s'"), *FolderPath);
}

TArray<FString> UFolderInWolrdOutliner::GetAllFoldersUnderFolder(FString FolderPath, bool bRecursive, bool& bOutSuccess, FString& OutInfoMessage)
{
	if (GEditor == nullptr)
	{
		bOutSuccess = false;
		OutInfoMessage = FString::Printf(TEXT("Create Folder In World Failed - GEditor Null '%s'"), *FolderPath);
		return TArray<FString>();
	}
	UWorld* World = GEditor->GetEditorWorldContext().World();

	FolderPath = ToFolder(FolderPath).ToString();

	TArray<FString> Folders;

	FActorFolders::Get().ForEachFolder(*World, [&Folders, &FolderPath, &bRecursive] (const FFolder& Folder)
		{
			if ((Folder.ToString() != FolderPath) && Folder.ToString().Contains(FolderPath))
			{
				if (bRecursive || Folder.GetParent().ToString() == FolderPath)
				{
					Folders.Add(Folder.ToString());
				}
			}
			return true;
		}
	);
	bOutSuccess = true;
	OutInfoMessage = FString::Printf(TEXT("Get All Folders Under FolderSucceeded - '%s'"), *FolderPath);

	return Folders;
}

TArray<AActor*> UFolderInWolrdOutliner::GetAllActorsUnderFolder(FString FolderPath, bool bRecursive, bool& bOutSuccess, FString& OutInfoMessage)
{
	if (GEditor == nullptr)
	{
		bOutSuccess = false;
		OutInfoMessage = FString::Printf(TEXT("Create Folder In World Failed - GEditor Null '%s'"), *FolderPath);
		return TArray<AActor*>();
	}
	UWorld* World = GEditor->GetEditorWorldContext().World();

	TArray<FName> Folders = TArray<FName>({*FolderPath});

	if (bRecursive)
	{
		Folders.Append(UFolderInWolrdOutliner::GetAllFoldersUnderFolder(FolderPath, true, bOutSuccess, OutInfoMessage));
	}
	
	TArray<AActor*> Actors;
	FActorFolders::Get().GetActorsFromFolders(*World, Folders, Actors);

	bOutSuccess = true;
	OutInfoMessage = FString::Printf(TEXT("Get All Actors Under Folder Succeeded - '%s'"), *FolderPath);

	return Actors;
}

void UFolderInWolrdOutliner::DeleteFolderFromWorld(FString FolderPath, bool& bOutSuccess, FString& OutInfoMessage)
{
	if (GEditor == nullptr)
	{
		bOutSuccess = false;
		OutInfoMessage = FString::Printf(TEXT("Create Folder In World Failed - GEditor Null '%s'"), *FolderPath);
		return ;
	}
	UWorld* World = GEditor->GetEditorWorldContext().World();

	 FFolder FOlderToDelete = ToFolder(FolderPath);

	 TArray<AActor*> Actors = UFolderInWolrdOutliner::GetAllActorsUnderFolder(FolderPath, true, bOutSuccess, OutInfoMessage);

	 for (AActor* Actor : Actors)
	 {
		FFolder OldFolder = ToFolder(Actor->GetFolderPath().ToString());
		FFolder NewFolder = ToFolder(OldFolder.ToString().Replace(*FOlderToDelete.ToString(), *FOlderToDelete.GetParent().ToString()));
		UFolderInWolrdOutliner::MoveActorInWorldFolder(Actor, NewFolder.ToString(), bOutSuccess, OutInfoMessage);
	 }

	 TArray<FString> Paths = UFolderInWolrdOutliner::GetAllFoldersUnderFolder(FolderPath, true, bOutSuccess, OutInfoMessage);


	 for (FString Path : Paths)
	 {
		 FFolder OldFolder = ToFolder(Path);
		 FFolder NewFolder = ToFolder(OldFolder.ToString().Replace(*FOlderToDelete.ToString(), *FOlderToDelete.GetParent().ToString()));
		 FActorFolders::Get().RenameFolderInWorld(*World, OldFolder, NewFolder);
	 }

	 FActorFolders::Get().DeleteFolder(*World, FOlderToDelete);

	 World->MarkPackageDirty();

	 bOutSuccess = true;
	 OutInfoMessage = FString::Printf(TEXT("Delete Folder From World Succeeded - '%s'"), *FolderPath);
}
