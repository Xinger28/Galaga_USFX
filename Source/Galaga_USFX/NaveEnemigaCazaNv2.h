// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaCaza.h"
#include "NaveEnemigaCazaNv2.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_API ANaveEnemigaCazaNv2 : public ANaveEnemigaCaza
{
	GENERATED_BODY()


public:
	ANaveEnemigaCazaNv2();

public:

	virtual void Tick(float DeltaTime) override;

protected:

	virtual void Ataque();
	
};
