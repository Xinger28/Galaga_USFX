// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaProtector.h"

ANaveEnemigaProtector::ANaveEnemigaProtector()
{
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Tube.Shape_Tube'"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
	RootComponent = mallaNaveEnemiga;
}

void ANaveEnemigaProtector::BeginPlay()
{
	Super::BeginPlay();
}

void ANaveEnemigaProtector::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
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
