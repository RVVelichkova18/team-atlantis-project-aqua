#include <iostream>
#include <string>
#include <vector>
#include "FUNCTIONS.h"
#include "BIRD_STRUCTURE.h"
#include "BIRD_CLASS.h"

using namespace std;

bool birdMenu(SWIM swimmingBird, RUN runningBird, JUMP jumpingBird)
{
	system("CLS");
	cout << endl;
	cout << "/-----------------------------\\" << endl;
	cout << "|   Welcome to Bird Menu!      |" << endl;
	cout << "| (1) Add Bird                 |" << endl;
	cout << "| (2) Update Bird              |" << endl;
	cout << "| (3) Delete Bird      		|" << endl;
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