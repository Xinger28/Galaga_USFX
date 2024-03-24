// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaCaza.h"
#include "ProyectilEnemigo.h"

ANaveEnemigaCaza::ANaveEnemigaCaza()
{
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
    
	DistanciaDisparo = 1000.0f;
	
}

void ANaveEnemigaCaza::BeginPlay()
{
	Super::BeginPlay();

}

void ANaveEnemigaCaza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	FVector PosicionActual = GetActorLocation();
	float DesplazamientoX = Speed * DeltaTime;

	FVector NuevaPosicion = FVector(PosicionActual.X + DesplazamientoX * -1, PosicionActual.Y, PosicionActual.Z);
	SetActorLocation(NuevaPosicion);

	//este codigo hace que vuelva ala posicion inicial

	if (NuevaPosicion.X < LimiteInferiorX)
	{
		SetActorLocation(FVector(1800.0f, PosicionActual.Y, 160.0f));
	}

	static const float TiempoEntreDisparos = 1.0f;
	static float TiempoTranscurrido = 0.0f;

	TiempoTranscurrido += DeltaTime;
	if (TiempoTranscurrido >= TiempoEntreDisparos)
	{
		Disparar();
		TiempoTranscurrido = 0.0f;
	}


}

void ANaveEnemigaCaza::Disparar()
{
	FVector SpawnLocation = GetActorLocation() + GetActorForwardVector() * 1;
	FRotator SpawnRotation = GetActorRotation();
	AActor* NewProyectil = GetWorld()->SpawnActor<AProyectilEnemigo>(SpawnLocation, SpawnRotation);
}

void ANaveEnemigaCaza::Ataque()
{
}

void ANaveEnemigaCaza::Destruccion()
{
}