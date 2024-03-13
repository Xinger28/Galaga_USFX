// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaSuicida.h"

ANaveEnemigaSuicida::ANaveEnemigaSuicida()
{
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_QuadPyramid.Shape_QuadPyramid'"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
	RootComponent = mallaNaveEnemiga;
}

void ANaveEnemigaSuicida::BeginPlay()
{
	Super::BeginPlay();
}

void ANaveEnemigaSuicida::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ANaveEnemigaSuicida::Ataque()
{
}

void ANaveEnemigaSuicida::Explotar()
{
}
