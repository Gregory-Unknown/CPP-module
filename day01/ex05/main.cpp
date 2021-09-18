#include "Karen.hpp"

int main()
{
	Karen karen;
	karen.complain(std::string("warning"));
	karen.complain(std::string("info"));
	karen.complain(std::string("debug"));
	karen.complain(std::string("error"));
	return (0);
}
