#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
class Bureaucrat;

class Form {
private:
	const std::string m_name;
	const int m_grade_to_sign;
	const int m_grade_to_execute;
	bool m_sign;
public:
	Form();
	Form(const int grade_to_sign);
	Form(const std::string name);
	Form(const std::string name, const int grade_to_sign);
	Form(const int grade_to_execute, const int grade_to_sign);
	Form(const std::string &name, const int grade_to_sign, const int grade_to_execute);
	Form(const Form &crat);
	virtual ~Form();
	const Form &operator=(const Form &crat);
	std::string getName(void) const;
	int getGradeSign(void) const;
	int getGradeExecute(void) const;
	bool getSign(void) const;
	void beSigned(const Bureaucrat &crat);
	virtual void execute(const Bureaucrat &executor) const = 0;
	class GradeTooHighException : public std::exception {
	public:
		const char *what() const throw();
	};
	class GradeTooLowException : public std::exception {
	public:
		const char *what() const throw();
	};
	class FormSignedException : public std::exception {
	public:
		const char *what() const throw();
	};
};
std::ostream &operator<<(std::ostream &out, const Form &crat);

#endif
