#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

class ShruberryCreationForm : public Form {
public :
	ShruberryCreationForm();
	ShruberryCreationForm(const ShruberryCreationForm &crat);
	~ShruberryCreationForm();
	ShruberryCreationForm &operator=(const ShruberryCreationForm &crat);
};

#endif
