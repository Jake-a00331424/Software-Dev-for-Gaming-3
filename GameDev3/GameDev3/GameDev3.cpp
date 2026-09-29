#include <iostream>
#include "Player.h"
#include "Point2D.h"

int main()
{
	Player p1("Player", 100);

	Point2D point(4, 6);
	std::cout << "[" << point.getX() << ", " << point.getY() << "]" << std::endl;
}