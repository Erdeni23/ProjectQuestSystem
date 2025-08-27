// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AttributeSet.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnHealthChangedSignature, float, NewHealth, float, MaxHealth);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnStaminaChangedSignature, float, NewStamina, float, MaxStamina);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDeathSignature);

UCLASS( Blueprintable, ClassGroup=(Custom))
class FACTORYPROJECT_API UAttributeSet : public UActorComponent
{
	GENERATED_BODY()

public:	
	UAttributeSet();

	UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadOnly)
	FOnHealthChangedSignature OnHealthChanged;

	UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadOnly)
	FOnStaminaChangedSignature OnStaminaChanged;

	UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadOnly)
	FOnDeathSignature OnDeath;

protected:
	virtual void BeginPlay() override;
	
public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
