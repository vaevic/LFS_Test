// Fill out your copyright notice in the Description page of Project Settings.


#include "TestCharacter_PCY.h"

// Sets default values
ATestCharacter_PCY::ATestCharacter_PCY()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATestCharacter_PCY::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATestCharacter_PCY::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ATestCharacter_PCY::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

