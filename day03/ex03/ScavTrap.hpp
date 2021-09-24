#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
public:
	ScavTrap();
	ScavTrap(const std::string &name);
	ScavTrap(ScavTrap &trap);
	virtual ~ScavTrap();
	ScavTrap &operator=(const ScavTrap &trap);
	void guardGate();
};

#endif
