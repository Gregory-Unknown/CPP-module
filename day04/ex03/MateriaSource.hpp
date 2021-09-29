#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <iostream>
#include "IMateriaSource.hpp"

class MateriaSource : public virtual IMateriaSource {
private:
	AMateria *m_source[4];
public:
	MateriaSource();
	MateriaSource(const MateriaSource &mat);
	virtual ~MateriaSource();
	MateriaSource &operator=(const MateriaSource &mat);
	virtual void learnMateria(AMateria *mat);
	virtual AMateria* createMateria(std::string const & type);
};

#endif
