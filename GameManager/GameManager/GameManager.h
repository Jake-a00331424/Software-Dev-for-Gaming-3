// Singleton: GameManager.h
#pragma once
#include <iostream>
#include <conio.h>


class GameManager {
private:
    // This pointer will be returned whenever we need to access GameManager
    static GameManager* instance;

    // Private constructor 
    GameManager();

public:

    // No copy constuctor -> GameManager gm2 = gm1; 
    GameManager(const GameManager&) = delete;

    // No copy assignment operator -> gm2 = gm1;
    GameManager& operator=(const GameManager&) = delete;

    static GameManager* GetInstance();

    void Update();
    void Start();
    void QuitGame();
    void FreeEnemies();
    void SpawnEnemy();
};



