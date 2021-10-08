#ifndef CONVERSION_HPP
#define CONVERSION_HPP

#include <iostream>
#include <sstream>
#include <cmath>

class Conversion {
private:
	char m_char;
	int m_charer;
	int	m_int;
	int m_inter;
	float m_float;
	double m_double;
public:
	Conversion();
	Conversion(char c);
	Conversion(int num);
	Conversion(float fnum);
	Conversion(double dnum);
	Conversion(const std::string &str);
	Conversion(const Conversion &con);
	~Conversion();
	Conversion &operator=(const Conversion &con);
	char getChar() const;
	int getCharer() const;
	int getInt() const;
	int getInter() const;
	float getFloat() const;
	double getDouble() const;
};
std::ostream &operator<<(std::ostream &out, const Conversion &con);
#endif
