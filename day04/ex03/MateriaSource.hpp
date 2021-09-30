#ifndef MATERIASOURCE_H
#define MATERIASOURCE_H

#include "IMateriaSource.hpp"
#include <iostream>

class MateriaSource: virtual public IMateriaSource {
private:
	AMateria *m_source[4];
	int m_total;
public:
	MateriaSource(void);
	MateriaSource(MateriaSource const &mat);
	virtual ~MateriaSource(void);
	MateriaSource &	operator=(MateriaSource const &mat);
	virtual void		learnMateria(AMateria *newMateria);
	virtual AMateria *	createMateria(std::string const & type);
};

#endif
