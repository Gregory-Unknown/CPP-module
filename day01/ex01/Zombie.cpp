/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esobchak <esobchak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 11:40:27 by esobchak          #+#    #+#             */
/*   Updated: 2021/08/24 11:47:53 by esobchak         ###   ########.fr       */
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
	std::cout << "KILL : " << ft_getName() << std::endl;
}

std::string	Zombie::ft_getName()
{
	return (m_name);
}
void	Zombie::ft_setName(std::string name)
{
	m_name = name;
}
void	Zombie::announce(void)
{
	std::cout << "<" << m_name << "> BraiiiiiiinnnzzzZ..." << std::endl;
}
