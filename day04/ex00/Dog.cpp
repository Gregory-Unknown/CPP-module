#include "Dog.hpp"

Dog::Dog()
{
	m_type = "Dog";
}
Dog::Dog(const std::string &type)
{
	m_type = type;
}
Dog::Dog(const Dog &sobaken)
{
	*this = sobaken;
}
Dog::~Dog()
{

}
Dog &Dog::operator=(const Dog &sobaken)
{
	if (this != &sobaken)
	{
		m_type = sobaken.m_type;
	}
	return (*this);
}
void Dog::makeSound(void) const
{
	std::cout << "Something on the Dog !" << std::endl;
}
