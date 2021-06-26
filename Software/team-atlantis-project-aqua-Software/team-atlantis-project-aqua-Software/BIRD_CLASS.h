#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "BIRD_STRUCTURE.h"

class BIRD
{
private:
	std::vector<BIRD_STRUCTURE> bird;
};

class SWIM : BIRD
{
private:
	std::string ability;

public:
	SWIM() { this->ability = "Swim"; }

//Table Swim
};

class RUN : BIRD
{
private:
	std::string ability;

public:
	RUN() { this->ability = "Run"; }

//Table RUN
};

class JUMP : BIRD
{
private:
	std::string ability;

public:
	JUMP() { this->ability = "Jump"; }

//Table Jump
};