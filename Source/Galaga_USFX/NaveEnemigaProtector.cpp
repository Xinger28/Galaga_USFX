// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaProtector.h"

ANaveEnemigaProtector::ANaveEnemigaProtector()
{
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Tube.Shape_Tube'"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
	RootComponent = mallaNaveEnemiga;
}

void ANaveEnemigaProtector::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	FVector PosicionActual = GetActorLocation();
	float DesplazamientoX = Speed * DeltaTime;

	FVector NuevaPosicion = FVector(PosicionActual.X + DesplazamientoX * -1, PosicionActual.Y - 1, PosicionActual.Z + 1);
	SetActorLocation(NuevaPosicion);

	//este codigo hace que vuelva ala posicion inicial

	if (NuevaPosicion.X < LimiteInferiorX)
	{
		SetActorLocation(FVector(1800.0f, 0.0f , 160.0f));
	}
}

void ANaveEnemigaProtector::Defender()
{
}

void ANaveEnemigaProtector::Destruccion()
{
}

void ANaveEnemigaProtector::Cargar()
{
}
