#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "FUNCTIONS.h"
#include "BIRD_STRUCTURE.h"
#include "BIRD_CLASS.h"
#include "LAKE_CLASS.h"
#include "LAKE_STRUCTURE.h"

using namespace std;

void checkManyInput(int& a)
{
    while (1)
    {
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << endl;
            cout << "Incorrect Input!" << endl;
            cout << "Try again ->: "; cin >> a;
        }
        if (!cin.fail()) break;
    }
}

void openWebsite()
{
    ofstream webApplication;
    webApplication.open("..\\Website\\index.html");
}

void exit()
{
    system("CLS");
    cout << endl;
    cout << "|-----------------------|" << endl;
    cout << "Exit process remaining.." << endl;
    cout << "|-----------------------|" << endl;
}

void incorrectInput()
{
    cout << endl;
    cout << "Incorrect Input!" << endl;
}

// ======================= BIRD =============================

JumpingBird* enterJumpingBird()                       
{
    JumpingBird* jumpingBird = new JumpingBird();
    string str; 
    int yearsOfLife;

    cin.ignore(INT_MAX, '\n');

    cout << "|NAME: "; getline(cin, str);
    jumpingBird->setName(str);

    cout << "|COLOR: "; getline(cin, str);
    jumpingBird->setColor(str);

    cout << "|SIZE - (small,middle,big): "; getline(cin, str);
    jumpingBird->setSize(str);

    cout << "|MIGRATION - (Y/N): "; getline(cin, str);
    jumpingBird->setMigration(str);

    cout << "|SIZEOFEGGS- (tiny,average,fat): "; getline(cin, str);
    jumpingBird->setSizeOfEggs(str);

    return jumpingBird;
}

SwimmingBird* enterSwimmingBird()                      
{
    SwimmingBird* swimmingBird = new SwimmingBird();
    string str;
    int yearsOfLife;

    cin.ignore(INT_MAX, '\n');

    cout << "|NAME: "; getline(cin, str);
    swimmingBird->setName(str);

    cout << "|COLOR: "; getline(cin, str);
    swimmingBird->setColor(str);

    cout << "|SIZE - (small,middle,big): "; getline(cin, str);
    swimmingBird->setSize(str);

    cout << "|MIGRATION - (Y/N): "; getline(cin, str);
    swimmingBird->setMigration(str);

    cout << "|SIZEOFEGGS- (tiny,average,fat): "; getline(cin, str);
    swimmingBird->setSizeOfEggs(str);

    return swimmingBird;
}

RunningBird* enterRunningBird()
{
    RunningBird* runningBird = new RunningBird();
    string str;
    int yearsOfLife;

    cin.ignore(INT_MAX, '\n');

    cout << "|NAME: "; getline(cin, str);
    runningBird->setName(str);

    cout << "|COLOR: "; getline(cin, str);
    runningBird->setColor(str);

    cout << "|SIZE - (small,middle,big): "; getline(cin, str);
    runningBird->setSize(str);

    cout << "|MIGRATION - (Y/N): "; getline(cin, str);
    runningBird->setMigration(str);

    cout << "|SIZEOFEGGS- (tiny,average,fat): "; getline(cin, str);
    runningBird->setSizeOfEggs(str);

    return runningBird;
}

// ======================= LAKE =============================

void checkLakeDepth(string depth, int& yearsOld)
{
    if (depth == "normal")
    {
        yearsOld = 8;
    }
    else if (depth == "average")
    {
        yearsOld = 18;
    }
    else if (depth == "deep")
    {
        yearsOld = 28;
    }
}

/*
vector <LAKE_STRUCTURE> enterLake()
{
    LAKE_STRUCTURE* lakes = new LAKE_STRUCTURE;
    vector<LAKE_STRUCTURE> exampleVector;

    int n;
    cout << "How many lakes do you want to add: "; cin >> n;
    cout << "================EnterLake===================" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "|NAME: "; getline(cin, lakes->name);
        cout << "|FISH(Y/N): "; getline(cin, lakes->fish);
        cout << "|DEPTH(normal, average, deep): "; getline(cin, lakes->depth);
        cout << "|LENGTH: "; getline(cin, lakes->length);
        checkLakeDepth(lakes->depth, lakes->yearsOld);

        LAKE_STRUCTURE vab = { lakes->name, lakes->fish, lakes->depth, lakes->yearsOld, lakes->length };

        exampleVector.push_back(vab);
    }
    cin.ignore(INT_MAX, '\n');

    return exampleVector;
}
*/