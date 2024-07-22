// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GeometryCollection/GeometryCollectionActor.h"
#include "CPP_Piece.generated.h"
UCLASS()
class URI42_API ACPP_Piece : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACPP_Piece();

	FTransform RelativeTransform;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USceneComponent*PieceRootComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent *PieceStaticMesh;
	

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="piece")
	UStaticMesh *PieceMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="piece")
	UMaterial *PieceMaterial;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
// 
// 	FORCEINLINE bool operator==(ACPP_Piece &Other);
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<ACPP_Piece*> CrossPieces;

	UFUNCTION()
	bool FindStickPiece();

	UFUNCTION()
	bool IsStick(ACPP_Piece *OtherPiece);

	UFUNCTION()
	void StickPiece(ACPP_Piece *OtherPiece);
	


	UFUNCTION()
	float DiffLocation(ACPP_Piece *OwnPiece, ACPP_Piece *OtherPiece);
	UFUNCTION()
	float DiffRotation(ACPP_Piece* OwnPiece, ACPP_Piece* OtherPiece);
	
	UFUNCTION()
	void OnMyComponetHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit );



	UFUNCTION()
	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;

// 	UFUNCTION()
// 	virtual void DispatchPhysicsCollisionHit(
// 		const struct FRigidBodyCollisionInfo& MyInfo,
// 		const struct FRigidBodyCollisionInfo& OtherInfo,
// 		const FCollisionImpactData& RigidCollisionData
// 	) override;



// 	UFUNCTION()
// 	void OnMyComponentBeginOverlap(
// 		UPrimitiveComponent* OverlappedComponent, 
// 		AActor* OtherActor, 
// 		UPrimitiveComponent* OtherComp, 
// 		int32 OtherBodyIndex, 
// 		bool bFromSweep, 
// 		const FHitResult& SweepResult
// 	);
};
