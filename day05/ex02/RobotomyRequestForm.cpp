#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45), m_target("Something great !")
{

}
RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : Form("RobotomyRequestForm", 72, 45), m_target(target)
{

}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &crat) : Form(crat.getName(), 72, 45)
{
	*this = crat;
}
RobotomyRequestForm::~RobotomyRequestForm()
{

}
RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &crat)
{
	if (this != &crat) {
		m_target = crat.m_target;
	}
	return (*this);
}
void RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	if (!getSign())
		throw FormSignedException();
	else if (getGradeExecute() < executor.getGrade())
		throw GradeTooLowException();
	else {
		if (rand() % 2 == 0)
			std::cout << m_target << " has been robotomized successfully." << std::endl;
		else
			std::cout << m_target << " has been robotomized with failure." << std::endl;
	}
}
