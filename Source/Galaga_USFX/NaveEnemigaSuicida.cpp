// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaSuicida.h"

ANaveEnemigaSuicida::ANaveEnemigaSuicida()
{
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_QuadPyramid.Shape_QuadPyramid'"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
	RootComponent = mallaNaveEnemiga;
}

void ANaveEnemigaSuicida::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector PosicionActual = GetActorLocation();
	float DesplazamientoX = Speed * DeltaTime;

	FVector NuevaPosicion = FVector(PosicionActual.X + DesplazamientoX * -1, PosicionActual.Y , PosicionActual.Z );
	SetActorLocation(NuevaPosicion);

	//este codigo hace que vuelva ala posicion inicial

	if (NuevaPosicion.X < LimiteInferiorX)
	{
		SetActorLocation(FVector(1800.0f, PosicionActual.Y, 160.0f));
	}
}

void ANaveEnemigaSuicida::Ataque()
{
}

void ANaveEnemigaSuicida::Explotar()
{
}
