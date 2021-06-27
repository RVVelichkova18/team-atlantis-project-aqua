#pragma once
#include <iostream>
#include <string>
#include <vector>

class Lake
{
public:
	virtual void showWhatLakeTypeIs();

public:
	void setName(std::string name);
	std::string getName();

	void setFish(std::string fish);
	std::string getFish();

	void setDepth(std::string depth);
	std::string getDepth();

	int getYearsOld();

	void setLength(std::string length);
	std::string getLength();

	void showInfo();

protected:
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
	OrganicLake();

	//TABLE 1
};

class GlacialLake : public Lake
{
public:
	GlacialLake();

	//TABLE 2
};

class LandslideLake : public Lake
{
public:
	LandslideLake();

	//TABLE 3
};