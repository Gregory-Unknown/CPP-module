#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

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
	~Bureaucrat();
	const Bureaucrat &operator=(const Bureaucrat &crat);
	std::string getName(void) const;
	int getGrade(void) const;
	void incrementGrade();
	void decrimentGrade();
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
