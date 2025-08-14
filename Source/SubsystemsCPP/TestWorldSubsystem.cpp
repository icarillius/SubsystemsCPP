// Fill out your copyright notice in the Description page of Project Settings.


#include "TestWorldSubsystem.h"

DEFINE_LOG_CATEGORY(TestWorldSubsystem);

void UTestWorldSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	UE_LOGFMT(TestWorldSubsystem, Log, "UTestWorldSubsystem::Initialize");
}

void UTestWorldSubsystem::Deinitialize()
{
	UE_LOGFMT(TestWorldSubsystem, Log, "UTestWorldSubsystem::Deinitialize");
}

int UTestWorldSubsystem::AddNumbersTogether(int number1, int number2)
{
	int number3 = number1 + number2;
	return number3;
}

int UTestWorldSubsystem::IncreaseNumber()
{
	number4++;

	return number4;
}

int UTestWorldSubsystem::UpdateNumber()
{
	IncreaseNumber();
		number5 = number4 + 1;
	return number5;
}
