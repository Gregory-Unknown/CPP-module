#include "AMateria.hpp"

AMateria::AMateria(void)
{

}
AMateria::AMateria(std::string const & type): m_type(type)
{

}
AMateria::AMateria(AMateria const &mat)
{
	*this = mat;
}
AMateria &AMateria::operator=(AMateria const &mat)
{
	if (this != &mat)
		m_type = mat.m_type;
	return (*this);
}
AMateria::~AMateria(void)
{

}
std::string const &	AMateria::getType(void) const
{
	return (m_type);
}
void	AMateria::use(ICharacter & target)
{
	(void)target;
}
