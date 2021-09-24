#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "Default constructor Diamond!" << std::endl;
	ClapTrap::m_name += "_clap_name";
	m_hitpoints = FragTrap::m_hitpoints;
	m_energyPoint = ScavTrap::m_energyPoint;
	m_attackDamage = FragTrap::m_attackDamage;
}
DiamondTrap::DiamondTrap(const std::string &name)
{
	std::cout << "Init constructor Diamond!" << std::endl;
	m_name = name;
	m_hitpoints = FragTrap::m_hitpoints;
	m_energyPoint = ScavTrap::m_energyPoint;
	m_attackDamage = FragTrap::m_attackDamage;
}
DiamondTrap::DiamondTrap(const DiamondTrap &trap)
{
	std::cout << "Copy constructor Diamond!" << std::endl;
	*this = trap;
}
DiamondTrap::~DiamondTrap()
{
	std::cout << "Destructor Diamond!" << std::endl;
}
DiamondTrap &DiamondTrap::operator=(const DiamondTrap &trap)
{
	std::cout << "Assignation operator Diamond!" << std::endl;
	if (this != &trap)
	{
		m_name = trap.m_name;
		m_hitpoints = trap.m_hitpoints;
		m_energyPoint = trap.m_energyPoint;
		m_attackDamage = trap.m_attackDamage;
	}
	return (*this);
}
void DiamondTrap::whoAmI()
{
	std::cout << "the DiamondTrap name is " << m_name << " and the ClapTrap name is " << ClapTrap::m_name << std::endl;
}
