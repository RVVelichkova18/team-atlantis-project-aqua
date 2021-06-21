
#include <iostream>
#include <string>
#include <vector>
#include "BIRD.h"
#include "LAKE.h"
#include "FUNCTIONS.h"
using namespace std;

bool flag;

bool mainMenu(BIRD* bird, LAKE* lake)
{
	//system("CLS");
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
	}
	return true;
}

int main()
{
    BIRD* bird;
    LAKE* lake;

    do {
        flag = mainMenu(bird, lake);
    } while (flag);
}