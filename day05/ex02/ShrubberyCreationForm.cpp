#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137), m_target("Something significant !")
{

}
ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : Form("ShrubberyCreationForm", 145, 137), m_target(target)
{

}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &crat) : Form(crat.getName(), 145, 137)
{
	*this = crat;
}
ShrubberyCreationForm::~ShrubberyCreationForm()
{

}
ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &crat)
{
	if (this != &crat) {
		m_target = crat.m_target;
	}
	return (*this);
}
void ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	if (!getSign())
		throw FormSignedException();
	else if (getGradeExecute() < executor.getGrade())
		throw GradeTooLowException();
	else {
		try {
			std::ofstream file(m_target + "_shrubbery", std::ios::trunc);
			if (file.bad())
				throw ("Bad file !");
			file << "..$$$$$$$$$..\n"
					<< "..$$$$$$$$$..\n"
					<< "..$$$$$$$$$..\n"
					<< "..$$$$$$$$$..\n"
					<< "..$$$$$$$$$..\n"
					<< "..$$$$$$$$$..\n"
					<< ".....|||.....\n"
					<< ".....|||.....\n"
					<< ".....|||.....\n"
					<< "_____|||_____" << std::endl;
			if (file.bad()) {
				file.close();
				throw ("Bad file !");
			}
			file.close();
		} catch (const char *e)
		{
			std::cerr << "Error with file : " << e << std::endl;
		}
	}

}
