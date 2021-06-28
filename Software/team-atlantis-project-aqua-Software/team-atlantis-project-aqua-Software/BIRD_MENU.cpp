#include <iostream>
#include <string>
#include <vector>
#include "FUNCTIONS.h"
#include "BIRD_STRUCTURE.h"
#include "BIRD_CLASS.h"

using namespace std;

bool birdMenu(vector<Bird*>& birds)
{
	system("CLS");
	cout << endl;
	cout << "/-----------------------------\\" << endl;
	cout << "|   Welcome to Bird Menu!      |" << endl;
	cout << "| (0) Show birds               |" << endl;
	cout << "| (1) Add Swimming Birds       |" << endl;
	cout << "| (2) Add Jumping Birds        |" << endl;
	cout << "| (3) Add Running Birds        |" << endl;
	cout << "\\-----------------------------/" << endl;

	bool flag;
	int option;
	cin >> option;
	checkManyInput(option);

	Bird* bird = NULL;

	switch (option)
	{
	case 0:
		for (size_t i = 0; i < birds.size(); i++)
		{
			birds[i]->showInfo();
		}
		break;

	case 1:
		bird = enterSwimmingBird();
		checkBirdInput(birds, bird);
		break;

	case 2:
		bird = enterJumpingBird();
		checkBirdInput(birds, bird);
		break;

	case 3:
		bird = enterRunningBird();
		checkBirdInput(birds, bird);
		break;

	default:
		incorrectInput();
	}
	return true;
}