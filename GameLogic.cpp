#include "pch.h"
#include "GameLogic.h"
#include <stdarg.h>
#include <iostream>
#include <fstream>

// Variadic Functions - allow for infinate arguments passed to function

// the ... indicates the start of the function arguments
void GameLogic::ShowChoices(int ChoiceCount, ...)
{
	// This takes the arguments and creates a va list using them
	va_list args;
	va_start(args, ChoiceCount);

	std::cout << "\nWhat would you like to do? (";
	// Cycles through the va_list and assigns it to x
	for (int i{ 0 }; i < ChoiceCount; i++) {
		std::string x = va_arg(args, std::string);
		int temp{ i+1 };
		std::cout << temp << ": ";
		if (i == ChoiceCount - 1)
		{
			std::cout << x << "";
			std::cout << ", " << ChoiceCount+1 << ": to View Inventory";
		}
		else
			std::cout << x << ", ";
	}
	va_end(args);
	std::cout << "): ";
}

void GameLogic::PrintFileContents(std::string FileLocation)
{
	std::string full_text;
	std::string text;
	std::ifstream file(FileLocation);
	while (std::getline(file, text))
	{
		full_text += text;
		full_text.push_back('\n');
	}
	std::cout << "\n" << full_text << std::endl;
}
