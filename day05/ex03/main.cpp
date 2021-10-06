#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{

	Intern someRandomIntern;
	Form* rrf;
	rrf = someRandomIntern.makeForm("asdd a", "Bender");
	try
	{
		Bureaucrat tramp("Tramp", 1);
		Bureaucrat bush("Bush", 2);
		std::cout << tramp << std::endl;
		std::cout << bush << std::endl;


	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
		return (1);
	}
	delete rrf;
	system("leaks At_least_this_beats_coffee-making");
	return (0);
}
