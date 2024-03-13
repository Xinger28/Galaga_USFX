// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaCaza.h"

ANaveEnemigaCaza::ANaveEnemigaCaza()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
}

void ANaveEnemigaCaza::BeginPlay()
{
	Super::BeginPlay();
}

void ANaveEnemigaCaza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ANaveEnemigaCaza::ataque()
{
}

void ANaveEnemigaCaza::Destruccion()
{
}
