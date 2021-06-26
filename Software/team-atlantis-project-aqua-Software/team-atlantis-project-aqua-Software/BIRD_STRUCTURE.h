#pragma once
#include <iostream>
#include <string>
#include <vector>

struct BIRD_STRUCTURE
{
	std::string name;
	std::string color;
	std::string size; // big->28y life | medium->10y life | small - 8y life
	int yearsOfLife;
	std::string migration; // Y or N
	std::string sizeOfEggs; // big,med,small
};