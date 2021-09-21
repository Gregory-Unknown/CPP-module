#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

class Point
{
private:
	Fixed const m_x;
	Fixed const m_y;
public:
	Point();
	Point(float x, float y);
	Point(const Point &p);
	Point &operator = (const Point &p);
	~Point();

	Fixed const &getX() const;
	Fixed const &getY() const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif
