/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esobchak <esobchak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 11:16:57 by esobchak          #+#    #+#             */
/*   Updated: 2021/08/24 16:25:58 by esobchak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook() : m_count(0), m_mount(0)
{
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::ft_add()
{
	if (m_count < MAX_CONTACTS)
	{
		contact[m_count].ft_add_contact(m_count + 1);
		m_count++;
	}
	else
	{
		contact[m_mount].ft_add_contact(m_mount + 1);
		m_mount++;
	}
	if (m_mount + 1 == MAX_CONTACTS)
		m_mount = 0;
}

void	PhoneBook::ft_search()
{
	std::cout << "|" << std::setw(10) << "index"
				<< "|" << std::setw(10) << "first name"
				<< "|" << std::setw(10) << "last name"
				<< "|" << std::setw(10) << "nickname"
				<< "|" << std::endl;
	for(int k = 0; k < m_count; k++)
	{
		contact[k].ft_search_contact();
	}
	std::string sch_idx;
	std::cout << "Please, enter index : ";
	std::getline(std::cin, sch_idx);
	int search_index = atoi(sch_idx.c_str());
	if (search_index && search_index < m_count + 1)
	{
		contact[search_index - 1].ft_search_index(search_index);
	}
	else
		std::cout << "Error input !" << std::endl;
}
