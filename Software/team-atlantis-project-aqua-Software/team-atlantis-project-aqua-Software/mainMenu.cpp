
#include <iostream>
#include <string>
#include <vector>
#include "BIRD_STRUCTURE.h"
#include "BIRD_CLASS.h"
#include "BIRD_MENU.h"
#include "LAKE_CLASS.h"
#include "LAKE_STRUCTURE.h"
#include "LAKE_MENU.h"

using namespace std;

bool flag;

bool mainMenu(SWIM swimmingBird, RUN runningBird, JUMP jumpingBird, ORGANIC organicLake, GLACIAL glacialLake, LANDSLIDE landslideLake)
{
	system("CLS");
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

	switch (option)
	{
	case 1:
		birdMenu(swimmingBird, runningBird, jumpingBird);
		break;
	case 2:
		lakeMenu(organicLake, glacialLake, landslideLake);
		break;
	case 3:
		openWebsite(); // fix
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
	// =BIRD=
	SWIM swimmingBird;
	RUN runningBird;
	JUMP jumpingBird;

	// =LAKE=
	ORGANIC organicLake;
	GLACIAL glacialLake;
	LANDSLIDE landslideLake;

    do {
        flag = mainMenu(swimmingBird, runningBird, jumpingBird, organicLake, glacialLake, landslideLake);
    } while (flag);
}