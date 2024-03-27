// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaCazaNv2.h"

ANaveEnemigaCazaNv2::ANaveEnemigaCazaNv2()
{
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
	RootComponent = mallaNaveEnemiga;
}

void ANaveEnemigaCazaNv2::Tick(float DeltaTime)
{
		Super::Tick(DeltaTime);
}

void ANaveEnemigaCazaNv2::Ataque()
{

}
