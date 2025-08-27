// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "InteractInterface.generated.h"

UINTERFACE(MinimalAPI)
class UInteractInterface : public UInterface
{
	GENERATED_BODY()
};


class FACTORYPROJECT_API IInteractInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category=Interact)
	void Interact(AActor* Interactor);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category=Interact)
	bool HasTools(FName RequiredTool);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category=Interact)
	void AddToolToInventory(FName ToolToAdd);

};
