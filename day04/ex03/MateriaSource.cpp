#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void): m_total(0)
{
	for (int i = 0; i < 4; i++)
		m_source[i] = NULL;
}
MateriaSource::MateriaSource(MateriaSource const &mat)
{
	*this = mat;
}
MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < 4; i++) {
		if (m_source[i] != NULL)
			delete m_source[i];
	}
}
MateriaSource &MateriaSource::operator=(MateriaSource const &mat)
{
	if (this != &mat) {
		for (int i = 0; i < m_total; i++) {
			if (m_source[i] != NULL)
				delete m_source[i];
			m_source[i] = NULL;
			m_source[i] = mat.m_source[i]->clone();
		}
		m_total = mat.m_total;
	}
	return (*this);
}
void MateriaSource::learnMateria(AMateria *newMateria)
{
	if (m_total != 4) {
		m_source[m_total] = newMateria->clone();
		m_total += 1;
		delete newMateria;
	}
}
AMateria *MateriaSource::createMateria(std::string const &type)
{
	if (!type.empty()) {
		for (int i = 0; i < 4; i++) {
			if (m_source[i]->getType() == type)
				return (m_source[i]->clone());
		}
	}
	return (0);
}
