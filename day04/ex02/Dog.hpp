#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
private :
	Brain *m_brain;
public :
	Dog();
	Dog(const std::string &type);
	Dog(const Dog &sobaken);
	virtual ~Dog();
	Dog &operator=(const Dog &sobaken);
	virtual void makeSound(void) const;
};

#endif
