#pragma once
#include <string>
#include <vector>
#include "BIRD_STRUCTURE.h"
#include "BIRD_CLASS.h"

void incorrectInput();
void checkBirdSize(std::string size, int& yearsOflife);
std::vector <BIRD_STRUCTURE> enterBird();