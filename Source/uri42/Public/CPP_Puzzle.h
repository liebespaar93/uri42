// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CPP_Puzzle.generated.h"

UCLASS()
class URI42_API ACPP_Puzzle : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACPP_Puzzle();
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="piece")
	FString FolderName = "Pieces";

	TArray<class ACPP_Piece*> BP_Pieces;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void SettingFolderPieces();

	UFUNCTION()
	bool CheckPuzzleFinsh();

};
