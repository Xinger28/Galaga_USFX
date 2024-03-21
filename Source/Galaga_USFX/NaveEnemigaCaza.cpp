// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaCaza.h"

ANaveEnemigaCaza::ANaveEnemigaCaza()
{
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
}

void ANaveEnemigaCaza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	FVector PosicionActual = GetActorLocation() + FVector(-1, 0, 0) * Speed * DeltaTime;
	SetActorLocation(PosicionActual);
}

void ANaveEnemigaCaza::Ataque()
{
}

void ANaveEnemigaCaza::Destruccion()
{
}
