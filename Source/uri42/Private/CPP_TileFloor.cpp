// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_TileFloor.h"
#include "CPP_TileBase.h"

// Sets default values
ACPP_TileFloor::ACPP_TileFloor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ACPP_TileFloor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACPP_TileFloor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

bool ACPP_TileFloor::SetTileStyle(FVector Location, ACPP_TileBase* tileActor)
{
	if(!mTileMaps[Location])
		return false;

	ACPP_TileBase *tempTile = GetWorld()->SpawnActor<ACPP_TileBase>(this->aTileDefault, TilePosition, FRotator(0));
	tempTile->uBoxComp = tileActor->uBoxComp;
	tempTile->uTileMesh = tileActor->uTileMesh;
	this->mTileMaps[Location] = tempTile;
	return true;
}

bool ACPP_TileFloor::ResetTileStyle(FVector Location)
{
	if (!mTileMaps[Location])
		return false;
	this->mTileMaps[Location]->Destroy();
	ACPP_TileBase* tempTile = GetWorld()->SpawnActor<ACPP_TileBase>(this->aTileDefault, TilePosition, FRotator(0));
	this->mTileMaps[Location] = tempTile;
	return true;
}

bool ACPP_TileFloor::CreateDefaultTile(FVector Location)
{
	if (!mTileMaps[Location])
		return false;
	ACPP_TileBase* tempTile = GetWorld()->SpawnActor<ACPP_TileBase>(this->aTileDefault, TilePosition, FRotator(0));
	this->mTileMaps[Location] = tempTile;
	return true;
}

bool ACPP_TileFloor::DeleteTile(FVector Location)
{
	if (!mTileMaps[Location])
		return false;
	this->mTileMaps[Location]->Destroy();
	return true;
}

