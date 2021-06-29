#pragma once
#include <string>
#include <vector>
#include <nanodbc.h>
#include <exception>
#include "LAKE_CLASS.h"
#include "LAKE_STRUCTURE.h"
#include "BIRD_STRUCTURE.h"
#include "BIRD_CLASS.h"

void insertBird(nanodbc::connection conn, std::string ability, std::string name, std::string color, std::string size, int yersoflife, std::string migration, std::string sizeofeggs);