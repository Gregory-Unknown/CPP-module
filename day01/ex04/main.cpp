/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esobchak <esobchak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 11:41:04 by esobchak          #+#    #+#             */
/*   Updated: 2021/08/24 12:36:21 by esobchak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

int	main(int argc, char **argv)
{
	try
	{
		if (argc != 4)
			throw("Invalid number of arguments !");
		Sed::replace(argv[1], argv[2], argv[3]);

	} catch(const char *e)
	{
		std::cerr << e << std::endl;
	}
	return (0);
}
