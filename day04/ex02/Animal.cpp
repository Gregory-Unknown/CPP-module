#include "Animal.hpp"

Animal::Animal() : m_type("Animal")
{
	std::cout << "Default Animal Contructor !" << std::endl;
}
Animal::Animal(const std::string &type) : m_type(type)
{
	std::cout << "Init Animal Contructor !" << std::endl;
}
Animal::Animal(const Animal &animal)
{
	std::cout << "Copy Animal Contructor !" << std::endl;
	*this = animal;
}
Animal::~Animal()
{
	std::cout << "Destructor Animal !" << std::endl;
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
