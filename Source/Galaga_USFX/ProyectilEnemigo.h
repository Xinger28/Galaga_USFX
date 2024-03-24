// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProyectilEnemigo.generated.h"

UCLASS()
class GALAGA_USFX_API AProyectilEnemigo : public AActor
{
	GENERATED_BODY()
	
private:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = MallaProyectilEnemigo, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* MallaProyectilEnemigo;

	/** Projectile movement component */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Movement", meta = (AllowPrivateAccess = "true"))
	float Velocidad;

public:	
	// Sets default values for this actor's properties
	AProyectilEnemigo();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
