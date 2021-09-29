#include "Ice.hpp"

Ice::Ice() : AMateria("Ice")
{

}
Ice::Ice(const Ice &mat) : AMateria(mat.getType())
{

}
Ice::~Ice()
{

}
Ice &Ice::operator=(const Ice &mat)
{
	(void)mat;
	return (*this);
}
std::string const &Ice::getType() const
{
	return (m_type);
}
AMateria* Ice::clone() const
{
	AMateria *clone = new Ice(*this);
	return (clone);
}
void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " <<  target.getName() << " *" << std::endl;
}
