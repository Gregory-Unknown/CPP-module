#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : virtual public AMateria {
public:
	Cure();
	Cure(const Cure &mat);
	virtual ~Cure();
	Cure &operator=(const Cure &mat);
	std::string const &getType() const;
	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
};

#endif
