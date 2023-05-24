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

TEST(TopThree, Empty)
{
	std::stringstream ssEmpty{ std::string{} };
	EXPECT_EQ(0, FindTopThree(ssEmpty));
}

TEST(TopThree, SingleElf)
{
	std::stringstream ssOneElf{ "1000\n" };
	EXPECT_EQ(1'000, FindTopThree(ssOneElf));
}

TEST(TopThree, TwoElfs)
{
	std::stringstream ssTwoElfs{ "1000\n\n2000\n3000\n" };
	EXPECT_EQ(6'000, FindTopThree(ssTwoElfs));
}

TEST(TopThree, ThreeElfs)
{
	std::stringstream ssThreeElfs{ "1000\n\n2000\n3000\n\n4000\n5000\n6000\n" };
	EXPECT_EQ(21'000, FindTopThree(ssThreeElfs));
}

TEST(TopThree, FourElfs)
{
	std::stringstream ssFourElfs{ "1000\n\n2000\n3000\n\n4000\n5000\n6000\n\n7000\n8000\n9000\n" };
	EXPECT_EQ(44'000, FindTopThree(ssFourElfs));
}
