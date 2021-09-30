#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

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
	Bureaucrat &operator=(const Bureaucrat &crat);
	std::string &getName(void) const;
	void setName(const std::string &name);
	int getGrade(void) const;
	void setGrade(int grade);
};
std::ostream &operator<<(std::ostream &out, const Bureaucrat &crat);

#endif
