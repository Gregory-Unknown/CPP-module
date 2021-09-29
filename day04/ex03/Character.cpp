/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esobchak <esobchak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 15:45:09 by esobchak          #+#    #+#             */
/*   Updated: 2021/09/29 15:45:10 by esobchak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	m_name = "Default";
	for(int i = 0; i < 4; ++i)
		m_inventory[i] = nullptr;
}
Character::Character(std::string const &name)
{
	m_name = name;
	for(int i = 0; i < 4; ++i)
		m_inventory[i] = nullptr;
}
Character::Character(const Character &mat)
{
	*this = mat;
}
Character::~Character()
{
	for (int i = 3; i >= 0; --i) {
		if (m_inventory[i] != nullptr)
			delete m_inventory[i];
	}
}
Character &Character::operator=(const Character &mat)
{
	if (this != &mat)
	{
		m_name = mat.m_name;
		for(int i = 0; i < 4; ++i) {
			if (m_inventory[i])
				delete m_inventory[i];
			if (mat.m_inventory[i] != nullptr)
				m_inventory[i] = mat.m_inventory[i];
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
	//(void) m;
	// if (!m)
	// 	throw (std::runtime_error("nullptr pointer !"));
	for (int i = 0; i < 4; ++i) {
		if (m_inventory[i] == nullptr)
		{
			m_inventory[i] = m;
			break ;
		}
	}
}
void Character::unequip(int idx)
{
	if (idx < 0 && idx > 3)
		return ;
	if (m_inventory[idx])
		delete m_inventory[idx];
	m_inventory[idx] = nullptr;
}
void Character::use(int idx, ICharacter& target)
{
	m_inventory[idx]->use(target);
}
