// Fill out your copyright notice in the Description page of Project Settings.


#include "FunctionLibrary/FunctionLibraryCPP.h"

void UFunctionLibraryCPP::DestroyUObject(UObject* ObjectToDestroy)
{
	if( ObjectToDestroy )
		ObjectToDestroy->ConditionalBeginDestroy();
}
