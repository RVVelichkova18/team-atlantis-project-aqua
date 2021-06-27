#pragma once
#include <string>
#include <vector>
#include "LAKE_CLASS.h"
#include "LAKE_STRUCTURE.h"
#include "BIRD_STRUCTURE.h"
#include "BIRD_CLASS.h"

void checkManyInput(int& a);
void openWebsite();
void exit();
void incorrectInput();
JumpingBird* enterJumpingBird();
SwimmingBird* enterSwimmingBird();
RunningBird* enterRunningBird();
OrganicLake* enterOrganicLake();
GlacialLake* enterGlacialLake();
LandslideLake* enterLandslideLake();