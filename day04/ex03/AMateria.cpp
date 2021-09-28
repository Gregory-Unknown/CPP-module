#include "Amateria.hpp"

AMateria::AMateria() : m_type("default materia")
{

}
AMateria::AMateria(std::string const &type) : m_type(type)
{

}
AMateria::AMateria(AMateria &mat)
{
	*this = mat;
}
AMateria::~AMateria()
{

}
AMateria &AMateria::operator=(AMateria &mat)
{
	if (this != &mat)
	{
		m_type = mat.m_type;
	}
	return (*this);
}
std::string const &AMateria::getType() const
{
	return (m_type);
}
void AMateria::use(ICharacter& target)
{
	std::string tmp = target.getName();
	if (tmp == "Ice")
		std::cout << "* shoots an ice bolt at " << tmp << " *" <<std::endl;
	if (tmp == "Cure")
		std::cout << "* heals N " << tmp << " wounds *" <<std::endl;
}
