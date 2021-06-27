#pragma once
#include <string>
#include <vector>
#include "BIRD_STRUCTURE.h"
#include "BIRD_CLASS.h"
#include "LAKE_CLASS.h"
#include "LAKE_STRUCTURE.h"

void checkManyInput(int& a);
void openWebsite();
void exit();
void incorrectInput();
void checkLakeDepth(std::string depth, int& yearsOld);
std::vector<LAKE_STRUCTURE> enterLake();
JumpingBird* enterJumpingBird();
SwimmingBird* enterSwimmingBird();