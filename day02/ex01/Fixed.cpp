#include "Fixed.hpp"

Fixed::Fixed() : m_fixedPointValue(0)
{
	std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	m_fixedPointValue = value << m_numFracBit;
}
Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	m_fixedPointValue = std::roundf(value * (1 << m_numFracBit));
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

int Fixed::toInt() const
{
	return (m_fixedPointValue >> m_numFracBit);
}

float Fixed::toFloat() const
{
	return ((float)(m_fixedPointValue / (1 << m_numFracBit)));
}
std::ostream &operator<<(std::ostream &out, Fixed const &fix)
{
	out << fix.toFloat();
	return (out);
}
