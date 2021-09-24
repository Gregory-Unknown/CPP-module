#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "Default constructor Frag!" << std::endl;
	m_name = "Default Frag";
	m_hitpoints = 1000003;
	m_energyPoint = 3;
	m_attackDamage = 3;
}
FragTrap::FragTrap(const std::string &name)
{
	std::cout << "Init constructor Frag!" << std::endl;
	m_name = name;
	m_hitpoints = 100;
	m_energyPoint = 100;
	m_attackDamage = 30;
}
FragTrap::FragTrap(FragTrap &trap)
{
	std::cout << "Copy constructor Frag!" << std::endl;
	*this = trap;
}
FragTrap::~FragTrap()
{
	std::cout << "Destructor Frag!" << std::endl;
}
FragTrap &FragTrap::operator=(const FragTrap &trap)
{
	std::cout << "Assignation operator Frag!" << std::endl;
	if (this != &trap)
	{
		m_name = trap.m_name;
		m_hitpoints = trap.m_hitpoints;
		m_energyPoint = trap.m_energyPoint;
		m_attackDamage = trap.m_attackDamage;
	}
	return (*this);
}
void FragTrap::highFivesGuys(void)
{
	std::cout << "The legend of high fives guys is " << m_name << " !" << std::endl;
}
