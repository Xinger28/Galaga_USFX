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
	FVector PosicionActual = GetActorLocation() + FVector(-1, -1, 0) * Speed * DeltaTime;
	SetActorLocation(PosicionActual);
	Speed = 30.0f;
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
