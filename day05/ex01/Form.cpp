#include "Form.hpp"

Form::Form() : m_name("Unknown"), m_grade_to_sign(150), m_grade_to_execute(150), m_sign(false)
{

}
Form::Form(const int grade_to_sign) : m_name("Unknown"), m_grade_to_sign(grade_to_sign), m_grade_to_execute(150), m_sign(false)
{
	if (m_grade_to_sign < 1) throw GradeTooHighException();
	if (m_grade_to_sign > 150) throw GradeTooLowException();
}
Form::Form(const std::string name) : m_name(name), m_grade_to_sign(0), m_grade_to_execute(0), m_sign(false)
{

}
Form::Form(const std::string name, const int grade_to_sign) : m_name(name), m_grade_to_sign(grade_to_sign), m_grade_to_execute(150), m_sign(false)
{
	if (m_grade_to_sign < 1) throw GradeTooHighException();
	if (m_grade_to_sign > 150) throw GradeTooLowException();
}
Form::Form(const int grade_to_execute, const int grade_to_sign) : m_name("Unknown"), m_grade_to_sign(grade_to_sign), m_grade_to_execute(grade_to_execute), m_sign(false)
{
	if (m_grade_to_sign < 1 || m_grade_to_execute < 1) throw GradeTooHighException();
	if (m_grade_to_sign > 150 || m_grade_to_execute > 150) throw GradeTooLowException();
}
Form::Form(const std::string &name, const int grade_to_sign, const int grade_to_execute) : m_name(name), m_grade_to_sign(grade_to_sign), m_grade_to_execute(grade_to_execute), m_sign(false)
{
	if (m_grade_to_sign < 1 || m_grade_to_execute < 1) throw GradeTooHighException();
	if (m_grade_to_sign > 150 || m_grade_to_execute > 150) throw GradeTooLowException();
}
Form::Form(const Form &crat) : m_name(crat.m_name), m_grade_to_sign(crat.m_grade_to_sign), m_grade_to_execute(crat.m_grade_to_execute), m_sign(crat.m_sign)
{
	*this = crat;
}
Form::~Form()
{

}
const Form &Form::operator=(const Form &crat)
{
	if (m_grade_to_sign < 1 || m_grade_to_execute < 1) throw GradeTooHighException();
	if (m_grade_to_sign > 150 || m_grade_to_execute > 150) throw GradeTooLowException();
	if (this != &crat)
	{
		m_sign = crat.m_sign;
	}
	return (*this);
}
std::string Form::getName(void) const
{
	return (m_name);
}
int Form::getGradeSign(void) const
{
	return (m_grade_to_sign);
}
int Form::getGradeExecute(void) const
{
	return(m_grade_to_execute);
}
bool Form::getSign(void) const
{
	return (m_sign);
}
void Form::beSigned(const Bureaucrat &crat)
{
	if (m_grade_to_sign < crat.getGrade())
		throw GradeTooLowException();
	m_sign = true;
}
const char *Form::GradeTooHighException::what() const throw()
{
	return ("Too High Exception in Form !");
}
const char *Form::GradeTooLowException::what() const throw()
{
	return("Too Low Exception in Form !");
}
std::ostream &operator<<(std::ostream &out, const Form &crat)
{
	out << "And new " << crat.getName() << " form grade to sign " << crat.getGradeSign() << ", grade to execute " << crat.getGradeExecute() << ", is signed " << crat.getSign();
	return (out);
}
