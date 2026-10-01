#include <iostream>
#include "Point2D.h"

#define DEBUG

class Player
{
    std::string playerName;
    int hitPoints;
    Point2D position; // composition 
public:
    Player(std::string name, int hp);
    void levelUp();
    void playerStatus();
    ~Player(); //class destructor!

}; 








