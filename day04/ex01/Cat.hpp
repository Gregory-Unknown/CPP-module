#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
private:
	Brain *m_brain;
public :
	Cat();
	Cat(const std::string &type);
	Cat(const Cat &koshak);
	virtual ~Cat();
	Cat &operator=(const Cat &koshak);
	virtual void makeSound(void) const;
};

#endif
