#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : m_name("Unknown"), m_grade(150)
{

}
Bureaucrat::Bureaucrat(int grade) : m_name("Unknown"), m_grade(grade)
{
	if (m_grade > 150) throw GradeTooLowException();
	if (m_grade < 1) throw GradeTooHighException();
}
Bureaucrat::Bureaucrat(const std::string name) : m_name(name), m_grade(150)
{

}
Bureaucrat::Bureaucrat(const std::string name, int grade) : m_name(name), m_grade(grade)
{
	if (m_grade > 150) throw GradeTooLowException();
	if (m_grade < 1) throw GradeTooHighException();
}
Bureaucrat::Bureaucrat(const Bureaucrat &crat) : m_name(crat.m_name)
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
		m_grade = crat.m_grade;
		if (m_grade > 150) throw GradeTooLowException();
		if (m_grade < 1) throw GradeTooHighException();
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
void Bureaucrat::incrementGrade()
{
	++m_grade;
	if (m_grade > 150) throw GradeTooLowException();
}
void Bureaucrat::decrimentGrade()
{
	--m_grade;
	if (m_grade < 1) throw GradeTooHighException();
}
void Bureaucrat::signForm(Form &crat)
{
	if (crat.getSign())
		std::cout << m_name << " cannot sign " << crat.getName() << " because " << crat.getName() << "is already signed" << std::endl;
	else if (crat.getGradeSign() < m_grade)
		std::cout << m_name << " cannot sign " << crat.getName() << " because " << m_name << " has not enough high grade" << std::endl;
	else {
		std::cout << m_name << " signs " << crat.getName() << std::endl;
		crat.beSigned(*this);
	}
}
void Bureaucrat::executeForm(const Form &form)
{
	if (!form.getSign())
		std::cout << m_name << " cannot execute this form " << form.getName() << " because " << form.getName() << "is not signed" << std::endl;
	else if (form.getGradeExecute() < m_grade)
		std::cout << m_name << " cannot execute this form " << form.getName() << " because " << form.getName() << " has not enough high grade" << std::endl;
	else {
		std::cout << m_name << " execute " << form.getName() << std::endl;
		form.execute(*this);
	}
}
const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Too High Exception in Bureaucrat !");
}
const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Too Low Exception in Bureaucrat !");
}
std::ostream &operator<<(std::ostream &out, const Bureaucrat &crat)
{
	out << "And still " << crat.getName() << ", bureaucrat grade " << crat.getGrade();
	return (out);
}
