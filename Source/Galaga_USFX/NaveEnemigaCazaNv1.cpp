// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaCazaNv1.h"

ANaveEnemigaCazaNv1::ANaveEnemigaCazaNv1()
{
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
	RootComponent = mallaNaveEnemiga;

}

void ANaveEnemigaCazaNv1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ANaveEnemigaCazaNv1::Ataque()
{
}
