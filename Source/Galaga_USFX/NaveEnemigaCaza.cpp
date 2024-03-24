// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaCaza.h"
#include "Engine/World.h"
#include "Galaga_USFXProjectile.h"

ANaveEnemigaCaza::ANaveEnemigaCaza()
{
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
    
	/*TiempoEntreDisparos = 2.0f;
	TiempoUltimoDisparo = 0.0f;*/
	//DistanciaDisparo = 1000.0f;
	
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

	static const float TiempoEntreDisparos = 2.0f;
	static float TiempoTranscurrido = 100.0f;

	TiempoTranscurrido += DeltaTime;
	if (TiempoTranscurrido >= TiempoEntreDisparos)
	{
		Disparar();
		TiempoTranscurrido = 0.0f;
	}
	if (NuevaPosicion.X < LimiteInferiorX)
	{
		SetActorLocation(FVector(1800.0f, PosicionActual.Y, 160.0f));
	}


	//if (GetWorld()->GetTimeSeconds() - TiempoUltimoDisparo > TiempoUltimoDisparo)
	//{
	//	Disparar(); // Llama al método de disparo
	//	TiempoUltimoDisparo = GetWorld()->GetTimeSeconds(); // Actualiza el tiempo del último disparo
	//}
	

}

void ANaveEnemigaCaza::Disparar()
{

	FVector SpawnLocation = GetActorLocation() + GetActorForwardVector() * 100;

	FRotator SpawnRotation = GetActorRotation();
	AActor* NewProyectil = GetWorld()->SpawnActor<AGalaga_USFXProjectile>(SpawnLocation, SpawnRotation);

}

void ANaveEnemigaCaza::Ataque()
{
}

void ANaveEnemigaCaza::Destruccion()
{
}