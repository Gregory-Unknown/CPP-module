#ifndef CONVERSION_HPP
#define CONVERSION_HPP

#include <iostream>
#include <sstream>

class Conversion {
private:
	std::string m_str;
	std::string m_type;
	char m_sym;
	std::string char_type;
	int	m_num;
	std::string int_type;
	float m_flum;
	std::string float_type;
	double m_dum;
	std::string double_type;
public:
	Conversion();
	Conversion(const std::string &str);
	Conversion(const Conversion &con);
	~Conversion();
	Conversion &operator=(const Conversion &con);
	void print();
};

#endif
