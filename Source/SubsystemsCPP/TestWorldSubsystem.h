// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Logging/StructuredLog.h"
#include "Subsystems/WorldSubsystem.h"
#include "TestWorldSubsystem.generated.h"

/**
 * 
 */
DECLARE_LOG_CATEGORY_EXTERN(TestWorldSubsystem, Log, All);
UCLASS()
class SUBSYSTEMSCPP_API UTestWorldSubsystem : public UWorldSubsystem
{
	GENERATED_BODY()
	
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

	UFUNCTION(BlueprintCallable)
	int AddNumbersTogether(int number1, int number2);

	UFUNCTION(BlueprintCallable)
	int IncreaseNumber();

	int number4, number5;
	UFUNCTION(BlueprintCallable)
	int UpdateNumber();
	
};
