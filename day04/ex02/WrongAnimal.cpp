
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : m_type("WrongAnimal")
{

}
WrongAnimal::WrongAnimal(const std::string &type) : m_type(type)
{

}
WrongAnimal::WrongAnimal(const WrongAnimal &animal)
{
	*this = animal;
}
WrongAnimal::~WrongAnimal()
{

}
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &animal)
{
	if (this != &animal)
	{
		m_type = animal.m_type;
	}
	return (*this);
}
std::string WrongAnimal::getType(void) const
{
	return (m_type);
}
void WrongAnimal::makeSound(void) const
{
	std::cout << "Something on the WrongAnimal !" << std::endl;
}
