// Fill out your copyright notice in the Description page of Project Settings.


#include "Floater.h"

// Sets default values
AFloater::AFloater()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	FloaterMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MyFloterSM"));
	InitionalLocation = FVector(0);
	FloatDirection = FVector(1);
	bCanFloat = false;
	
}

// Called when the game starts or when spawned
void AFloater::BeginPlay()
{
	Super::BeginPlay();
	SetActorLocation(InitionalLocation);

}

// Called every frame
void AFloater::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (bCanFloat) {
		AddActorLocalOffset(FloatDirection);
	}

}

