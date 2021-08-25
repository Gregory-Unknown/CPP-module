/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esobchak <esobchak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 11:40:24 by esobchak          #+#    #+#             */
/*   Updated: 2021/08/24 11:47:55 by esobchak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie *tmp;
	int N = 10;

	tmp = zombieHorde(N, "Baklan");
	for(int i = 0; i < N; i++)
	{
		tmp[i].announce();
	}
	delete []tmp;

	return (0);
}
