// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaJefe.h"

ANaveEnemigaJefe::ANaveEnemigaJefe()
{
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cylinder.Shape_Cylinder'"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
	RootComponent = mallaNaveEnemiga;

}

void ANaveEnemigaJefe::BeginPlay()
{
	Super::BeginPlay();
}

void ANaveEnemigaJefe::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ANaveEnemigaJefe::Ataque()
{
}

void ANaveEnemigaJefe::Destruccion()
{
}
