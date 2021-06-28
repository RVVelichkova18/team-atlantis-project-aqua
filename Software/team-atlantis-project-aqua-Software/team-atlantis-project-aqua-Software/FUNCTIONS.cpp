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
    system("start https://atlantisproject.netlify.app/");
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

void checkBirdInput(vector<Bird*>& birds, Bird* bird)
{
    cout << endl;
    std::cout << "============Edit&Delete============" << std::endl
        << "|Are you sure you want to continue?" << std::endl
        << "|Press: 0 to continue." << std::endl
        << "|Press: 1 to edit input." << std::endl
        << "|Press: 2 to delete input." << std::endl
        << "===================================" << std::endl;

    int option;
    cin >> option;
    checkManyInput(option);

    switch (option)
    {
    case 0:
        birds.push_back(bird);
        break;

    case 1:
        delete bird;
        bird = enterSwimmingBird();
        birds.push_back(bird);
        break;

    case 2:
        delete bird;
        break;

    default:
        incorrectInput();
    }
}

JumpingBird* enterJumpingBird()                       
{
    JumpingBird* jumpingBird = new JumpingBird();
    string str; 

    cin.ignore(INT_MAX, '\n');

    cout << "|NAME: "; getline(cin, str);
    jumpingBird->setName(str);

    cout << "|COLOR: "; getline(cin, str);
    jumpingBird->setColor(str);

    cout << "|SIZE - (small,medium,big): "; getline(cin, str);
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

    cin.ignore(INT_MAX, '\n');

    cout << "|NAME: "; getline(cin, str);
    swimmingBird->setName(str);

    cout << "|COLOR: "; getline(cin, str);
    swimmingBird->setColor(str);

    cout << "|SIZE - (small,medium,big): "; getline(cin, str);
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

    cin.ignore(INT_MAX, '\n');

    cout << "|NAME: "; getline(cin, str);
    runningBird->setName(str);

    cout << "|COLOR: "; getline(cin, str);
    runningBird->setColor(str);

    cout << "|SIZE - (small,medium,big): "; getline(cin, str);
    runningBird->setSize(str);

    cout << "|MIGRATION - (Y/N): "; getline(cin, str);
    runningBird->setMigration(str);

    cout << "|SIZEOFEGGS- (tiny,average,fat): "; getline(cin, str);
    runningBird->setSizeOfEggs(str);

    return runningBird;
}

// ======================= LAKE =============================

void checkLakeInput(vector<Lake*>& lakes, Lake* lake)
{
    cout << endl;
    std::cout << "============Edit&Delete============" << std::endl
        << "|Are you sure you want to continue?" << std::endl
        << "|Press: 0 to continue." << std::endl
        << "|Press: 1 to edit input." << std::endl
        << "|Press: 2 to delete input." << std::endl
        << "===================================" << std::endl;

    int option;
    cin >> option;
    checkManyInput(option);

    switch (option)
    {
    case 0:
        lakes.push_back(lake);
        break;

    case 1:
        delete lake;
        lake = enterOrganicLake();
        lakes.push_back(lake);
        break;

    case 2:
        delete lake;
        break;

    default:
        incorrectInput();
    }
}


LandslideLake* enterLandslideLake()
{
    LandslideLake* landslideLake = new LandslideLake();
    string str;

    cin.ignore(INT_MAX, '\n');

    cout << "|NAME: "; getline(cin, str);
    landslideLake->setName(str);

    cout << "|FISH - (Y/N): "; getline(cin, str);
    landslideLake->setFish(str);

    cout << "|DEPTH - (normal,average,deep): "; getline(cin, str);
    landslideLake->setDepth(str);

    cout << "LENGTH - (short or large): "; getline(cin, str);
    landslideLake->setLength(str);

    return landslideLake;
}

GlacialLake* enterGlacialLake()
{
    GlacialLake* glacialLake = new GlacialLake();
    string str;

    cin.ignore(INT_MAX, '\n');

    cout << "|NAME: "; getline(cin, str);
    glacialLake->setName(str);

    cout << "|FISH - (Y/N): "; getline(cin, str);
    glacialLake->setFish(str);

    cout << "|DEPTH - (normal,average,deep): "; getline(cin, str);
    glacialLake->setDepth(str);

    cout << "LENGTH - (short or large): "; getline(cin, str);
    glacialLake->setLength(str);

    return glacialLake;
}

OrganicLake* enterOrganicLake()
{
    OrganicLake* organicLake = new OrganicLake();
    string str;

    cin.ignore(INT_MAX, '\n');

    cout << "|NAME: "; getline(cin, str);
    organicLake->setName(str);

    cout << "|FISH - (Y/N): "; getline(cin, str);
    organicLake->setFish(str);

    cout << "|DEPTH - (normal,average,deep): "; getline(cin, str);
    organicLake->setDepth(str);

    cout << "|LENGTH - (short or large): "; getline(cin, str);
    organicLake->setLength(str);

    return organicLake;
}