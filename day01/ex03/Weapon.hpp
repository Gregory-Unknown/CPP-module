/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esobchak <esobchak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 11:41:00 by esobchak          #+#    #+#             */
/*   Updated: 2021/08/24 11:47:43 by esobchak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <cstdlib>
#include <string>

class Weapon
{
	private:
	std::string m_type;

	public:
	Weapon();
	Weapon(std::string const &type);
	~Weapon();
	const std::string& getType() const;
	void	setType(std::string const &type);
};
#endif
