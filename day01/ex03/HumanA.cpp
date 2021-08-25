/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esobchak <esobchak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 11:40:41 by esobchak          #+#    #+#             */
/*   Updated: 2021/08/24 11:48:15 by esobchak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string& name, Weapon& weapon) : m_name(name), m_weapon(weapon)
{

}
HumanA::~HumanA()
{

}
void	HumanA::attack() const
{
	std::cout << m_name << " attacks with his " << m_weapon.getType() << std::endl;
}

