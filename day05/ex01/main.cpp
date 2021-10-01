#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		Bureaucrat tramp("Tramp", 1);
		Form popcorn("POP", 10, 51);
		std::cout << tramp << std::endl;
		std::cout << popcorn << std::endl;
		tramp.incrementGrade();
		tramp.signForm(popcorn);
		std::cout << tramp << std::endl;
		std::cout << popcorn << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
		return (1);
	}
	return (0);
}
