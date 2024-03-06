// Copyright Epic Games, Inc. All Rights Reserved.

#include "Galaga_USFXGameMode.h"
#include "Galaga_USFXPawn.h"
#include "NaveEnemiga.h"

AGalaga_USFXGameMode::AGalaga_USFXGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AGalaga_USFXPawn::StaticClass();

	NaveEnemiga1 = nullptr;
}

void AGalaga_USFXGameMode::BeginPlay()
{
	Super::BeginPlay();

	FVector ubicacionNave = FVector(-900.0f, 50.0f, 250.0f);
	FRotator rotacionNave = FRotator(0.0f, 0.0f, 0.0f);

	UWorld* const World = GetWorld();
	if (World != nullptr)
	{
		// spawn the projectile
		NaveEnemiga1 = World->SpawnActor<ANaveEnemiga>(ubicacionNave, rotacionNave);
	}

	NaveEnemiga1->SetPosicion(FVector(2000.0f, 0.0f, 120.0f));

}


