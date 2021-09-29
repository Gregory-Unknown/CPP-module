#include "Cure.hpp"

Cure::Cure() : AMateria("Cure")
{

}
Cure::Cure(const Cure &mat) : AMateria(mat.getType())
{

}
Cure::~Cure()
{

}
Cure &Cure::operator=(const Cure &mat)
{
	(void)mat;
	return (*this);
}
std::string const &Cure::getType() const
{
	return (m_type);
}
AMateria* Cure::clone() const
{
	AMateria *clone = new Cure(*this);
	return (clone);
}
void Cure::use(ICharacter& target)
{
	std::cout << "* heals " <<  target.getName() << "’s wounds *" << std::endl;
}
