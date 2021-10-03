#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

class PresidentialPardonForm : public Form {
private :
	std::string m_target;
public :
	PresidentialPardonForm();
	PresidentialPardonForm(const std::string &target);
	PresidentialPardonForm(const PresidentialPardonForm &crat);
	~PresidentialPardonForm();
	PresidentialPardonForm &operator=(const PresidentialPardonForm &crat);
	virtual void execute(const Bureaucrat &executor) const;
};

#endif
