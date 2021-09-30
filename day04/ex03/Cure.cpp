#include "Cure.hpp"

Cure::Cure(void): AMateria("cure")
{

}
Cure::Cure(Cure const &mat)
{
	*this = mat;
}
Cure::~Cure(void)
{

}
Cure &Cure::operator=(Cure const &mat)
{
	(void)mat;
	return (*this);
}
AMateria *Cure::clone(void) const
{
	return (new Cure());
}
void Cure::use(ICharacter & target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
