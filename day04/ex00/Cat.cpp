#include "Cat.hpp"

Cat::Cat()
{
	m_type = ("Cat");
}
Cat::Cat(const std::string &type)
{
	m_type = type;
}
Cat::Cat(const Cat &koshak)
{
	*this = koshak;
}
Cat::~Cat()
{

}
Cat &Cat::operator=(const Cat &koshak)
{
	if (this != &koshak)
	{
		m_type = koshak.m_type;
	}
	return (*this);
}
void Cat::makeSound(void) const
{
	std::cout << "Something on the Cat !" << std::endl;
}
