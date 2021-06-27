#pragma once
#include <iostream>
#include <string>
#include <vector>

class Bird
{
public:
	virtual void showWhatCanYouDo();

public:
	void setName(std::string name);
	std::string getName();

	void setColor(std::string color);
	std::string getColor();

	void setSize(std::string size);
	std::string getSize();

	int getYearsOfLife();

	void setMigration(std::string migration);
	std::string getMigration();

	void setSizeOfEggs(std::string sizeOfEggs);
	std::string getSizeOfEggs();

	void showInfo();

protected:
	std::string ability;
	std::string name;
	std::string color;
	std::string size; // big->28y life | medium->10y life | small - 8y life
	int yearsOfLife;
	std::string migration; // Y or N
	std::string sizeOfEggs; // big,med,small
};

class SwimmingBird : public Bird
{
public:
	SwimmingBird();

	//Table Swim
};

class RunningBird : public Bird
{
public:
	RunningBird();

	//Table RUN
};

class JumpingBird : public Bird
{
public:
	JumpingBird();

	//Table Jump
};