#include <iostream>

class Player // class name
{
    std::string playerName;
    int hitPoints;

public:
    // Player(); // default constructor
    Player(std::string name, int hp);
    ~Player();

    // Class Methods
    void levelUp();                                                                        // outside class definition
    void playerStatus() { std::cout << playerName << ": " << hitPoints << std::endl; }; // inside class definition
};                                                                                         // end the class definition with a semicolon

Player::Player(std::string name = "Default", int hp = 100)
{
    playerName = name;
    hitPoints = hp;

    std::cout << "New player was created: \n";
    playerStatus();
}

// Player::Player()
// {
//     playerName = "Default Name";
//     hitPoints = 100;

//     std::cout << "New player was created: \n";
//     playerStatus();
// }

Player::~Player()
{
    std::cout << "Player {" << playerName << "} was deleted\n";
}

void Player::levelUp()
{
    hitPoints = hitPoints * 2;
    playerStatus();
}

int main()
{
    Player p1("Player One", 150);
    // Player p2{"Player Two", 300};
    Player p2;

    Player* ptr_p1;
    ptr_p1 = &p1; //Pointer gets the address of the Object

    std::cout << "Location of P1 on the memory:" << ptr_p1 << std::endl;
    std::cout << "Calling a Method:\n";
    ptr_p1->playerStatus();

}