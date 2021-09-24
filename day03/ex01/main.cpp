#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

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

	ScavTrap aa("OptiProHumusPrimeBeef");
	ScavTrap bb(aa);
	ScavTrap cc;
	cc = bb;

	aa.attack("MoguTron");
	aa.takeDamage(100);
	aa.beRepaired(80);
	aa.guardGate();

	bb.attack("DjiganTron");
	bb.takeDamage(100);
	bb.beRepaired(80);
	bb.guardGate();

	cc.attack("IkeaStul");
	cc.takeDamage(100);
	cc.beRepaired(80);
	cc.guardGate();
	return (0);
}
