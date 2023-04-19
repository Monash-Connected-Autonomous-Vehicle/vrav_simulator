// Fill out your copyright notice in the Description page of Project Settings.


#include "VehicleConstructor.h"

#include "EnhancedInputComponent.h"
#include "CineCameraComponent.h"

// Sets default values
AVehicleConstructor::AVehicleConstructor()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// init root component
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root Component"));

	// Init components
	CarSkeletal = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Vehicle Skeletal Mesh"));
	CarSkeletal->SetupAttachment(RootComponent);

	MainCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("Vehicle Camera"));
	MainCamera->SetupAttachment(RootComponent);
	MainCamera->SetRelativeLocation(FVector(-200.0f, 0.0f, 0.0f));
}

// Called when the game starts or when spawned
void AVehicleConstructor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AVehicleConstructor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AVehicleConstructor::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// Casting to enhanced input because input is deprecated
	UEnhancedInputComponent* EnhancedPlayerInput = Cast<UEnhancedInputComponent>(PlayerInputComponent);
}

