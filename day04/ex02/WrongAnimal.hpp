#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
protected:
	std::string m_type;
public:
	WrongAnimal();
	WrongAnimal(const std::string &type);
	WrongAnimal(const WrongAnimal &animal);
	virtual ~WrongAnimal();
	WrongAnimal &operator=(const WrongAnimal &animal);
	std::string getType(void) const;
	void makeSound(void) const;
};

#endif
