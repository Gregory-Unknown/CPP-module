#include "Character.hpp"

Character::Character(void): m_type("Default"), m_total(0)
{
	for (int i = 0; i < 4; i++)
		m_inventory[i] = NULL;
}
Character::Character(std::string const &name): m_type(name), m_total(0)
{
	for (int i = 0; i < 4; i++)
		m_inventory[i] = NULL;
}
Character::Character(Character const &mat): m_total(0)
{
	for (int i = 0; i < 4; i++)
		m_inventory[i] = NULL;
	*this = mat;
}
Character::~Character(void)
{
	for (int i = 0; i < 4; i++) {
		if (m_inventory[i] != NULL)
			delete m_inventory[i];
	}
}
Character &	Character::operator=(Character const &mat)
{
	if (this != &mat) {
		m_type = mat.m_type;
		m_total = mat.m_total;
		if (m_total != 0) {
			for (int i = 0; i < 4; i++) {
				if (m_inventory[i] != NULL) {
					delete m_inventory[i];
					m_inventory[i] = NULL;
				}
				if (mat.m_inventory[i] != NULL)
					m_inventory[i] = mat.m_inventory[i]->clone();
			}
		}
	}
	return (*this);
}
std::string const &Character::getName(void) const
{
	return (m_type);
}
void	Character::equip(AMateria* m)
{
	if (m_total != 4) {
		if (m != NULL) {
			for (int i = 0; i < 4; i++) {
				if (m_inventory[i] == NULL) {
					m_inventory[i] = m;
					m_total++;
					break ;
				}
			}
		}
	}
}
void	Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4 && m_inventory[idx] != NULL) {
		m_inventory[idx] = NULL;
		m_total--;
	}
}
void	Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && m_inventory[idx] != NULL)
		m_inventory[idx]->use(target);
}
AMateria *	Character::getMateria(int idx)
{
	return (m_inventory[idx]);
}
