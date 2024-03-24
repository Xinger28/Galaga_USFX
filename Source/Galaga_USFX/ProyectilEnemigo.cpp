// Fill out your copyright notice in the Description page of Project Settings.


#include "ProyectilEnemigo.h"

// Sets default values
AProyectilEnemigo::AProyectilEnemigo()
{

	PrimaryActorTick.bCanEverTick = true;

	/*MallaProyectilEnemigo = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));
	MallaProyectilEnemigo->SetupAttachment(RootComponent);
	RootComponent = MallaProyectilEnemigo;*/

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'")); 

	// Create the mesh component
	MallaProyectilEnemigo = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	MallaProyectilEnemigo->SetStaticMesh(ShipMesh.Object);
	MallaProyectilEnemigo->SetupAttachment(RootComponent);
	RootComponent = MallaProyectilEnemigo;

	Velocidad = 1000.0f;

}

// Called when the game starts or when spawned
void AProyectilEnemigo::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AProyectilEnemigo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Implementa aquí la lógica del movimiento del proyectil hacia abajo
	FVector NewLocation = GetActorLocation();
	NewLocation += FVector(-1, 0, 0) * DeltaTime * Velocidad; // Velocidad hacia abajo
	SetActorLocation(NewLocation);
}

