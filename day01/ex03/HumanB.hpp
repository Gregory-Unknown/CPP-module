/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esobchak <esobchak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 11:40:50 by esobchak          #+#    #+#             */
/*   Updated: 2021/08/24 11:48:21 by esobchak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	private:
	Weapon*		m_weapon;
	std::string m_name;

	public:
	HumanB(std::string name);
	~HumanB();
	void	setWeapon(Weapon& weapon);
	void	attack();
};

#endif
