#include "LAKE_CLASS.h"

void Lake::showWhatLakeTypeIs() 
{ 
	std::cout << "The lake is " << this->type << std::endl; 
};

void Lake::setName(std::string name)
{ 
	this->name = name; 
}

std::string Lake::getName()
{ 
	return this->name; 
}

void Lake::setFish(std::string fish) 
{ 
	this->fish = fish; 
}

std::string Lake::getFish() 
{ 
	return this->fish; 
}

void Lake::setDepth(std::string depth) 
{

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

std::string Lake::getDepth() 
{ 
	return this->depth; 
}

int Lake::getYearsOld()
{ 
	return this->yearsOld; 
}

void Lake::setLength(std::string length)
{ 
	this->length = length; 
}

std::string Lake::getLength()
{ 
	return this->length; 
}

void Lake::showInfo()
{
	std::cout << "|=========ViewLakes=========|" << std::endl
		<< "|TYPE: " << this->type << std::endl
		<< "|NAME: " << this->name << std::endl
		<< "|FISH: " << this->fish << std::endl
		<< "|DEPTH: " << this->depth << std::endl
		<< "|YEARSOLD: " << this->yearsOld << std::endl
		<< "|LENGTH: " << this->length << std::endl
		<< "|===========================|" << std::endl;
}

// Child - Classes

OrganicLake::OrganicLake()
{
	this->type = "Organic";
}

GlacialLake::GlacialLake()
{
	this->type = "Glacial";
}

LandslideLake::LandslideLake()
{
	this->type = "Landslide";
}