// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaCaza.h"
#include "NaveEnemigaCazaNv1.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_API ANaveEnemigaCazaNv1 : public ANaveEnemigaCaza
{
	GENERATED_BODY()
	
public:
			ANaveEnemigaCazaNv1();

public:

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	protected:
		virtual void Ataque();


};
