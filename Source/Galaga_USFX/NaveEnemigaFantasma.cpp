// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaFantasma.h"

ANaveEnemigaFantasma::ANaveEnemigaFantasma()
{
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_NarrowCapsule.Shape_NarrowCapsule'"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
	RootComponent = mallaNaveEnemiga;

}

void ANaveEnemigaFantasma::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	FVector PosicionActual = GetActorLocation();
	float DesplazamientoX = Speed * DeltaTime;

	FVector NuevaPosicion = FVector(PosicionActual.X + DesplazamientoX * -1, PosicionActual.Y-1, PosicionActual.Z);
	SetActorLocation(NuevaPosicion);

	//este codigo hace que vuelva ala posicion inicial

	if (NuevaPosicion.X < LimiteInferiorX)
	{
		SetActorLocation(FVector(1800.0f, 0.0f, 160.0f));
	}
}

void ANaveEnemigaFantasma::Ataque()
{
}

void ANaveEnemigaFantasma::Destruccion()
{
}

void ANaveEnemigaFantasma::Desaparecer()
{
}
