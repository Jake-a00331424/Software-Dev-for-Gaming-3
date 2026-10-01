#include <iostream>
#include "Player.h"
#include "Point2D.h"
using std::endl, std::cout;


int main()
{
	Point2D pointA(4,6);
	Point2D pointB(4,6);
	
	Point2D pointC = pointA + pointB;

	Player p1("Player", 100);
	Point2D point(4, 6);
	cout << "[" << pointC.getX() << ", " << pointC.getY() << "]" << endl;
}