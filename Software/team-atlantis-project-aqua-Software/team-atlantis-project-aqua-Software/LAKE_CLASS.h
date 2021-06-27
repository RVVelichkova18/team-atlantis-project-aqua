#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "LAKE_STRUCTURE.h"
#include "FUNCTIONS.h"

class Lake
{
public:
	void showWhatLakeTypeIs() { std::cout << "The lake is " << this->type << std::endl; };

public:
	void setName(std::string name) { this->name = name; }
	std::string getName() { return this->name; }

	void setFish(std::string fish) { this->fish = fish; }
	std::string getFish() { return this->fish; }

	void setDepth(std::string depth) { 
		
		this->depth = depth;

		if (depth == "normal")
		{
			this->yearsOld = 8;
		}
		else if (depth == "average")
		{
			this->yearsOld = 18;
		}
		else if (depth == "deep")
		{
			this->yearsOld = 28;
		}
	}
	std::string getDepth() { return this->depth; }

	int getYearsOld() { return this->yearsOld; }

	void setLength(std::string length) { this->length = length; }
	std::string getLength() { return this->length; }

	std::string type;

	std::string name;
	std::string fish; //y or n
	std::string depth; // normal, average, deep
	int yearsOld;
	std::string length; // short or large
};

class OrganicLake : public Lake
{
public:
	OrganicLake() 
	{ 
		this->type = "Organic";
	}

//TABLE 1
};

class GlacialLake : public Lake
{
public:
	GlacialLake() 
	{ 
		this->type = "Glacial";
	}

//TABLE 2
};

class LandslideLake : public Lake
{
public:
	LandslideLake()
	{
		this->type = "Landslide";
	}

//TABLE 3
};