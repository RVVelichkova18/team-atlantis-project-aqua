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

void checkBirdSize(string size, int& yearsOflife)
{
    if (size == "small")
    {
        yearsOflife = 8;
    }
    else if (size == "medium")
    {
        yearsOflife = 18;
    }
    else if (size == "big")
    {
        yearsOflife = 28;
    }
}

vector <BIRD_STRUCTURE> enterBird()
{
    BIRD_STRUCTURE* birds = new BIRD_STRUCTURE;
    vector<BIRD_STRUCTURE> exampleVector;

    int n;
    cout << "How many birds do you want to add: "; cin >> n;
    cout << "================EnterBird===================" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "|NAME: "; getline(cin, birds->name);
        cout << "|COLOR: "; getline(cin, birds->color);
        cout << "|SIZE: "; getline(cin, birds->size);
        cout << "|MIGRATION: "; getline(cin, birds->migration);
        cout << "|SIZEOFEGGS: "; getline(cin, birds->sizeOfEggs);
        checkBirdSize(birds->size, birds->yearsOfLife);

        BIRD_STRUCTURE vab = { birds->name, birds->color, birds->size, birds->yearsOfLife, birds->migration, birds->sizeOfEggs };

        exampleVector.push_back(vab);
    }
    cin.ignore(INT_MAX, '\n');

    return exampleVector;
}

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