// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_TileBase.h"
#include "Components/BoxComponent.h"
// Sets default values
ACPP_TileBase::ACPP_TileBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	this->uBoxComp = CreateDefaultSubobject<UBoxComponent>(FName("BoxComp"));
	this->uTileMesh = CreateDefaultSubobject<UStaticMeshComponent>(FName("TitleMesh"));
	
	this->SetRootComponent(this->uBoxComp);
	this->uTileMesh->SetupAttachment(this->uBoxComp);
	
	ConstructorHelpers::FObjectFinder<UStaticMesh>tempMesh(TEXT("/Script/Engine.StaticMesh'/Engine/EngineMeshes/Cube.Cube'"));
	ConstructorHelpers::FObjectFinder<UMaterial>tempMaterial(TEXT("/Script/Engine.Material'/Engine/EngineDebugMaterials/WireframeMaterial.WireframeMaterial'"));

	if (tempMesh.Succeeded())
		this->uTileMesh->SetStaticMesh(tempMesh.Object);
	if (tempMaterial.Succeeded())
		this->uTileMesh->SetMaterial(0, tempMaterial.Object);
}

// Called when the game starts or when spawned
void ACPP_TileBase::BeginPlay()
{
	Super::BeginPlay();

	if (this->uTileMaterial)
		this->uTileMesh->SetMaterial(0, uTileMaterial);
	if (this->uTileStaticMesh)
		this->uTileMesh->SetStaticMesh(this->uTileStaticMesh);
}

// Called every frame
void ACPP_TileBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

