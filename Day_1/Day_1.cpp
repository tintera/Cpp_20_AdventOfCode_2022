// Day_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Day_1_lib/Day_1_lib.h"
#include <fstream>

int main()
{
	{
		std::ifstream sample_input("Sample_input.txt");
		std::cout << FindMostCalories(sample_input);
		std::cout << '\n';
		sample_input.clear();
		sample_input.seekg(0);
		std::cout << FindTopThree(sample_input);
	}
	std::cout << '\n';
	{
		std::ifstream input("Input.txt");
		std::cout << FindMostCalories(input);
		std::cout << '\n';
		input.clear();
		input.seekg(0);
		std::cout << FindTopThree(input);
	}
}

