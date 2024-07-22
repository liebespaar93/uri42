// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FolderInWolrdOutliner.generated.h"

/**
 * 
 */
UCLASS()
class URI42_API UFolderInWolrdOutliner : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

private:
	static FFolder ToFolder(FString FolderPath);

public:
	UFUNCTION(BlueprintCallable, Category = "Folder")
	static void CreateFolderInWorld(FString FolderPath, bool& bOutSuccess, FString& OutInfoMessage);
	
	UFUNCTION(BlueprintCallable, Category = "Folder")
	static void MoveActorInWorldFolder(AActor* Actor, FString FolderPath, bool& bOutSuccess, FString& OutInfoMessage);

	UFUNCTION(BlueprintCallable, Category = "Folder")
	static TArray<FString> GetAllFoldersUnderFolder(FString FolderPath, bool bRecursive, bool& bOutSuccess, FString& OutInfoMessage);

	UFUNCTION(BlueprintCallable, Category = "Folder")
	static TArray<AActor*> GetAllActorsUnderFolder(FString FolderPath, bool bRecursive, bool& bOutSuccess, FString& OutInfoMessage);

	UFUNCTION(BlueprintCallable, Category = "Folder")
	static void DeleteFolderFromWorld(FString FolderPath, bool& bOutSuccess, FString& OutInfoMessage);

};
