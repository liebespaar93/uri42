// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_Piece.h"

// Sets default values
ACPP_Piece::ACPP_Piece()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	this->PieceRootComponent = CreateDefaultSubobject<USceneComponent>(FName("PieceRootComponent"));
	this->PieceStaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(FName("PieceStaticMesh"));
	
	this->SetRootComponent(this->PieceRootComponent);
	this->PieceStaticMesh->SetupAttachment(this->PieceRootComponent);

	ConstructorHelpers::FObjectFinder<UMaterial> TempMaterial(TEXT("/Script/Engine.Material'/Engine/EngineDebugMaterials/WireframeMaterial.WireframeMaterial'"));
	if (TempMaterial.Succeeded())
	{
		FLinearColor tempColor;
		tempColor.G = 255;
		TempMaterial.Object->SetVectorParameterValueEditorOnly(FName("SkeletonColor"), tempColor);
	}
}

// Called when the game starts or when spawned
void ACPP_Piece::BeginPlay()
{
	Super::BeginPlay();

	this->PieceStaticMesh->SetStaticMesh(this->PieceMesh);
	this->PieceStaticMesh->SetSimulatePhysics(true);
	this->PieceStaticMesh->SetEnableGravity(true);

	this->PieceStaticMesh->OnComponentHit.__Internal_AddDynamic(this, &ACPP_Piece::OnMyComponetHit, FName("OnMyComponetHit"));
}


// bool ACPP_Piece::operator==(ACPP_Piece &Other)
// {
// 	if (Other == *this)
// 		return true;
// 	return false;
// }

// Called every frame
void ACPP_Piece::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

bool ACPP_Piece::FindStickPiece()
{
	return false;
}

bool ACPP_Piece::IsStick(ACPP_Piece *OtherPiece)
{


	float diffLoc = DiffLocation(this, OtherPiece);
	float diffRot = DiffRotation(this, OtherPiece);

	UE_LOG(LogTemp, Warning, TEXT("Diff Location : %f"), diffLoc);
	UE_LOG(LogTemp, Warning, TEXT("Diff Rotation : %f"), diffRot);
	if (diffLoc > 3.0f)
		return false;
	if (diffRot > 30.0f)
		return false;
	return true;
}

float ACPP_Piece::DiffLocation(ACPP_Piece* OwnPiece, ACPP_Piece* OtherPiece)
{
	
	FVector dir = OwnPiece->GetActorLocation() - OtherPiece->GetActorLocation();
	float diffFloatValue = fabs(dir.X) + fabs(dir.Y) + fabs(dir.Z);

	return diffFloatValue;
}


float ACPP_Piece::DiffRotation(ACPP_Piece* OwnPiece, ACPP_Piece* OtherPiece)
{

	FRotator dir = OwnPiece->GetActorRotation() - OtherPiece->GetActorRotation();
	float diffFloatValue = fabs(dir.Pitch) + fabs(dir.Roll) + fabs(dir.Yaw);

	return diffFloatValue;
}


void ACPP_Piece::StickPiece(ACPP_Piece *OtherPiece)
{
	if (this->IsStick(OtherPiece))
		OtherPiece->AttachToActor(this, FAttachmentTransformRules(EAttachmentRule::KeepRelative, true));
}

void ACPP_Piece::OnMyComponetHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	UE_LOG(LogTemp, Warning, TEXT("OnMyComponetHit"));
	if (OtherActor->IsA<ACPP_Piece>())
	{
		ACPP_Piece *TempPiece = Cast<ACPP_Piece>(OtherActor);
		if (IsStick(TempPiece))
		{
			UE_LOG(LogTemp, Warning, TEXT("Is stick"));
		}
	}
}
void ACPP_Piece::NotifyActorBeginOverlap(AActor* OtherActor)
{
	UE_LOG(LogTemp, Warning, TEXT("Is NotifyActorBeginOverlap"));
}
// void ACPP_Piece::DispatchPhysicsCollisionHit(
// const FRigidBodyCollisionInfo& MyInfo, 
// const FRigidBodyCollisionInfo& OtherInfo, 
// const FCollisionImpactData& RigidCollisionData)
// {
// 	UE_LOG(LogTemp, Warning, TEXT("test"));
// }
