#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
	int m_fixedPointValue;
	static const int m_numFracBit = 8;
	public:
	Fixed();
	Fixed(const int value);
	Fixed(const float value);
	Fixed(const Fixed &fix);
	~Fixed();
	Fixed &operator=(const Fixed &fix);
	Fixed operator+(const Fixed &fix) const;
	Fixed operator-(const Fixed &fix) const;
	Fixed operator*(const Fixed &fix) const;
	Fixed operator/(const Fixed &fix) const;
	Fixed operator++(int);
	Fixed &operator++();
	Fixed operator--(int);
	Fixed &operator--();
	bool operator==(const Fixed &fix) const;
	bool operator!=(const Fixed &fix) const;
	bool operator>(const Fixed &fix) const;
	bool operator<(const Fixed &fix) const;
	bool operator>=(const Fixed &fix) const;
	bool operator<=(Fixed const &fix) const;
	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
	static Fixed &min(Fixed &fix1, Fixed &fix2);
	static Fixed &max(Fixed &fix1, Fixed &fix2);
	static const Fixed &min(Fixed const &fix1, Fixed const &fix2);
	static const Fixed &max(Fixed const &fix1, Fixed const &fix2);
};

std::ostream &operator<<(std::ostream &out, Fixed const &fix);

#endif
