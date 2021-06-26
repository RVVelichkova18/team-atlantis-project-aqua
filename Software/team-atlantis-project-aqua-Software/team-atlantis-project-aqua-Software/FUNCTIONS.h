#pragma once
#include <string>
#include <vector>
#include "BIRD_STRUCTURE.h"
#include "BIRD_CLASS.h"
#include "LAKE_CLASS.h"
#include "LAKE_STRUCTURE.h"

void incorrectInput();
void checkBirdSize(std::string size, int& yearsOflife);
void checkLakeDepth(std::string depth, int& yearsOld);
std::vector <BIRD_STRUCTURE> enterBird();
std::vector<LAKE_STRUCTURE> enterLake();
