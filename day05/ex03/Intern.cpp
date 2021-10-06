#include "Intern.hpp"

Intern::Intern()
{

}
Intern::Intern(const Intern &intern)
{
	*this = intern;
}
Intern::~Intern()
{

}
Intern &Intern::operator=(const Intern &intern)
{
	(void) intern;
	return (*this);
}
Form *presidentialPardonForm(const std::string &target)
{
	return (new PresidentialPardonForm(target));
}
Form *robotomyRequestForm(const std::string &target)
{
	return (new RobotomyRequestForm(target));
}
Form *shrubberyCreationForm(const std::string &target)
{
	return (new ShrubberyCreationForm(target));
}
Form *Intern::makeForm(const std::string &name, const std::string &target) const
{
	typedef struct s_struct {
		std::string name;
		Form *(*action)(const std::string &target);
	} t_struct;
	t_struct array[] = {{"presidential pardon", &presidentialPardonForm},
						{"robotomy request", &robotomyRequestForm},
						{"shrubbery creation", &shrubberyCreationForm}};
	for (int i = 0; i < 3; ++i) {
		if (name == array[i].name) {
			std::cout << "Intern creates " << name << target << std::endl;
			return (array[i].action(target));
		}
	}
	std::cout << "Error : Unknown form ! Error name " << name << " !" << std::endl;
	return (NULL);
}
