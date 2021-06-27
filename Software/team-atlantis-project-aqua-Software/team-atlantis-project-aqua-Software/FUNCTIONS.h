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
JumpingBird* enterJumpingBird();
SwimmingBird* enterSwimmingBird();
RunningBird* enterRunningBird();
OrganicLake* enterOrganicLake();
GlacialLake* enterGlacialLake();