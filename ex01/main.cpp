/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esobchak <esobchak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 11:17:02 by esobchak          #+#    #+#             */
/*   Updated: 2021/08/23 11:17:03 by esobchak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	ft_print_menu()
{
	std::cout << "COMMANDS :" << std::endl;
	std::cout << std::endl;
	std::cout << "ADD" << " | " "SEARCH" << " | " << "EXIT" << std::endl;
	std::cout << std::endl;
}

int	main()
{
	int			i;
	int			j;
	std::string input;
	PhoneBook	phoneBook[MAX_CONTACTS];

	i = 0;
	j = 0;
	while (strcmp(input.c_str(), "EXIT"))
	{
		ft_print_menu();
		getline(std::cin, input, '\n');
		if (!strcmp(input.c_str(), "ADD"))
		{
			if (i < MAX_CONTACTS)
			{
				phoneBook[i].ft_add(i + 1);
				i++;
			}
			else
			{
				phoneBook[j].ft_add(j + 1);
				j++;
			}
			if (j + 1 == MAX_CONTACTS)
				j = 0;
		}
		else if (!strcmp(input.c_str(), "SEARCH"))
		{
			std::cout << "|" << std::setw(10) << "index"
					<< "|" << std::setw(10) << "first name"
					<< "|" << std::setw(10) << "last name"
					<< "|" << std::setw(10) << "nickname"
					<< "|" << std::endl;
			for(int k = 0; k < i; k++)
			{
				phoneBook[k].ft_search();
			}
		}
	}
}
