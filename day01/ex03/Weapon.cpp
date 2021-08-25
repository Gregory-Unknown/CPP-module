/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esobchak <esobchak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 11:40:57 by esobchak          #+#    #+#             */
/*   Updated: 2021/08/24 11:47:42 by esobchak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() : m_type("")
{

}
Weapon::Weapon(std::string const &type) : m_type(type)
{

}
Weapon::~Weapon()
{

}
const std::string& Weapon::getType() const
{
	return (m_type);
}
void	Weapon::setType(std::string const &type)
{
	m_type = type;
}
