#include "Point2D.h"
#include <iostream>

Point2D::Point2D(int x, int y)
{
	this->x = x;
	this->y = y;
}

int Point2D::getX()
{
	return x;
}

int Point2D::getY()
{
	return y;
}
