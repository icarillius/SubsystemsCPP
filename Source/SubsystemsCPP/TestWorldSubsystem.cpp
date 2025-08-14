// Fill out your copyright notice in the Description page of Project Settings.


#include "TestWorldSubsystem.h"

DEFINE_LOG_CATEGORY(TestWorldSubsystem);
//Debugs on ini
void UTestWorldSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	UE_LOGFMT(TestWorldSubsystem, Log, "UTestWorldSubsystem::Initialize");
}
//Debugs on Deini
void UTestWorldSubsystem::Deinitialize()
{
	UE_LOGFMT(TestWorldSubsystem, Log, "UTestWorldSubsystem::Deinitialize");
}
//Adds number 1 and 2 together BP editable on function call
int UTestWorldSubsystem::AddNumbersTogether(int number1, int number2)
{
	int number3 = number1 + number2;
	return number3;
}

//incriments number 4 and outputs 4.
int UTestWorldSubsystem::IncreaseNumber()
{
	number4++;

	return number4;
}
//adds 1 to 4 and sets to 5. 
int UTestWorldSubsystem::UpdateNumber()
{
	IncreaseNumber();
		number5 = number4 + 1;
	return number5;
}
