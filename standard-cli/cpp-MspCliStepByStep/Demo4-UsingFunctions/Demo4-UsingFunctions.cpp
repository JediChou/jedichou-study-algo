// Demo4-UsingFunctions.cpp : main project file.

#include "stdafx.h"

using namespace System;

// function prototype
void DisplayWelcome();
void DisplayProjectedValue(double amount, int years, double rate);
void DisplayProjectedValue(double amount, int years);
double GetInvestmentAmount();
int GetInvestmentPeriod(int min, int max);

int main(array<System::String ^> ^args)
{
	DisplayWelcome();
	Console::WriteLine("\nIllustration...");
	DisplayProjectedValue(10000, 25);

	Console::WriteLine("\nEnter details for your investment:");
	double sum = GetInvestmentAmount(); 
	int period = GetInvestmentPeriod(5, 25); 

	Console::WriteLine("\nYour plan:");
	DisplayProjectedValue(sum, period, 6.0);

	Console::ReadLine();
    return 0;
}

void DisplayWelcome()
{
	Console::WriteLine("---------------------------------------------");
	Console::WriteLine("Welcome to your friendly Investment Planner");
	Console::WriteLine("---------------------------------------------");
	return;
}

void DisplayProjectedValue(double amount, int years, double rate)
{
	double rateFraction = 1 + (rate/100);
	double finalAmount = amount * Math::Pow(rateFraction, years);

	finalAmount = Math::Round(finalAmount, 2);
	Console::Write("Investment amount: ");
	Console::WriteLine(amount); 
	Console::Write("Growth rate [%]: ");
	Console::WriteLine(rate); 
	Console::Write("Period [years]: ");
	Console::WriteLine(years); 
	Console::Write("Projected final value of investment: ");
	Console::WriteLine(finalAmount); 
	return; 
}


void DisplayProjectedValue(double amount, int years) 
{
	Random r; 
	int randomRate = r.Next(0, 20); 
	DisplayProjectedValue(amount, years, randomRate); 
}

double GetInvestmentAmount()
{
	Console::Write("How much money do you want to invest? ");
	String ^input = Console::ReadLine();
	double amount = Convert::ToDouble(input); 
	return amount; 
}

int GetInvestmentPeriod(int min=10, int max=25)
{
	Console::Write("Over how many years [");
	Console::Write("min=");
	Console::Write(min); 
	Console::Write(", max=");
	Console::Write(max); 
	Console::Write("] ? ");

	String ^input = Console::ReadLine();
	int years = Convert::ToInt32(input); 
	return years; 
}
