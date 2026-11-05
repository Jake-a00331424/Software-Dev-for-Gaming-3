// DesignPatterns.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "GameManager.h"

int main()
{
    //GameManager gm1; // not allowed - private constructor

    GameManager* gm = GameManager::GetInstance();
    GameManager* gm2 = GameManager::GetInstance();
    GameManager* gm3 = GameManager::GetInstance();

    std::cout << "gm : " << gm << std::endl;
    std::cout << "gm2: " << gm2 << std::endl;
    std::cout << "gm3: " << gm3 << std::endl;

    gm->Start();
    gm2->Update();
    gm3->QuitGame();
}

