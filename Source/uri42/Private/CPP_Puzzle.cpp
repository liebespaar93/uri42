// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_Puzzle.h"
#include "Components/ChildActorComponent.h"
#include "CPP_Piece.h"
#include <FolderInWolrdOutliner.h>

// Sets default values
ACPP_Puzzle::ACPP_Puzzle()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BP_Pieces = TArray<ACPP_Piece*>();
}

// Called when the game starts or when spawned
void ACPP_Puzzle::BeginPlay()
{
	Super::BeginPlay();
	

// 	int i = 0;
// 	for (UStaticMesh* Piece : Pieces)
// 	{
// 		FString pieceName = "Piece_";
// 		pieceName += FString::FromInt(i);
// 		i++;
// 		ACPP_Piece* Piece = GetWorld()->SpawnActor<ACPP_Piece>(ClassOfPiece);
// 
// 		ChildActors.Add(CreateDefaultSubobject<UChildActorComponent>(TEXT("Puece", "2")));
// 		
// 	}

	this->SettingFolderPieces();

}

// Called every frame
void ACPP_Puzzle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACPP_Puzzle::SettingFolderPieces()
{
	bool success;
	FString printout;
	TArray<AActor*> Pieces = UFolderInWolrdOutliner::GetAllActorsUnderFolder(this->FolderName, false, success, printout);
	UE_LOG(LogTemp, Warning, TEXT("%s"), *FString(printout));
	for (AActor* Piece : Pieces)
	{
		printout = Piece->GetName();
		UE_LOG(LogTemp, Warning, TEXT("%s"), *FString(printout));
		if (Piece->IsA<ACPP_Piece>())
		{
			ACPP_Piece* tempPiece = Cast<ACPP_Piece>(Piece);
			BP_Pieces.Add(tempPiece);
			UE_LOG(LogTemp, Warning, TEXT("%s"), *FString(tempPiece->GetName()));
			// GetWorld()->SpawnActor<ACPP_Piece>(ACPP_Piece::ACPP_Piece(),this->GetActorTransform());
		}
	}
}

bool ACPP_Puzzle::CheckPuzzleFinsh()
{
	return true;
}

