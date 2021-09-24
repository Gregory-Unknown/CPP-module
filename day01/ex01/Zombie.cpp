/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esobchak <esobchak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 11:40:27 by esobchak          #+#    #+#             */
/*   Updated: 2021/09/22 14:03:28 by esobchak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{

}

Zombie::Zombie(std::string name) : m_name(name)
{

}

Zombie::~Zombie()
{
	std::cout << "KILL : " << getName() << std::endl;
}

std::string	Zombie::getName()
{
	return (m_name);
}
void	Zombie::setName(std::string name)
{
	m_name = name;
}
void	Zombie::announce(void)
{
	std::cout << "<" << m_name << "> BraiiiiiiinnnzzzZ..." << std::endl;
}
