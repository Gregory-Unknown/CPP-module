#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"
class Form;

class Bureaucrat {
private:
	const std::string m_name;
	int m_grade;
public:
	Bureaucrat();
	Bureaucrat(int grade);
	Bureaucrat(const std::string name);
	Bureaucrat(const std::string name, int grade);
	Bureaucrat(const Bureaucrat &crat);
	virtual ~Bureaucrat();
	const Bureaucrat &operator=(const Bureaucrat &crat);
	std::string getName(void) const;
	int getGrade(void) const;
	void incrementGrade();
	void decrimentGrade();
	void signForm(Form &crat);
	void executeForm(const Form &form);
	class GradeTooHighException : public std::exception {
	public:
		const char *what() const throw();
	};
	class GradeTooLowException : public std::exception {
	public:
		const char *what() const throw();
	};
};
std::ostream &operator<<(std::ostream &out, const Bureaucrat &crat);

#endif
