// Copyright Epic Games, Inc. All Rights Reserved.

#include "Galaga_USFXGameMode.h"
#include "Galaga_USFXPawn.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaCaza.h"
#include "NaveEnemigaEspia.h"
#include "NaveEnemigaFantasma.h"
#include "NaveEnemigaJefe.h"
#include "NaveEnemigaNodriza.h"
#include "NaveEnemigaProtector.h"
#include "NaveEnemigaReabastecimiento.h"
#include "NaveEnemigaSuicida.h"
#include "NaveEnemigaTransporte.h"


AGalaga_USFXGameMode::AGalaga_USFXGameMode()
{
	// set default pawn class to our character class
	PrimaryActorTick.bCanEverTick = true;
	DefaultPawnClass = AGalaga_USFXPawn::StaticClass();
}

void AGalaga_USFXGameMode::BeginPlay()
{
	Super::BeginPlay();

	UWorld* const World = GetWorld();
	if (World != nullptr)
	{
		const int32 NumeroDeColumnasCaza = 2; // N° Columnas
		const int32 NumeroDeFilasCaza = 5;    // N° Filas

		// Generar cierto tipo de naves enemigas en una matriz de columnas y filas
		for (int32 Columna = 0; Columna < NumeroDeColumnasCaza; ++Columna)
		{
			TArray<ANaveEnemigaCaza*> NavesEnColumna;
			for (int32 Fila = 0; Fila < NumeroDeFilasCaza; ++Fila)
			{
				// Definir los vectores de posición y rotación
				FVector SpawningLocation = FVector(Columna * 300 + 300.0f, Fila * 200 + 200.0f, 250.0f); // Posicion inicial de la nave desde la cual se escalan las demás
				FRotator SpawningRotation = FRotator::ZeroRotator; // Rotación inicial (nula)

				// Nave spawneada en el mundo y siendo incluida en el TArray
				ANaveEnemigaCaza* NuevaNaveCaza = GetWorld()->SpawnActor<ANaveEnemigaCaza>(SpawningLocation, SpawningRotation);
				NavesEnColumna.Add(NuevaNaveCaza);
			}
			// Agregar el TArray al TMap
			ColumnaNavesEnemigasCaza.Add(Columna, NavesEnColumna);
		}
        
	}
}

void AGalaga_USFXGameMode::Tick(float DeltaTime)
{
		Super::Tick(DeltaTime);
}


