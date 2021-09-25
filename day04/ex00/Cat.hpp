#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
public :
	Cat();
	Cat(const std::string &type);
	Cat(const Cat &koshak);
	~Cat();
	Cat &operator=(const Cat &koshak);
	virtual void makeSound(void) const;
};

#endif
