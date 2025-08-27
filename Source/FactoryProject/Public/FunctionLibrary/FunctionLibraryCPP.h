// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FunctionLibraryCPP.generated.h"

/**
 * 
 */
UCLASS()
class FACTORYPROJECT_API UFunctionLibraryCPP : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
	UFUNCTION(BlueprintCallable, Category = "Custom")
	static void DestroyUObject(UObject* ObjectToDestroy);
	
};
