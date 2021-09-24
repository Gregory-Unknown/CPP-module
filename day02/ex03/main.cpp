#include "Point.hpp"

int main(void)
{
	std::cout << bsp(Point(5, 3), Point(9,8), Point(9,2), Point(7,5)) << std::endl;
	std::cout << bsp(Point(5, 3), Point(9,8), Point(9,2), Point(9,5)) << std::endl;
	std::cout << bsp(Point(5, 3), Point(9,8), Point(9,2), Point(4,3)) << std::endl;
	std::cout << bsp(Point(0, 0), Point(9,8), Point(9,2), Point(7,5)) << std::endl;
	std::cout << bsp(Point(5, 3), Point(0,0), Point(9,2), Point(9,5)) << std::endl;
	std::cout << bsp(Point(5, 3), Point(9,8), Point(0,0), Point(4,3)) << std::endl;
	std::cout << bsp(Point(5, 3), Point(9,8), Point(9,2), Point(0,0)) << std::endl;
	std::cout << bsp(Point(0, 0), Point(0,0), Point(0,0), Point(0,0)) << std::endl;
	return (0);
}
