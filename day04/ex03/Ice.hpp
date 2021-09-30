#ifndef ICE_H
#define ICE_H

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

class Ice: virtual public AMateria {
private:
	Ice &operator=(Ice const &mat);
	Ice(Ice const &mat);
public:
	Ice(void);
	virtual ~Ice(void);
	virtual AMateria *clone(void) const;
	virtual void use(ICharacter& target);
};

#endif
