#include "Player.h"
#include "Point2D.h"

Player::Player(std::string name = "Default", int hp = 10)
{
    playerName = name;
    hitPoints = hp;
    std::cout << "New player was created: \n";
    playerStatus();
}

void Player::levelUp()
{
    hitPoints = hitPoints * 2;
    playerStatus();
}

Player::~Player() {
    std::cout << playerName << " destroyed\n";
}

void Player::playerStatus() 
{
    std::cout << playerName << ": " << hitPoints << std::endl;
    
}