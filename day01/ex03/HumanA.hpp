/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esobchak <esobchak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 11:40:44 by esobchak          #+#    #+#             */
/*   Updated: 2021/08/24 11:48:17 by esobchak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	private:
	const Weapon& 	m_weapon;
	std::string m_name;

	public:
	HumanA(const std::string& name, Weapon& weapon);
	~HumanA();
	void	attack() const;
};

#endif
