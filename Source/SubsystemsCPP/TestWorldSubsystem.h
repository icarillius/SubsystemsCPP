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
	
	//initializes the code base
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	//Deinitializes the code base
	virtual void Deinitialize() override;

	//Runs function to add number 1 and 2 together.
	UFUNCTION(BlueprintCallable)
	int AddNumbersTogether(int number1, int number2);
	//Function increase number sent to the increase number widget. 

	UFUNCTION(BlueprintCallable)
	int IncreaseNumber();
	//Sets the numbers 4 and 5 to int.
	int number4, number5;
	//Function Update number sent to the Update number widget. 
	UFUNCTION(BlueprintCallable)
	int UpdateNumber();
};
