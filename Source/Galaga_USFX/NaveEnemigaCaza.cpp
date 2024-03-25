// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaCaza.h"
#include "Engine/World.h"
#include "Galaga_USFXProjectile.h"

ANaveEnemigaCaza::ANaveEnemigaCaza()
{
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
    
	TiempoEntreProyectil = 1.5f;
	TiempoUltimoProyectil = 0.0f;
	VelocidadProyectil = 1000.0f;
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

		// Reiniciar el tiempo desde el último disparo después de reaparecer
		TiempoUltimoProyectil = 0.0f;
	}

	TiempoUltimoProyectil += DeltaTime;
	
	// Verificar si ha pasado el tiempo suficiente desde el último disparo
	if (TiempoUltimoProyectil >= TiempoEntreProyectil)
	{
		// Disparar
		Disparar();

		// Reiniciar el tiempo desde el último disparo
		TiempoUltimoProyectil = 0.f;
	}
}

void ANaveEnemigaCaza::Disparar()
{

	// Obtén la ubicación de la nave caza para spawnear el proyectil
	FVector SpawnLocation = GetActorLocation() + GetActorForwardVector() * -100;//distancia de disparo

	// Spawnear el proyectil
	AGalaga_USFXProjectile* NewProyectil = GetWorld()->SpawnActor<AGalaga_USFXProjectile>(AGalaga_USFXProjectile::StaticClass(), SpawnLocation, FRotator::ZeroRotator);

	if (NewProyectil)
	{
		// Modificar dirección y velocidad según sea necesario
		FVector SpawnDirection = FVector(-1, 0.f, 0.f); // Ejemplo: disparar hacia abajo
		NewProyectil->SetProjectileVelocity(SpawnDirection * VelocidadProyectil);
	 // Ajustar velocidad del proyectil
	}
}

void ANaveEnemigaCaza::Ataque()
{
}

void ANaveEnemigaCaza::Destruccion()
{
}