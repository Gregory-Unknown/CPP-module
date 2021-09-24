#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
public:
	FragTrap();
	FragTrap(const std::string &name);
	FragTrap(FragTrap &trap);
	virtual ~FragTrap();
	FragTrap &operator=(const FragTrap &trap);
	void highFivesGuys(void);
};

#endif
