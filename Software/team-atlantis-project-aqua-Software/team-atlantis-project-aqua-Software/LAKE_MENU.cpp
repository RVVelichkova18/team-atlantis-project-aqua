#include <iostream>
#include <string>
#include <vector>
#include "FUNCTIONS.h"
#include "LAKE_CLASS.h"
#include "LAKE_STRUCTURE.h"

using namespace std;

bool lakeMenu(vector<Lake*> lakes)
{
	system("CLS");
	cout << endl;
	cout << "/-----------------------------\\" << endl;
	cout << "|   Welcome to Lake Menu!      |" << endl;
	cout << "| (1) Add Lake                 |" << endl;
	cout << "| (2) Update Lake              |" << endl;
	cout << "| (3) Delete Lake      	    |" << endl;
	cout << "\\-----------------------------/" << endl;

	bool flag;
	int option;
	cin >> option;
	checkManyInput(option);

	switch (option)
	{
	case 1:
		//
		break;
	case 2:
		//
		break;
	case 3:
		//
		break;

	default:
		incorrectInput();
	}
	return true;
}