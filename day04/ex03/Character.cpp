#include "Character.hpp"

Character::Character()
{
	m_name = "Default";
	for(int i = 0; i < 4; ++i)
		m_inventory = NULL;
}
Character::Character(std::string const &name)
{
	m_name = name;
	for(int i = 0; i < 4; ++i)
		m_inventory = NULL;
}
Character::Character(Character &mat)
{
	*this = mat;
}
Character::~Character()
{

}
Character &Character::operator=(Character &mat)
{
	if (this != &mat)
	{
		m_name = mat.m_name;
		for(int i = 0; i < 4; ++i) {
			if (mat.m_inventory[i])
				m_inventory[i] = mat.m_inventory[i];
			else
				m_inventory[i] = NULL;
		}
	}
	return (*this);
}
std::string const &Character::getName() const
{
	return (m_name);
}
void Character::equip(AMateria* m)
{
	if (!m)
		throw (std::runtime_error("Null pointer !"));
	for (int i = 0; i < 4; ++i) {
		if (!(m_inventory[i])
		{
			m_inventory[i] = m;
			break ;
		}
	}
}
void Character::unequip(int idx)
{
	if (idx < 0 && idx > 3)
		throw (std::runtime_error("Error index !"));
	m_inventory[idx] = NULL;
}
void Character::use(int idx, ICharacter& target)
{
	m_inventory[idx]->use(target);
}
