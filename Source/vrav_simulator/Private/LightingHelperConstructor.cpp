// Fill out your copyright notice in the Description page of Project Settings.


#include "LightingHelperConstructor.h"

// Sets default values
ALightingHelperConstructor::ALightingHelperConstructor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ALightingHelperConstructor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALightingHelperConstructor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

