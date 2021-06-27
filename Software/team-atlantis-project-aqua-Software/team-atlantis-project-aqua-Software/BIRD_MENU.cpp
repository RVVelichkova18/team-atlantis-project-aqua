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
	cout << "| (0) Show birds       		|" << endl;
	cout << "| (1) Add Birds                |" << endl;
	cout << "| (2) Update Bird              |" << endl;
	cout << "| (3) Delete Bird      		|" << endl;
	cout << "\\-----------------------------/" << endl;

	bool flag;
	int option;
	cin >> option;
	checkManyInput(option);

	Bird* bird = NULL;

	switch (option)
	{
	case 0:
		for (int i = 0; i < birds.size(); i++)
		{
			birds[i]->showInfo();
		}

		break;
	case 1:
		bird = enterJumpingBird();
		birds.push_back(bird);
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