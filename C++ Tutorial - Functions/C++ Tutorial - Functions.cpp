// C++ Tutorial - Functions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

// function prototypes
void GreetUser(std::string name, float percentage);
void GreetUser(std::string name);
int WhatIsTheMagicNumber();
//void ThisDoesntExist();

int main()
{
	// run/call/invoke/execute the GreetUser function
	GreetUser("<Name goes here>");
	GreetUser("<Name goes here>", 0.5f);

	//ThisDoesntExist();

	int returnedValue = WhatIsTheMagicNumber();
	std::cout << returnedValue << std::endl;
}

void GreetUser(std::string name, float percentage)
{
	//return;
	std::cout << "Hello " << name << "!" << std::endl;
	std::cout << "The percentage is " << percentage << std::endl;
}

void GreetUser(std::string name)
{
	std::cout << "Hello " << name << "!" << std::endl;
}

int WhatIsTheMagicNumber()
{
	std::cout << "Enter a number from 1 to 10" << std::endl;

	int inputValue = -1;
	std::cin >> inputValue;

	if (inputValue <= 10)
		return inputValue;

	return 1234;
}