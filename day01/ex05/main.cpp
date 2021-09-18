#include "Karen.hpp"

int main()
{
	Karen karen;

	std::cout << std::endl;

	karen.complain(std::string("warning"));
	std::cout << std::endl;

	karen.complain(std::string("info"));
	std::cout << std::endl;

	karen.complain(std::string("debug"));
	std::cout << std::endl;

	karen.complain(std::string("error"));
	std::cout << std::endl;
	return (0);
}
