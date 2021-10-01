#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat tramp("Tramp", 149);
		std::cout << tramp << std::endl;
		tramp.incrementGrade();
		std::cout << tramp << std::endl;
		tramp.decrimentGrade();
		std::cout << tramp << std::endl;
		tramp.setGrade(151);
		std::cout << tramp << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
		return (1);
	}
	return (0);
}
