#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : virtual public AMateria {
public:
	Ice();
	Ice(const Ice &mat);
	virtual ~Ice();
	Ice &operator=(const Ice &mat);
	std::string const &getType() const;
	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
};

#endif
