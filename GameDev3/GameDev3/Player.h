#include <iostream>
#include "Point2D.h"

#define DEBUG

class Player
{
    std::string playerName;
    int hitPoints;
    Point2D position;
public:
    Player(std::string name, int hp);
    //Player(); //overloaded constructor
    void levelUp();
    void playerStatus();
    ~Player(); //class destructor!

}; 








