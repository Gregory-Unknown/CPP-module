/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esobchak <esobchak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 11:16:51 by esobchak          #+#    #+#             */
/*   Updated: 2021/08/24 16:19:48 by esobchak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include "contact.hpp"

const int MAX_CONTACTS = 8;
const int MAX_FIELDS = 10;

class	PhoneBook
{
	private:
	int	m_count;
	int	m_mount;
	Contact contact[MAX_CONTACTS];

	public:
	PhoneBook();
	~PhoneBook();
	void	ft_add();
	void	ft_search();
};

#endif
