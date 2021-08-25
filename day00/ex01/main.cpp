/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esobchak <esobchak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 11:17:02 by esobchak          #+#    #+#             */
/*   Updated: 2021/08/24 16:10:28 by esobchak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"

void	ft_print_menu()
{
	std::cout << "COMMANDS :" << std::endl;
	std::cout << std::endl;
	std::cout << "ADD" << " | " "SEARCH" << " | " << "EXIT" << std::endl;
	std::cout << std::endl;
}

int	main()
{
	std::string input;
	PhoneBook	phoneBook;

	while (1)
	{
		ft_print_menu();
		std::getline(std::cin, input);
		if (input == "EXIT" || std::cin.eof())
			exit(0);
		if (input == "ADD")
			phoneBook.ft_add();
		if (input == "SEARCH")
			phoneBook.ft_search();
	}
}
