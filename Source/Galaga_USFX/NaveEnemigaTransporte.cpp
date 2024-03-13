// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaTransporte.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"


ANaveEnemigaTransporte::ANaveEnemigaTransporte()
{
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/Geometry/Meshes/1M_Cube.1M_Cube'"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
	RootComponent = mallaNaveEnemiga;
}

void ANaveEnemigaTransporte::BeginPlay()
{
	Super::BeginPlay();
}

void ANaveEnemigaTransporte::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	/*FVector NewLocation = GetActorLocation() + FVector(-1, 0, 0) * Speed * DeltaTime;
	SetActorLocation(NewLocation);*/

}