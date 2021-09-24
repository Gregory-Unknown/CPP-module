#include "Point.hpp"

Point::Point() : m_x(0), m_y(0)
{

}
Point::Point(Fixed x, Fixed y) : m_x(x), m_y(y)
{

}
Point::Point(const Point &p) : m_x(p.m_x), m_y(p.m_y)
{

}
Point &Point::operator=(const Point &p)
{
	return (*this);
}
Point::~Point()
{

}
Fixed const &Point::getX() const
{
	return (m_x);
}
Fixed const &Point::getY() const
{
	return (m_y);
}
