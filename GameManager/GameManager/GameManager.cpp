#include "GameManager.h"
#include <vector>
#include "Enemy.h"
#include "EnemyFactory.h"

// Define the static instance pointer
GameManager* GameManager::instance = nullptr;
std::vector<std::vector<Enemy>> enemies;

// Private constructor 
GameManager::GameManager() {
    std::cout << "Instance initialised\n";
}

GameManager* GameManager::GetInstance() {
    if (instance == nullptr) instance = new GameManager();
    return instance;
}

void GameManager::Start() {
    std::cout << "Press arrow keys to move (press 'q' to quit)\n";

}

void GameManager::Update() {
    std::cout << "Press arrow keys (press 'q' to quit)\n";

    while (true) {
        int ch = _getch();  // read first code - Arrow keys return two codes 
        if (ch == 'q') break;

        if (ch == 0 || ch == 224) { // Arrow keys return two codes: 0 or 224 
            ch = _getch();
            switch (ch) {
            case 72: // 72 = up 
                SpawnEnemy("goblin");
                break;
            case 80:// 80 = down              
                SpawnEnemy("dragon");
                break;
            case 75: // 75 = left 
                SpawnEnemy("I dont exist");
                break;
            case 77: // 77 = right 
                std::cout << "Safe movement\n";
                break;
            default:
                break;
            }
        }
    }
}


void GameManager::QuitGame() {
    delete instance;
    instance = nullptr;
}

GameManager::~GameManager() {
    FreeEnemies();
}

void GameManager::FreeEnemies() {
    for (Enemy* e : enemies)
    {
        delete e;
    }
    enemies.clear();

    std::cout << "Memory allocated for enemies returned to system\n";
}


void GameManager::SpawnEnemy(std::string type)
{
    Enemy* e = EnemyFactory::CreateEnemy(type);

    if (e) {
        std::cout << type << "spawned!\n";
        enemies.push_back(e);
      }
    else {
        std::cout << "Unknown enemy type: " << type << << "\n";
    }
}
