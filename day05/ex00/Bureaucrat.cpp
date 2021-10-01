#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : m_name("Unknown"), m_grade(150)
{

}
Bureaucrat::Bureaucrat(int grade) : m_name("Unknown"), m_grade(grade)
{
	if (m_grade > 150) throw GradeTooHighException();
	if (m_grade < 1) throw GradeTooLowException();
}
Bureaucrat::Bureaucrat(const std::string name) : m_name(name), m_grade(150)
{

}
Bureaucrat::Bureaucrat(const std::string name, int grade) : m_name(name), m_grade(grade)
{
	if (m_grade > 150) throw GradeTooHighException();
	if (m_grade < 1) throw GradeTooLowException();
}
Bureaucrat::Bureaucrat(const Bureaucrat &crat)
{
	*this = crat;
}
Bureaucrat::~Bureaucrat()
{

}
const Bureaucrat &Bureaucrat::operator=(const Bureaucrat &crat)
{
	if (this != &crat)
	{
		m_name = crat.m_name;
		m_grade = crat.m_grade;
		if (m_grade > 150) throw GradeTooHighException();
		if (m_grade < 1) throw GradeTooLowException();
	}
	return (*this);
}
std::string Bureaucrat::getName(void) const
{
	return (m_name);
}
int Bureaucrat::getGrade(void) const
{
	return (m_grade);
}
void Bureaucrat::setName(const std::string &name)
{
	m_name = name;
}
void Bureaucrat::setGrade(int grade)
{
	m_grade = grade;
	if (m_grade > 150) throw GradeTooHighException();
	if (m_grade < 1) throw GradeTooLowException();
}
void Bureaucrat::incrementGrade()
{
	++m_grade;
	if (m_grade > 150) throw GradeTooHighException();
}
void Bureaucrat::decrimentGrade()
{
	--m_grade;
	if (m_grade < 1) throw GradeTooLowException();
}
const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Too High Exception!");
}
const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Too Low Exception!");
}
std::ostream &operator<<(std::ostream &out, const Bureaucrat &crat)
{
	out << "And still " << crat.getName() << ", bureaucrat grade " << crat.getGrade();
	return (out);
}
