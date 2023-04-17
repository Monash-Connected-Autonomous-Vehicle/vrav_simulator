// Fill out your copyright notice in the Description page of Project Settings.


#include "BuildingBaseActor.h"

// Sets default values
ABuildingBaseActor::ABuildingBaseActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Init
	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Static Mesh"));
	StaticMesh->SetupAttachment(RootComponent);
	StaticMesh->SetVisibleFlag(false);

	SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Skeletal Mesh"));
	SkeletalMesh->SetupAttachment(RootComponent);
	SkeletalMesh->SetVisibleFlag(false);
}

// Called when the game starts or when spawned
void ABuildingBaseActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABuildingBaseActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

