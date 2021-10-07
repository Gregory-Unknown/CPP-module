#include "Conversion.hpp"

int is_int(std::string &str)
{
	for (int i = 0; i < str.size(); ++i) {
		if (str.at(i) < 48 || str.at(i) > 57)
			return (0);
	}
}

Conversion::Conversion()
{

}
Conversion::Conversion(const std::string &str) : m_str(str)
{
	if (m_str == "-inf" || m_str == "+inf" || m_str == "nan") {
		m_type = "double";
		double_type = m_str;
		float_type = NULL;
		int_type = NULL;
		char_type = NULL;
	}
	if (m_str == "-inff" || m_str == "+inff" || m_str == "nanf") {
		m_type = "float";
		double_type = NULL;
		float_type = m_str;
		int_type = NULL;
		char_type = NULL;
	}
	if (is_int(m_str)) {
		m_type = "int";
		double_type = NULL;
		float_type = NULL;
		int_type = m_str;
		char_type = NULL;
	}
}
Conversion::Conversion(const Conversion &con)
{
	*this = con;
}
Conversion::~Conversion()
{

}
Conversion &Conversion::operator=(const Conversion &con)
{
	if (this != &con)
	{
		m_str = con.m_str;
	}
	return (*this);
}
void Conversion::print()
{
	std::istringstream ss1;
	std::cout << "m_str " << m_str << std::endl;
	ss1.str(m_str);
	int i = 0;
	ss1 >> i;
	std::cout << "char " << static_cast<char>(i) << std::endl;
	std::cout << "int " << static_cast<int>(m_str[0]) << std::endl;
	std::cout << "int " << static_cast<int>(i) << std::endl;
	std::istringstream ss2;
	ss2.str(m_str);
	float j = 0.0;
	ss2 >> j;
	//j = static_cast<float>(j);
	if (i - j == 0.0)
		std::cout << "float " << static_cast<float>(m_str[0]) << ".0f" << std::endl;
	else
		std::cout << "float " << static_cast<float>(m_str[0]) << "f" << std::endl;
	if (i - j == 0.0)
		std::cout << "float " << j << ".0f" << std::endl;
	else
		std::cout << "float " << j << "f" << std::endl;
	if (i - j == 0.0)
		std::cout << "double " << static_cast<double>(j) << ".0" << std::endl;
	else
		std::cout << "double " << static_cast<double>(j) << std::endl;
	if (i - j == 0.0)
		std::cout << "double " << static_cast<double>(m_str[0]) << ".0" << std::endl;
	else
		std::cout << "double " << static_cast<double>(m_str[0]) << std::endl;

}
