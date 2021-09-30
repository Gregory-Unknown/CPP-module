#include "Ice.hpp"

Ice::Ice(void): AMateria("ice")
{

}
Ice::Ice(Ice const &mat)
{
	*this = mat;
}
Ice::~Ice(void)
{

}
Ice &Ice::operator=(Ice const &mat)
{
	(void)mat;
	return (*this);
}
AMateria *Ice::clone(void) const
{
	return (new Ice());
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoot an ice bolt at " << target.getName() << " *" << std::endl;
}
