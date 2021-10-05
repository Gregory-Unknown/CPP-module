#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	try
	{
		Bureaucrat tramp("Tramp", 1);
		Bureaucrat bush("Bush", 2);
		std::cout << tramp << std::endl;
		std::cout << bush << std::endl;
		Form *tree = new ShrubberyCreationForm("garden");
		std::cout << *tree << std::endl;
		tree->beSigned(tramp);
		tree->execute(bush);
		tree->execute(tramp);
		tramp.executeForm(*tree);
		bush.executeForm(*tree);
		std::cout << *tree << std::endl;
		tree->beSigned(tramp);
		std::cout << tramp << std::endl;
		Form *robot = new RobotomyRequestForm("robot");
		std::cout << *robot << std::endl;
		robot->beSigned(tramp);
		robot->execute(bush);
		robot->execute(bush);
		robot->execute(bush);
		robot->execute(bush);
		robot->execute(bush);
		robot->execute(bush);
		robot->execute(bush);
		robot->execute(bush);
		robot->execute(bush);
		robot->execute(bush);
		tramp.executeForm(*robot);
		bush.executeForm(*robot);
		Form *president = new PresidentialPardonForm("president");
		std::cout << *president << std::endl;
		president->beSigned(tramp);
		president->execute(bush);
		tramp.executeForm(*president);
		bush.executeForm(*president);
		delete president;
		delete robot;
		delete tree;

	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
		return (1);
	}
	system("leaks No,_you_need_orm_28B,_not_28C...");
	return (0);
}
