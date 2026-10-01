#pragma once


class Point2D
{
private:
	int x;
	int y;

public:
	Point2D(int x = 0, int y = 0);
	int getX();
	int getY();

	~Point2D() {
		std::cout << "point destroyed " << std::endl;
	}
	friend Point2D operator+(Point2D p1, Point2D p2) {
		int x = p1.x + p2.x;
		int y = p1.y + p2.y;
		return Point2D(x, y);
	}
};


