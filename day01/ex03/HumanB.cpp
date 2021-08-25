/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esobchak <esobchak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 11:40:47 by esobchak          #+#    #+#             */
/*   Updated: 2021/08/24 11:48:19 by esobchak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): m_name(name), m_weapon(NULL)
{

}

HumanB::~HumanB()
{

}

void	HumanB::setWeapon(Weapon& weapon)
{
	m_weapon = &weapon;
}

void	HumanB::attack()
{
	if (m_weapon)
		std::cout << m_name << " attacks with his " << m_weapon->getType() << std::endl;
	else
		std::cout << m_name << " disarmed !" << std::endl;
}
