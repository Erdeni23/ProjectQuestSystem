
#include "ActorAttributes/AttributeSet.h"

UAttributeSet::UAttributeSet()
{
	PrimaryComponentTick.bCanEverTick = true;
}


void UAttributeSet::BeginPlay()
{
	Super::BeginPlay();
}


void UAttributeSet::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

