#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : m_name("Default"), m_hitpoints(1000000), m_energyPoint(1), m_attackDamage(0)
{
	std::cout << "Default constructor !" << std::endl;
}
ClapTrap::ClapTrap(std::string name) : m_name(name), m_hitpoints(10), m_energyPoint(10), m_attackDamage(0)
{
	std::cout << "Init constructor !" << std::endl;
}
ClapTrap::ClapTrap(ClapTrap &trap)
{
	std::cout << "Copy constructor !" << std::endl;
	*this = trap;
}
ClapTrap::~ClapTrap()
{
	std::cout << "Destructor !" << std::endl;
}
ClapTrap &ClapTrap::operator=(const ClapTrap &trap)
{
	std::cout << "Assignation operator !" << std::endl;
	if (this != &trap)
	{
		m_name = trap.m_name;
		m_hitpoints = trap.m_hitpoints;
		m_energyPoint = trap.m_energyPoint;
		m_attackDamage = trap.m_attackDamage;
	}
	return (*this);
}
void ClapTrap::attack(std::string const & target)
{
	std::cout << "ClapTrap " << m_name << " attack " << target << " , causing " << m_attackDamage << " points of damage!" << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << m_name << " take " << amount << " points of damage!" << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << m_name << " be rapaired " << amount << " of hitpoints !" << std::endl;
}
