
#include <iostream>
#include <string>
#include <vector>
#include "DataBase.h"
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
	
	try
	{
		nanodbc::string connstr = NANODBC_TEXT(
			"DRIVER={ODBC Driver 17 for SQL Server};"
			"SERVER=DESKTOP-739IURR\\SQLEXPRESS;"
			"DATABASE=team-atlantis-project-aqua;"
			"Trusted_Connection=yes;"
		); // an ODBC connection string to the Database
		nanodbc::connection conn(connstr);

		insertBird(conn, "Swim", "Colibri", "Green", "middle", "18", "Y", "tiny");
		insertBird(conn, "Run", "Colibri", "Green", "middle", "18", "Y", "tiny");
		insertBird(conn, "Jump", "Colibri", "Green", "middle", "18", "Y", "tiny");
		//return EXIT_SUCCESS;
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		return EXIT_FAILURE;
	}

	vector<Bird*> birds;
	vector<Lake*> lakes;

    do {
        flag = mainMenu(lakes, birds);
    } while (flag);
}