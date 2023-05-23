#include "pch.h"
#include "Day_1_Lib/Day_1_lib.h"


TEST(OneElf, TestName) {
	std::stringstream ssEmptyElf{ std::string{}};
	EXPECT_EQ(0, ReadOneElf(ssEmptyElf));
}

TEST(OneElf, OneLiner) {
	std::stringstream ssOneLiner{ "1000" };
	EXPECT_EQ(1'000, ReadOneElf(ssOneLiner));
}

TEST(OneElf, MultiLiner) {
	std::stringstream ssOneLiner{ "3000\n4000\n5000" };
	EXPECT_EQ(12'000, ReadOneElf(ssOneLiner));
}

TEST(MostCalories, Empty)
{
	std::stringstream ssEmpty{ std::string{} };
	EXPECT_EQ(0, FindMostCalories(ssEmpty));
}

TEST(MostCalories, OneElf)
{
	std::stringstream ssOneElf{ "1000\n" };
	EXPECT_EQ(1'000, FindMostCalories(ssOneElf));
}

TEST(MostCalories, TwoElfs)
{
	std::stringstream ssTwoElfs{ "1000\n\n2000\n3000\n" };
	EXPECT_EQ(5'000, FindMostCalories(ssTwoElfs));
}