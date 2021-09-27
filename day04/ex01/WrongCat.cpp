#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	m_type = ("WrongCat");
}
WrongCat::WrongCat(const std::string &type)
{
	m_type = type;
}
WrongCat::WrongCat(const WrongCat &koshak)
{
	*this = koshak;
}
WrongCat::~WrongCat()
{

}
WrongCat &WrongCat::operator=(const WrongCat &koshak)
{
	if (this != &koshak)
	{
		m_type = koshak.m_type;
	}
	return (*this);
}
void WrongCat::makeSound(void) const
{
	std::cout << "Something on the WrongCat !" << std::endl;
}
