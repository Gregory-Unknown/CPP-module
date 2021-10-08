#include "Conversion.hpp"

Conversion::Conversion()
{

}
Conversion::Conversion(char c) : m_char(c), m_charer(0), m_inter(0)
{
	m_int = static_cast<int>(c);
	m_float = static_cast<float>(c);
	m_double = static_cast<double>(c);
}
Conversion::Conversion(int num) : m_charer(0), m_int(num), m_inter(0)
{
	m_char = static_cast<char>(num);
	m_float = static_cast<float>(num);
	m_double = static_cast<double>(num);
}
Conversion::Conversion(float fnum) : m_charer(0), m_inter(0), m_float(fnum)
{
	if (m_float > std::numeric_limits<char>::max() || m_float < std::numeric_limits<char>::min() || isnan(m_float)) m_charer = 1;
	if (m_float > std::numeric_limits<int>::max() || m_float < std::numeric_limits<int>::min() || isnan(m_float)) m_inter = 1;
	m_char = static_cast<char>(fnum);
	m_int = static_cast<int>(fnum);
	m_double = static_cast<double>(fnum);
}
Conversion::Conversion(double dnum) : m_double(dnum)
{
	if (m_double > std::numeric_limits<char>::max() || m_double < std::numeric_limits<char>::min() || isnan(m_double)) m_charer = 1;
	if (m_double > std::numeric_limits<int>::max() || m_double < std::numeric_limits<int>::min() || isnan(m_double)) m_inter = 1;
	m_char = static_cast<char>(dnum);
	m_int = static_cast<int>(dnum);
	m_float = static_cast<float>(dnum);
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
		m_char = con.m_char;
		m_charer = con.m_charer;
		m_int = con.m_int;
		m_inter = con.m_inter;
		m_float = con.m_float;
		m_double = con.m_double;
	}
	return (*this);
}

char Conversion::getChar() const
{
	return (m_char);
}
int Conversion::getCharer() const
{
	return (m_charer);
}
int Conversion::getInt() const
{
	return (m_int);
}
int Conversion::getInter() const
{
	return (m_inter);
}
float Conversion::getFloat() const
{
	return (m_float);
}
double Conversion::getDouble() const
{
	return (m_double);
}

std::ostream &operator<<(std::ostream &out, const Conversion &con)
{
	out << "Char : ";
	if (std::isprint(con.getChar()))
		out << con.getChar() << std::endl;
	else if (con.getCharer())
		out << "impossible" << std::endl;
	else
		out << "Non displayable" << std::endl;
	out << "Int : ";
	if (con.getInter())
		out << "impossible" << std::endl;
	else
		out << con.getInt() << std::endl;
	if (con.getFloat() - con.getInt() == 0.0)
		out << "Float : " << con.getFloat() << ".0f" <<std::endl;
	else
		out << "Float : " << con.getFloat() << "f" <<std::endl;
	if (con.getDouble() - con.getInt() == 0.0)
		out << "Double : " << con.getDouble() << ".0";
	else
		out << "Double : " << con.getDouble();
	return (out);
}
