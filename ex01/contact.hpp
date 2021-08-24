/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esobchak <esobchak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 13:45:53 by esobchak          #+#    #+#             */
/*   Updated: 2021/08/24 16:20:46 by esobchak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
//#include "phonebook.hpp"

class	Contact
{
	private:
	int			m_index;
	std::string	m_firstName;
	std::string	m_lastName;
	std::string	m_nickName;
	std::string	m_phoneNumber;
	std::string	m_darkestSecret;

	public:
	Contact();
	~Contact();
	int			ft_get_index();
	std::string	ft_get_firstName();
	std::string	ft_get_lastName();
	std::string	ft_get_nickName();
	std::string	ft_get_phoneNumber();
	std::string	ft_get_darkestSecret();
	void		ft_set_index(int index);
	void		ft_set_firstName(std::string firstName);
	void		ft_set_lastName(std::string lastName);
	void		ft_set_nickName(std::string nickName);
	void		ft_set_phoneNumber(std::string phoneNumber);
	void		ft_set_darkestSecret(std::string firstName);
	void		ft_add_contact(int index);
	void		ft_search_contact();
	void		ft_search_index(int search_index);
};

#endif
