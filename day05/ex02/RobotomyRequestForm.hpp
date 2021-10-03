#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

class RobotomyRequestForm : public Form {
public :
	RobotomyRequestForm();
	RobotomyRequestForm(const RobotomyRequestForm &crat);
	~RobotomyRequestForm();
	RobotomyRequestForm &operator=(const RobotomyRequestForm &crat);
};

#endif
