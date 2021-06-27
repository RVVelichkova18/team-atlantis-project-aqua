#include "BIRD_CLASS.h"

void Bird::showWhatCanYouDo()
{ 
	std::cout << "I can " << this->ability << std::endl; 
}

void Bird::setName(std::string name) 
{ 
	this->name = name; 
}

std::string Bird::getName()
{ 
	return this->name; 
}

void Bird::setColor(std::string color)
{ 
	this->color = color; 
}

std::string Bird::getColor()
{ 
	return this->color; 
}

void Bird::setSize(std::string size)
{

	this->size = size;

	if (size == "small")
	{
		this->yearsOfLife = 8;
	}
	else if (size == "medium")
	{
		this->yearsOfLife = 18;
	}
	else if (size == "big")
	{
		this->yearsOfLife = 28;
	}
}

std::string Bird::getSize() 
{ 
	return this->size; 
}

int Bird::getYearsOfLife()
{ 
	return this->yearsOfLife; 
}

void Bird::setMigration(std::string migration)
{ 
	this->migration = migration; 
}

std::string Bird::getMigration()
{ 
	return this->migration; 
}

void Bird::setSizeOfEggs(std::string sizeOfEggs)
{ 
	this->name = sizeOfEggs; 
}

std::string Bird::getSizeOfEggs()
{ 
	return this->sizeOfEggs; 
}

void Bird::showInfo()
{
	std::cout << "|=========ViewBirds=========|" << std::endl
		<< "|ABILITY: " << this->ability << std::endl
		<< "|NAME: " << this->name << std::endl
		<< "|COLOR: " << this->color << std::endl
		<< "|SIZE: " << this->size << std::endl
		<< "|YEARSOFLIFE: " << this->yearsOfLife << std::endl
		<< "|MIGRATION: " << this->migration << std::endl
		<< "|SIZEOFEGGS: " << this->sizeOfEggs << std::endl
	    << "|===========================|" << std::endl;
}

// Child - classes

SwimmingBird::SwimmingBird()
{
	this->ability = "swim";
}

RunningBird::RunningBird()
{
	this->ability = "run";
}

JumpingBird::JumpingBird()
{
	this->ability = "jump";
}