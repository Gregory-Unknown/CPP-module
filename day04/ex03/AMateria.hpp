#ifndef AMATERIA_H
#define AMATERIA_H

#include "ICharacter.hpp"
#include <iostream>

class AMateria {
protected:
	std::string	m_type;
private:
	AMateria(AMateria const &cpy);
	AMateria &operator=(AMateria const &mat);
public:
	AMateria(void);
	AMateria(std::string const & type);
	virtual ~AMateria(void);
	std::string const & getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif
