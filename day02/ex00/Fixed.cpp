#include "Fixed.hpp"

Fixed::Fixed() : m_fixedPointValue(0)
{
	std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const Fixed &fix)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fix;
}
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
Fixed &Fixed::operator=(const Fixed &fix)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &fix)
		m_fixedPointValue = fix.getRawBits();
	return (*this);
}
int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (m_fixedPointValue);
}
void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	m_fixedPointValue = raw;
}
