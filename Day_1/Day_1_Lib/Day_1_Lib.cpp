// Day_1_Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "Day_1_Lib.h"

#include <sstream>
#include <string>


int ReadOneElf(std::istream& input)
{
	int cal{ 0 };
	for (
		std::string line;
		std::getline(input, line) && !line.empty();
		)
	{
		std::istringstream iss{ line };
		int num{ 0 };
		iss >> num;
		cal += num;
	}
	return cal;
}

int FindMostCalories(std::istream& input)
{
	auto maxCal{ 0 };
	while (!input.eof())
	{
		maxCal = std::max(maxCal, ReadOneElf(input));
	}
	return maxCal;
}
