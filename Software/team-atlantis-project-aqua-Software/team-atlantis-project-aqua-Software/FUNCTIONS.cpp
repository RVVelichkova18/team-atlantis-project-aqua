#include <iostream>
#include <string>
#include <vector>
#include "FUNCTIONS.h"
#include "BIRD_STRUCTURE.h"
#include "BIRD_CLASS.h"

using namespace std;

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