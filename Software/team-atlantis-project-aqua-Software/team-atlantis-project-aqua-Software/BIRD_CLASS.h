#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "BIRD_STRUCTURE.h"
#include "FUNCTIONS.h"

class BIRD
{
private:
	std::string ability;
	std::vector<BIRD_STRUCTURE> bird;
};

class SWIM : BIRD
{
private:
	std::string ability;

public:
	SWIM() { this->ability = "Swim"; }
	void enterData(std::vector<BIRD_STRUCTURE> bird) { bird = enterBird(); }

//Table Swim
};

class RUN : BIRD
{
private:
	std::string ability;

public:
	RUN() { this->ability = "Run"; }
	void enterData(std::vector<BIRD_STRUCTURE> bird) { bird = enterBird(); }

//Table RUN
};

class JUMP : BIRD
{
private:
	std::string ability;

public:
	JUMP() { this->ability = "Jump"; }
	void enterData(std::vector<BIRD_STRUCTURE> bird) { bird = enterBird(); }

//Table Jump
};