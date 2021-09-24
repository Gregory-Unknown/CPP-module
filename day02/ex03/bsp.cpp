#include "Point.hpp"


bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	float abp = ((b.getX() - a.getX()) * (point.getY() - a.getY()) - (b.getY() - a.getY()) * (point.getX() - a.getX())).toFloat();
	float bcp = ((c.getX() - b.getX()) * (point.getY() - b.getY()) - (c.getY() - b.getY()) * (point.getX() - b.getX())).toFloat();
	float cap = ((a.getX() - c.getX()) * (point.getY() - c.getY()) - (a.getY() - c.getY()) * (point.getX() - c.getX())).toFloat();
	if ((abp > 0 && bcp > 0 && cap > 0) || (abp < 0 && bcp < 0 && cap < 0)) return (true);
	return (false);
}
