#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "Default constructor Scav!" << std::endl;
	m_name = "Default Scav";
	m_hitpoints = 1000002;
	m_energyPoint = 2;
	m_attackDamage = 2;
}
ScavTrap::ScavTrap(const std::string &name)
{
	std::cout << "Init constructor Scav!" << std::endl;
	m_name = name;
	m_hitpoints = 100;
	m_energyPoint = 50;
	m_attackDamage = 20;
}
ScavTrap::ScavTrap(ScavTrap &trap)
{
	std::cout << "Copy constructor Scav!" << std::endl;
	*this = trap;
}
ScavTrap::~ScavTrap()
{
	std::cout << "Destructor Scav!" << std::endl;
}
ScavTrap &ScavTrap::operator=(const ScavTrap &trap)
{
	std::cout << "Assignation operator Scav!" << std::endl;
	if (this != &trap)
	{
		m_name = trap.m_name;
		m_hitpoints = trap.m_hitpoints;
		m_energyPoint = trap.m_energyPoint;
		m_attackDamage = trap.m_attackDamage;
	}
	return (*this);
}
void ScavTrap::guardGate()
{
	std::cout << "For the " << m_name << "guard mode activated !" << std::endl;
}
