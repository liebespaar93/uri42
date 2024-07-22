// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CPP_TileFloor.generated.h"

UCLASS()
class URI42_API ACPP_TileFloor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACPP_TileFloor();
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tile")
	FVector TilePosition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tile")
	TMap<FVector ,class ACPP_TileBase* > mTileMaps;

	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "Tile")
	TSubclassOf<class ACPP_TileBase> aTileDefault;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Tile")
	TArray<class ACPP_TileBase*> aTileMapActor;
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	UFUNCTION()
	bool SetTileStyle(FVector Location, ACPP_TileBase* tileActor);
	
	UFUNCTION()
	bool ResetTileStyle(FVector Location);
	
	UFUNCTION()
	bool CreateDefaultTile(FVector Location);
	
	UFUNCTION()
	bool DeleteTile(FVector Location);

	

};
