// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaEspia.h"

ANaveEnemigaEspia::ANaveEnemigaEspia()
{
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
	RootComponent = mallaNaveEnemiga;
}

void ANaveEnemigaEspia::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//FVector PosicionActual = GetActorLocation() + FVector(-1, 0, 0) * Speed * DeltaTime;
	//SetActorLocation(PosicionActual);
}

void ANaveEnemigaEspia::Destruccion()
{
}

void ANaveEnemigaEspia::Retirada()
{
}

void ANaveEnemigaEspia::Camuflaje()
{
}
