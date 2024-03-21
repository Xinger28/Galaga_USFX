// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaReabastecimiento.h"

ANaveEnemigaReabastecimiento::ANaveEnemigaReabastecimiento()
{
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_WideCapsule.Shape_WideCapsule'"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
	RootComponent = mallaNaveEnemiga;
}

void ANaveEnemigaReabastecimiento::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	FVector PosicionActual = GetActorLocation() + FVector(-1, 0, 0) * Speed * DeltaTime;
	SetActorLocation(PosicionActual);
}

void ANaveEnemigaReabastecimiento::Destruccion()
{
}

void ANaveEnemigaReabastecimiento::Cargar()
{
}

void ANaveEnemigaReabastecimiento::Defender()
{
}


