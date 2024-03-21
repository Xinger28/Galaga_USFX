// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaJefe.h"

ANaveEnemigaJefe::ANaveEnemigaJefe()
{
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cylinder.Shape_Cylinder'"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
	RootComponent = mallaNaveEnemiga;

}

void ANaveEnemigaJefe::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	FVector PosicionActual = GetActorLocation();
	float DesplazamientoX = Speed * DeltaTime;

	FVector NuevaPosicion = FVector(PosicionActual.X + DesplazamientoX * -1, PosicionActual.Y, PosicionActual.Z+1);
	SetActorLocation(NuevaPosicion);

	//este codigo hace que vuelva ala posicion inicial

	if (NuevaPosicion.X < LimiteInferiorX)
	{
		SetActorLocation(FVector(1800.0f, 0.0f, 160.0f));
	}
}

void ANaveEnemigaJefe::Ataque()
{
}

void ANaveEnemigaJefe::Destruccion()
{
}
