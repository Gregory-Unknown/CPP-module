/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esobchak <esobchak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 11:40:07 by esobchak          #+#    #+#             */
/*   Updated: 2021/08/24 11:48:08 by esobchak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie zombie1("Igorek");
	zombie1.announce();
	randomChump("Vitalya");
	Zombie *zombie = newZombie("Che Gevarra");
	zombie->announce();
	delete zombie;

	return (0);
}
