#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
protected:
	std::string m_name;
	int m_hitpoints;
	int m_energyPoint;
	int m_attackDamage;
public:
	ClapTrap();
	ClapTrap(const std::string &name);
	ClapTrap(ClapTrap &trap);
	virtual ~ClapTrap();
	ClapTrap &operator=(const ClapTrap &trap);
	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif
