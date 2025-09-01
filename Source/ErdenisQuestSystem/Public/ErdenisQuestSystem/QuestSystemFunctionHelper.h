// Мой гитхаб! https://github.com/Erdeni23/ProjectQuestSystem

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "QuestSystemFunctionHelper.generated.h"


UCLASS()
class ERDENISQUESTSYSTEM_API UQuestSystemFunctionHelper : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
		UFUNCTION(BlueprintCallable, Category = "ErdenisQuestSystem")
    	static void DestroyUObject(UObject* ObjectToDestroy);
};
