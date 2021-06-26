#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "LAKE_STRUCTURE.h"
#include "FUNCTIONS.h"

class LAKE
{
private:
	std::string depth;
	std::vector<LAKE_STRUCTURE> lake;
};

class ORGANIC : LAKE
{
private:
	std::string depth;

public:
	ORGANIC() { this->depth = "ORGANIC"; }
	void enterData(std::vector<LAKE_STRUCTURE> lake) { lake = enterLake(); }

//TABLE 1
};

class GLACIAL : LAKE
{
private:
	std::string depth;

public:
	GLACIAL() { this->depth = "GLACIAL"; }
	void enterData(std::vector<LAKE_STRUCTURE> lake) { lake = enterLake(); }

//TABLE 2
};

class LANDSLIDE : LAKE
{
private:
	std::string depth;

public:
	LANDSLIDE() { this->depth = "LANDSLIDE"; }
	void enterData(std::vector<LAKE_STRUCTURE> lake) { lake = enterLake(); }

//TABLE 3
};