#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap a("OptimusPrime");
	ClapTrap b(a);
	ClapTrap c;
	c = b;
	a.attack("MegaTron");
	a.takeDamage(100);
	a.beRepaired(80);

	b.attack("GigaTron");
	b.takeDamage(100);
	b.beRepaired(80);

	c.attack("IkeaTron");
	c.takeDamage(100);
	c.beRepaired(80);

	return (0);
}
