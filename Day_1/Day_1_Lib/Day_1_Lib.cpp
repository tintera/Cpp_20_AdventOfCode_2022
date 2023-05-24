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

int FindTopThree(std::istream& input)
{
	// maxcal[0] contains highest, 1 second highest, 2 third highest
	int maxCal[3]{ 0,0,0 };
	while (!input.eof())
	{
		const auto cal{ ReadOneElf(input) };
		if (cal > maxCal[0])
		{
			maxCal[2] = maxCal[1];
			maxCal[1] = maxCal[0];
			maxCal[0] = cal;
		}
		else if (cal > maxCal[1])
		{
			maxCal[2] = maxCal[1];
			maxCal[1] = cal;
		}
		else if (cal > maxCal[2])
		{
			maxCal[2] = cal;
		}
	}
	return maxCal[0] + maxCal[1] + maxCal[2];
}
