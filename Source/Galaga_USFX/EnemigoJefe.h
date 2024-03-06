// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "EnemigoJefe.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_API AEnemigoJefe : public ANaveEnemiga
{
	GENERATED_BODY()
	
private:
	float TamanoGigante;
	float PatronAtaques;
	
public:
	FORCEINLINE float GetTamanoGigangante() const { return TamanoGigante; }
	FORCEINLINE void SetTamanoGigante(float TamanoGigantead) { TamanoGigante = TamanoGigante; }
	FORCEINLINE float GetPatronAtaques() const { return PatronAtaques; }
	FORCEINLINE void SetPatronAtaques(float PatronAtaques) { PatronAtaques = PatronAtaques; }
};
