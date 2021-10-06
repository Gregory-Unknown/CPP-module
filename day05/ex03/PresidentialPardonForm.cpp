#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 25, 5), m_target("Something important !")
{

}
PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : Form("PresidentialPardonForm", 25, 5), m_target(target)
{

}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &crat) : Form(crat.getName(), 25, 5)
{
	*this = crat;
}
PresidentialPardonForm::~PresidentialPardonForm()
{

}
PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &crat)
{
	if (this != &crat) {
		m_target = crat.m_target;
	}
	return (*this);
}
void PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	if (!getSign())
		throw FormSignedException();
	else if (getGradeExecute() < executor.getGrade())
		throw GradeTooLowException();
	else {
		std::cout << m_target << " has been pardoned by Zafod Beeblebrox." << std::endl;
	}

}
