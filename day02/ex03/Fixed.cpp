#include "Fixed.hpp"

Fixed::Fixed() : m_fixedPointValue(0)
{

}
Fixed::Fixed(const int value)
{
	m_fixedPointValue = value << m_numFracBit;
}
Fixed::Fixed(const float value)
{
	m_fixedPointValue = std::roundf(value * (1 << m_numFracBit));
}
Fixed::Fixed(const Fixed &fix)
{
	*this = fix;
}
Fixed::~Fixed()
{

}
Fixed &Fixed::operator=(const Fixed &fix)
{
	if (this != &fix)
		m_fixedPointValue = fix.getRawBits();
	return (*this);
}
Fixed Fixed::operator+(const Fixed &fix) const
{
	return (Fixed(this->toFloat() + fix.toFloat()));
}
Fixed Fixed::operator-(const Fixed &fix) const
{
	Fixed tmp;
	tmp = this->toFloat() - fix.toFloat();
	return (tmp);
}
Fixed Fixed::operator*(const Fixed &fix) const
{
	Fixed tmp;
	tmp = this->toFloat() * fix.toFloat();
	return (tmp);
}
Fixed Fixed::operator/(const Fixed &fix) const
{
	Fixed tmp;
	if (fix.toFloat() == 0.0)
		throw (std::runtime_error("Cannot divide by zero"));
	tmp = this->toFloat() / fix.toFloat();
	return (tmp);
}
Fixed Fixed::operator++(int)
{
	Fixed fix(*this);
	++m_fixedPointValue;
	return (fix);
}
Fixed &Fixed::operator++()
{
	++m_fixedPointValue;
	return (*this);
}
Fixed Fixed::operator--(int)
{
	Fixed fix(*this);
	--m_fixedPointValue;
	return (fix);
}
Fixed &Fixed::operator--()
{
	--m_fixedPointValue;
	return (*this);
}
bool Fixed::operator==(const Fixed &fix) const
{
	return (m_fixedPointValue == fix.m_fixedPointValue);
}
bool Fixed::operator!=(const Fixed &fix) const
{
	return (m_fixedPointValue != fix.m_fixedPointValue);
}
bool Fixed::operator>(const Fixed &fix) const
{
	return (m_fixedPointValue > fix.m_fixedPointValue);
}
bool Fixed::operator<(const Fixed &fix) const
{
	return (m_fixedPointValue < fix.m_fixedPointValue);
}
bool Fixed::operator>=(const Fixed &fix) const
{
	return (m_fixedPointValue >= fix.m_fixedPointValue);
}
bool Fixed::operator<=(const Fixed &fix) const
{
	return (m_fixedPointValue <= fix.m_fixedPointValue);
}
int Fixed::getRawBits(void) const
{
	return (m_fixedPointValue);
}
void Fixed::setRawBits(int const raw)
{
	m_fixedPointValue = raw;
}
int Fixed::toInt() const
{
	return (m_fixedPointValue >> m_numFracBit);
}
float Fixed::toFloat() const
{
	return ((float)(((float)m_fixedPointValue) / ((float)(1 << m_numFracBit))));
}
Fixed &Fixed::min(Fixed &fix1, Fixed &fix2)
{
	if (fix1.getRawBits() >= fix2.getRawBits())
		return (fix2);
	return (fix1);
}
Fixed &Fixed::max(Fixed &fix1, Fixed &fix2)
{
	if (fix1.getRawBits() >= fix2.getRawBits())
		return (fix1);
	return (fix2);
}
const Fixed &Fixed::min(Fixed const &fix1, Fixed const &fix2)
{
	if (fix1.getRawBits() >= fix2.getRawBits())
		return (fix2);
	return (fix1);
}
const Fixed &Fixed::max(Fixed const &fix1, Fixed const &fix2)
{
	if (fix1.getRawBits() >= fix2.getRawBits())
		return (fix1);
	return (fix2);
}
std::ostream &operator<<(std::ostream &out, Fixed const &fix)
{
	out << fix.toFloat();
	return (out);
}
