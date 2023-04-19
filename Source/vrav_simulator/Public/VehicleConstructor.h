// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "WheeledVehiclePawn.h"

#include "VehicleConstructor.generated.h"

UCLASS()
class VRAV_SIMULATOR_API AVehicleConstructor : public AWheeledVehiclePawn
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, Category = "Vehicle Components")
		USkeletalMeshComponent* CarSkeletal;

	UPROPERTY(EditDefaultsOnly, Category = "Vehicle Components")
		class UCameraComponent* MainCamera;

public:
	// Sets default values for this pawn's properties
	AVehicleConstructor();

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Vehicle Components")
		UChaosVehicleMovementComponent* VehicleMovement;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
