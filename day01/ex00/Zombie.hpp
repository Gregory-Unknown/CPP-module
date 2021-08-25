/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esobchak <esobchak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 11:40:21 by esobchak          #+#    #+#             */
/*   Updated: 2021/08/24 11:48:00 by esobchak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	private:
	std::string m_name;

	public:
	Zombie();
	Zombie(std::string name);
	~Zombie();
	std::string	ft_getName();
	void		ft_setName(std::string name);
	void		announce( void );
};
Zombie		*newZombie(std::string name);
void 		randomChump(std::string name);

#endif
