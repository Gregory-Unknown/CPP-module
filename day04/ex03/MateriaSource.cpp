#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; ++i) {
		m_source[i] = NULL;
	}
}
MateriaSource::MateriaSource(const MateriaSource &mat)
{
	*this = mat;
}
MateriaSource::~MateriaSource()
{
	for (int i = 3; i >= 0; --i) {
		if (m_source[i] != NULL)
			delete m_source[i];
	}
}
MateriaSource &MateriaSource::operator=(const MateriaSource &mat)
{
	if (this != &mat) {
		for(int i = 0; i < 4; ++i) {
			if (m_source[i])
				delete m_source[i];
			if (mat.m_source[i])
				m_source[i] = mat.m_source[i];
			else
				m_source[i] = NULL;
		}
	}
	return (*this);
}
void MateriaSource::learnMateria(AMateria *mat)
{
	for(int i = 0; i < 4; ++i) {
		if (!m_source[i]) {
			m_source[i] = mat;
			break ;
		}
	}
}
AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; ++i) {
		if (m_source[i] != NULL && m_source[i]->getType() == type) {
			return (m_source[i]);
		}
	}
	return (NULL);
}
