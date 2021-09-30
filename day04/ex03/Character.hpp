#ifndef CHARACTER_H
#define CHARACTER_H

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

class	Character: virtual public ICharacter {
private:
	std::string m_type;
	AMateria *m_inventory[4];
	int m_total;
public:
	Character();
	Character(std::string const & name);
	Character(Character const &mat);
	virtual ~Character();
	Character &operator=(Character const &mat);
	virtual std::string const & getName(void) const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);
	AMateria *getMateria(int idx);
};

#endif
