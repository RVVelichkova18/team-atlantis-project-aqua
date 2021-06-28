
#include <iostream>
#include <string>
#include <vector>
#include "FUNCTIONS.h"
#include "BIRD_STRUCTURE.h"
#include "BIRD_CLASS.h"
#include "BIRD_MENU.h"
#include "LAKE_CLASS.h"
#include "LAKE_STRUCTURE.h"
#include "LAKE_MENU.h"

using namespace std;

bool flag;

bool mainMenu(vector<Lake*>& lakes, vector<Bird*>& birds)
{
	cout << endl;
	cout << "/-----------------------------\\" << endl;
	cout << "|   Welcome to Project-Aqua!   |" << endl;
	cout << "| (1) Bird's Menu              |" << endl;
	cout << "| (2) Lake's Menu              |" << endl;
	cout << "| (3) View Website             |" << endl;
	cout << "| (4) Exit                     |" << endl;
	cout << "\\-----------------------------/" << endl;

	int option;
	cin >> option;
	checkManyInput(option);

	switch (option)
	{
	case 1:
		birdMenu(birds);
		break;
	case 2:
		lakeMenu(lakes);
		break;
	case 3:
		openWebsite();
		break;
	case 4:
		exit();
		return 0;

	default:
		incorrectInput();
	}
	return true;
}

int main()
{	
	vector<Bird*> birds;
	vector<Lake*> lakes;

    do {
        flag = mainMenu(lakes, birds);
    } while (flag);
}