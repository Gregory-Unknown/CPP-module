#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
public :
	Dog();
	Dog(const std::string &type);
	Dog(const Dog &sobaken);
	~Dog();
	Dog &operator=(const Dog &sobaken);
	virtual void makeSound(void) const;
};

#endif
