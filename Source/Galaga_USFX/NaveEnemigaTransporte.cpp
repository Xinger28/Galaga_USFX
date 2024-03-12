// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaTransporte.h"



ANaveEnemigaTransporte::ANaveEnemigaTransporte()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/Geometry/Meshes/1M_Cube.1M_Cube'"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
}

void ANaveEnemigaTransporte::BeginPlay()
{
	Super::BeginPlay();
}

void ANaveEnemigaTransporte::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	FVector Localizacion = FVector(-300.0f, 800.0f, 160.0f);
	FVector Direction = FVector(-280.0f, 800.0f, 160.0f);
	float distancia = FVector::Dist(Localizacion, FVector(-280.0f, 800.0f, 160.0f));
	float Velocidad = Speed * GetWorld()->DeltaTimeSeconds;

	if (Velocidad > distancia) {

		this->SetActorLocation(Localizacion);
	}
	else {

		this->AddActorWorldOffset(Direction*Velocidad);
	}
}


