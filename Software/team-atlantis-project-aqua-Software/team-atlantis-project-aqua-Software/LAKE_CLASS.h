#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "LAKE_STRUCTURE.h"

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

//TABLE 1
};

class GLACIAL : LAKE
{
private:
	std::string depth;

public:
	GLACIAL() { this->depth = "GLACIAL"; }

//TABLE 2
};

class LANDSLIDE : LAKE
{
private:
	std::string depth;

public:
	LANDSLIDE() { this->depth = "LANDSLIDE"; }

//TABLE 3
};