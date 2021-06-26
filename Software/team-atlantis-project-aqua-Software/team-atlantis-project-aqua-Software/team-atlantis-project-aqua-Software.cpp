
#include <iostream>
#include <string>
#include <vector>
#include "BIRD_STRUCTURE.h"
#include "BIRD_CLASS.h"
using namespace std;

bool flag;

bool mainMenu(SWIM swimmingBird, RUN runningBird, JUMP jumpingBird)
{
	system("CLS");
	cout << endl;
	cout << "/-----------------------------\\" << endl;
	cout << "|   Welcome to Project-Aqua!   |" << endl;
	cout << "| (1) Add Information          |" << endl;
	cout << "| (2) Fix Information          |" << endl;
	cout << "| (3) Delete Information 		|" << endl;
	cout << "| (-4-) View Information       |" << endl;
	cout << "\\-----------------------------/" << endl;

	int option;
	cin >> option;

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
	case 4:
		//
		break;

	default:
		incorrectInput();
	}
	return true;
}

int main()
{
	SWIM swimmingBird;
	RUN runningBird;
	JUMP jumpingBird;

    do {
        flag = mainMenu(swimmingBird, runningBird, jumpingBird);
    } while (flag);
}