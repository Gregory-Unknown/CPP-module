#ifndef CURE_H
# define CURE_H

# include "AMateria.hpp"
# include "ICharacter.hpp"
# include <iostream>

class Cure: virtual public AMateria {
private:
	Cure &operator=(Cure const &mat);
	Cure(Cure const &mat);
public:
	Cure(void);
	virtual ~Cure(void);
	virtual AMateria *clone(void) const;
	virtual void use(ICharacter& target);
};

#endif
