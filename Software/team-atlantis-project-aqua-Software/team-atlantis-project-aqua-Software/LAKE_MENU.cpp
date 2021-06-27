#include <iostream>
#include <string>
#include <vector>
#include "FUNCTIONS.h"
#include "LAKE_CLASS.h"
#include "LAKE_STRUCTURE.h"

using namespace std;

bool lakeMenu(vector<Lake*>& lakes)
{
	system("CLS");
	cout << endl;
	cout << "/-----------------------------\\" << endl;
	cout << "|   Welcome to Lake Menu!      |" << endl;
	cout << "| (0) Show lakes               |" << endl;
	cout << "| (1) Add OrganicLake          |" << endl;
	cout << "| (2) Add GlacialLake          |" << endl;
	cout << "| (3) Add LandslideLake        |" << endl;
	cout << "\\-----------------------------/" << endl;

	bool flag;
	int option;
	cin >> option;
	checkManyInput(option);

	Lake* lake = NULL;

	switch (option)
	{
	case 0:
		for (size_t i = 0; i < lakes.size(); i++)
		{
			lakes[i]->showInfo();
		}
		break;

	case 1:
		lake = enterOrganicLake();
		lakes.push_back(lake);
		break;

	case 2:
		lake = enterGlacialLake();
		lakes.push_back(lake);
		break;

	case 3:
		lake = enterLandslideLake();
		lakes.push_back(lake);
		break;

	default:
		incorrectInput();
	}
	return true;
}