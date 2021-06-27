#pragma once
#include <iostream>
#include <string>
#include <vector>

class Bird
{
public:
	void showWhatCanYouDo() { std::cout << "I can " << this->ability << std::endl; };

public:
	void setName(std::string name) { this->name = name; }
	std::string getName() { return this->name; }

	void setColor(std::string color) { this->color = color; }
	std::string getColor() { return this->color; }

	void setSize(std::string size) {

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

	std::string getSize() { return this->size; }

	int getYearsOfLife() { return this->yearsOfLife; }

	void setMigration(std::string migration) { this->migration = migration; }
	std::string getMigration() { return this->migration; }

	void setSizeOfEggs(std::string sizeOfEggs) { this->name = sizeOfEggs; }
	std::string getSizeOfEggs() { return this->sizeOfEggs; }

	void showInfo()
	{
		std::cout << "-----------------" << std::endl
			<< this->ability << std::endl
			<< this->name << std::endl
			<< this->color << std::endl
			<< this->size << std::endl
			<< this->yearsOfLife << std::endl
			<< this->migration << std::endl
			<< this->sizeOfEggs << std::endl;
	}

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
	SwimmingBird()
	{
		this->ability = "swim";
	}

	//Table Swim
};

class RunningBird : public Bird
{
public:
	RunningBird()
	{
		this->ability = "run";
	}

	//Table RUN
};

class JumpingBird : public Bird
{
public:
	JumpingBird()
	{
		this->ability = "jump";
	}
	//Table Jump
};