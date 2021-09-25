#include "Animal.hpp"

Animal::Animal() : m_type("Animal")
{

}
Animal::Animal(const std::string &type) : m_type(type)
{

}
Animal::Animal(const Animal &animal)
{
	*this = animal;
}
Animal::~Animal()
{

}
Animal &Animal::operator=(const Animal &animal)
{
	if (this != &animal)
	{
		m_type = animal.m_type;
	}
	return (*this);
}
std::string Animal::getType(void) const
{
	return (m_type);
}
void Animal::makeSound(void) const
{
	std::cout << "Something on the Animal !" << std::endl;
}
