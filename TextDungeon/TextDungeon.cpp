//
// TextDungeon.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

#define printf(x) std::cout << x << std::endl;

void StartScreen()
{
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-");
    printf(": Hello! Welcome to Text Dungeon. A text-based game that runs on CPP. :");
    printf(": Created by Marian and Sphinx.                                       :");
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-");
    printf(": 1)                            Start                                 :");
    printf(": 2)                            Exit                                  :");
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-");

    unsigned int input;
    std::cin >> input;

    if (input == 1)
    {
        while (true)
        {

        }
    }
    else if (input == 2)
    {
        return;
    }
    else
    {
        StartScreen();
    }

}
int main()
{
    StartScreen();
}