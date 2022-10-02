// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Floater.generated.h"

UCLASS()
class UE_LEARNING_API AFloater : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFloater();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "BSC|Actor")
		UStaticMeshComponent* FloaterMesh;
	//³¡¾°ÖÐ±à¼­£¬À¶Í¼¿É¶ÁÐ´
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "BSC|Location")
		FVector InitionalLocation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BSC|Variables")
		bool bCanFloat;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BSC|Variables")
		FVector FloatDirection;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BSC|Variables")
		FRotator InitRotation;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
