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

	void setDepth(std::string depth) { this->depth = depth; }
	std::string getDepth() { return this->depth; }

	void setYearsOld(int yearsOld) { this->yearsOld = yearsOld; }
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

class Organic : public Lake
{
public:
	Organic() 
	{ 
		this->type = "Organic";
	}

//TABLE 1
};

class Glacial : public Lake
{
public:
	Glacial() 
	{ 
		this->type = "Glacial";
	}

//TABLE 2
};

class Landslide : public Lake
{
public:
	Landslide()
	{
		this->type = "Landslide";
	}

//TABLE 3
};