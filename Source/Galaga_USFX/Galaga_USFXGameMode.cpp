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

	// Agrega las clases de las naves enemigas a la lista
	EnemyShipClasses.Add(ANaveEnemigaCaza::StaticClass());
	EnemyShipClasses.Add(ANaveEnemigaTransporte::StaticClass());
	EnemyShipClasses.Add(ANaveEnemigaSuicida::StaticClass());
	EnemyShipClasses.Add(ANaveEnemigaReabastecimiento::StaticClass());
	EnemyShipClasses.Add(ANaveEnemigaProtector::StaticClass());
	EnemyShipClasses.Add(ANaveEnemigaNodriza::StaticClass());
	EnemyShipClasses.Add(ANaveEnemigaJefe::StaticClass());
	EnemyShipClasses.Add(ANaveEnemigaFantasma::StaticClass());
	EnemyShipClasses.Add(ANaveEnemigaEspia::StaticClass());
	// Agrega más clases según sea necesario
}

void AGalaga_USFXGameMode::BeginPlay()
{
	Super::BeginPlay();

	FVector UbicacionInicioNavesEnemigasCaza = FVector(-500.0f, -250.0f, 200.0f);
	FVector UbicacionInicioNavesEnemigasEspia = FVector(-400.0f, -250.0f, 200.0f);
	FVector UbicacionInicioNavesEnemigasFantasma = FVector(-300.0f, -250.0f, 200.0f);
	FVector UbicacionInicioNavesEnemigasJefe = FVector(-200.0f, -250.0f, 200.0f);
	FVector UbicacionInicioNavesEnemigasNodriza = FVector(-100.0f, -250.0f, 200.0f);
	FVector UbicacionInicioNavesEnemigasProtector = FVector(0.0f, -250.0f, 200.0f);
	FVector UbicacionInicioNavesEnemigasReabastecimiento = FVector(100.0f, -250.0f, 200.0f);
	FVector UbicacionInicioNavesEnemigasSuicida = FVector(200.0f, -250.0f, 200.0f);
	FVector UbicacionInicioNavesEnemigasTransporte = FVector(300.0f, -250.0f, 200.0f);

	FRotator rotacionNave = FRotator(0.0f, 0.0f, 0.0f);

	UWorld* const World = GetWorld();
	if (World != nullptr)
	{
		//NaveEnemigaCaza1 = World->SpawnActor<ANaveEnemigaCaza>(UbicacionInicioNavesEnemigasCaza, rotacionNave);
		//NaveEnemigaCaza1->Speed = 10.0f;
		//NaveEnemigaEspia1 = World->SpawnActor<ANaveEnemigaEspia>(UbicacionInicioNavesEnemigasEspia, rotacionNave);
		//NaveEnemigaFantasma1 = World->SpawnActor<ANaveEnemigaFantasma>(UbicacionInicioNavesEnemigasFantasma, rotacionNave);
		//NaveEnemigaJefe1 = World->SpawnActor<ANaveEnemigaJefe>(UbicacionInicioNavesEnemigasJefe, rotacionNave);
		//NaveEnemigaNodriza1 = World->SpawnActor<ANaveEnemigaNodriza>(UbicacionInicioNavesEnemigasNodriza, rotacionNave);
		//NaveEnemigaProtector1 = World->SpawnActor<ANaveEnemigaProtector>(UbicacionInicioNavesEnemigasProtector, rotacionNave);
		//NaveEnemigaReabastecimiento1 = World->SpawnActor<ANaveEnemigaReabastecimiento>(UbicacionInicioNavesEnemigasReabastecimiento, rotacionNave);
		//NaveEnemigaSuicida1 = World->SpawnActor<ANaveEnemigaSuicida>(UbicacionInicioNavesEnemigasSuicida, rotacionNave);
		//NaveEnemigaTransporte1 = World->SpawnActor<ANaveEnemigaTransporte>(UbicacionInicioNavesEnemigasTransporte, rotacionNave);

		 // Genera 30 naves enemigas con cantidades aleatorias de diferentes tipos
		for (int i = 0; i < 6; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				// Selecciona aleatoriamente una clase de nave enemiga
				int32 RandomIndex = FMath::RandRange(0, EnemyShipClasses.Num() - 1);
				TSubclassOf<ANaveEnemiga> EnemyClass = EnemyShipClasses[RandomIndex];

				// Calcula una posición de spawn aleatoria
				FVector SpawnLocation = FVector(i*200, j * 200, 160);
				FRotator SpawnRotation = FRotator::ZeroRotator;

				// Spawnea la nave enemiga
				AActor* NewEnemy = GetWorld()->SpawnActor<AActor>(EnemyClass, SpawnLocation, SpawnRotation);
			}
		}

		/*for (int i = 0; i < 5; i++) {
			FVector PosicionNaveActual = FVector(UbicacionInicioNavesEnemigasCaza.X, UbicacionInicioNavesEnemigasCaza.Y + i * 150, UbicacionInicioNavesEnemigasTransporte.Z);
			ANaveEnemigaCaza* NaveEnemigaCazaTemporal = World->SpawnActor<ANaveEnemigaCaza>(PosicionNaveActual, rotacionNave);
			NaveEnemigaCazaTemporal->Speed = 20.0f;

			TANavesEnemigasCaza.Push(NaveEnemigaCazaTemporal); 
			TANavesEnemigas.Push(NaveEnemigaCazaTemporal); 
		}
		for (int i = 0; i < 5; i++) {
			FVector PosicionNaveActual = FVector(UbicacionInicioNavesEnemigasEspia.X, UbicacionInicioNavesEnemigasEspia.Y + i * 150, UbicacionInicioNavesEnemigasEspia.Z);
			ANaveEnemigaEspia* NaveEnemigaEspiaTemporal = World->SpawnActor<ANaveEnemigaEspia>(PosicionNaveActual, rotacionNave);
			NaveEnemigaEspiaTemporal->Speed = 20.0f;
			TANavesEnemigasEspia.Push(NaveEnemigaEspiaTemporal);
			TANavesEnemigas.Push(NaveEnemigaEspiaTemporal);
		}
		for (int i = 0; i < 5; i++) {
			FVector PosicionNaveActual = FVector(UbicacionInicioNavesEnemigasFantasma.X, UbicacionInicioNavesEnemigasFantasma.Y + i * 150, UbicacionInicioNavesEnemigasFantasma.Z);
			ANaveEnemigaFantasma* NaveEnemigaFantasmaTemporal = World->SpawnActor<ANaveEnemigaFantasma>(PosicionNaveActual, rotacionNave);
			NaveEnemigaFantasmaTemporal->Speed = 20.0f;
			TANavesEnemigasFantasma.Push(NaveEnemigaFantasmaTemporal);
			TANavesEnemigas.Push(NaveEnemigaFantasmaTemporal);
		}*/
	}
}

void AGalaga_USFXGameMode::Tick(float DeltaTime)
{
		Super::Tick(DeltaTime);
}


