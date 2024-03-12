// Copyright Epic Games, Inc. All Rights Reserved.

#include "Galaga_USFXGameMode.h"
#include "Galaga_USFXPawn.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaCaza.h"
#include "NaveEnemigaTransporte.h"
#include "NaveEnemigaEspia.h"
#include "NaveEnemigaJefe.h"
#include "NaveEnemigaNodriza.h"
#include "NaveEnemigaProtector.h"
#include "NaveEnemigaReabastecimiento.h"
#include "NaveEnemigaSuicida.h"
#include "NaveEnemigaFantasma.h"

AGalaga_USFXGameMode::AGalaga_USFXGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AGalaga_USFXPawn::StaticClass();

	//NaveEnemiga1 = nullptr;
}

void AGalaga_USFXGameMode::BeginPlay()
{
	Super::BeginPlay();

	FVector ubicacionNave1 = FVector(-300.0f, 800.0f, 160.0f);
	FVector ubicacionNave2 = FVector(-300.0f, 600.0f, 160.0f);
	FVector ubicacionNave3 = FVector(-300.0f, 400.0f, 160.0f);
	FVector ubicacionNave4 = FVector(-300.0f, 200.0f, 160.0f);
	FVector ubicacionNave5 = FVector(-300.0f, 0.0f, 160.0f);
	FVector ubicacionNave6 = FVector(-300.0f, -200.0f, 160.0f);
	FVector ubicacionNave7 = FVector(-300.0f, -400.0f, 160.0f);
	FVector ubicacionNave8 = FVector(-300.0f, -600.0f, 160.0f);
	FVector ubicacionNave9 = FVector(-300.0f, -800.0f, 160.0f);

	FRotator rotacionNave = FRotator(0.0f, 0.0f, 0.0f);

	UWorld* const World = GetWorld();
	if (World != nullptr)
	{
		// spawn the projectile
		/*NaveEnemigaTransporte1 = World->SpawnActor<ANaveEnemigaTransporte>(ubicacionNave1, rotacionNave);
		NaveEnemigaTransporte1->Speed = 11.0f;*/
	ANaveEnemigaTransporte* NuevaNaveEnemigaTransporte= World->SpawnActor<ANaveEnemigaTransporte>(ubicacionNave1, rotacionNave);
	NuevaNaveEnemigaTransporte->Speed = 10.0f;
		NaveEnemigaCaza1 = World->SpawnActor<ANaveEnemigaCaza>(ubicacionNave2, rotacionNave);
		NaveEnemigaEspia1 = World->SpawnActor<ANaveEnemigaEspia>(ubicacionNave3, rotacionNave);
		NaveEnemigaJefe1 = World->SpawnActor<ANaveEnemigaJefe>(ubicacionNave4, rotacionNave);
		NaveEnemigaNodriza1 = World->SpawnActor<ANaveEnemigaNodriza>(ubicacionNave5, rotacionNave);
		NaveEnemigaProtector1 = World->SpawnActor<ANaveEnemigaProtector>(ubicacionNave6, rotacionNave);
		NaveEnemigaReabastecimiento1 = World->SpawnActor<ANaveEnemigaReabastecimiento>(ubicacionNave7, rotacionNave);
		NaveEnemigaSuicida1 = World->SpawnActor<ANaveEnemigaSuicida>(ubicacionNave8, rotacionNave);
		NaveEnemigaFantasma1 = World->SpawnActor<ANaveEnemigaFantasma>(ubicacionNave9, rotacionNave);
	}

	NaveEnemigaCaza1->SetPosicion(FVector(-500.0f, 500.0f, 200.0f));
	//NaveEnemigaTransporte1->SetPosicion(FVector(500.0f, -500.0f, 200.0f));*/
	NaveEnemigaEspia1->SetPosicion(FVector(400.0f, -500.0f, 200.0f));
	NaveEnemigaJefe1->SetPosicion(FVector(300.0f, 500.0f, 200.0f));
	NaveEnemigaNodriza1->SetPosicion(FVector(200.0f, -500.0f, 200.0f));
	NaveEnemigaProtector1->SetPosicion(FVector(100.0f, 500.0f, 200.0f));
	NaveEnemigaReabastecimiento1->SetPosicion(FVector(-100.0f, -500.0f, 200.0f));
	NaveEnemigaSuicida1->SetPosicion(FVector(-200.0f, 500.0f, 200.0f));
	NaveEnemigaFantasma1->SetPosicion(FVector(-100.0f, 500.0f, 200.0f));
}


