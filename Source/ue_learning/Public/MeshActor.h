// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MeshActor.generated.h"

UCLASS()
class UE_LEARNING_API AMeshActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMeshActor();

	UPROPERTY(VisibleAnywhere,Category="BSC|Actor")
		UStaticMeshComponent* StaticMeshCube;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
