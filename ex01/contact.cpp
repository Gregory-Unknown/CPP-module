/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esobchak <esobchak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 13:45:24 by esobchak          #+#    #+#             */
/*   Updated: 2021/08/24 16:03:15 by esobchak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

int			Contact::ft_get_index()
{
	return (m_index);
}
std::string	Contact::ft_get_firstName()
{
	return (m_firstName);
}
std::string	Contact::ft_get_lastName()
{
	return (m_lastName);
}
std::string	Contact::ft_get_nickName()
{
	return (m_nickName);
}
std::string	Contact::ft_get_phoneNumber()
{
	return (m_phoneNumber);
}
std::string	Contact::ft_get_darkestSecret()
{
	return (m_darkestSecret);
}
void	Contact::ft_set_index(int index)
{
	m_index = index;
}
void	Contact::ft_set_firstName(std::string firstName)
{
	m_firstName = firstName;
}
void	Contact::ft_set_lastName(std::string lastName)
{
	m_lastName = lastName;
}
void	Contact::ft_set_nickName(std::string nickName)
{
	m_nickName = nickName;
}
void	Contact::ft_set_phoneNumber(std::string phoneNumber)
{
	m_phoneNumber = phoneNumber;
}
void	Contact::ft_set_darkestSecret(std::string darkestSecret)
{
	m_darkestSecret = darkestSecret;
}

void	Contact::ft_add_contact(int index)
{
	std::string str;

	ft_set_index(index);
	std::cout << "Please, enter first name : ";
	std::getline(std::cin, str);
	ft_set_firstName(str);

	std::cout << "Please, enter last name : ";
	std::getline(std::cin, str);
	ft_set_lastName(str);

	std::cout << "Please, enter nickname : ";
	std::getline(std::cin, str);
	ft_set_nickName(str);

	std::cout << "Please, enter phone number : ";
	std::getline(std::cin, str);
	ft_set_phoneNumber(str);

	std::cout << "Please, enter darkest secret : ";
	std::getline(std::cin, str);
	ft_set_darkestSecret(str);
}

std::string	ft_mod(std::string str)
{
	std::string res;

	res = str;
	if (res.size() > 10)
	{
		res.insert(9, ".");
		res = res.substr(0, 10);
	}
	return (res);
}
void	Contact::ft_search_contact()
{
	std::cout << "|" << std::setw(10) << m_index
				<< "|" << std::setw(10) << ft_mod(m_firstName)
				<< "|" << std::setw(10) << ft_mod(m_lastName)
				<< "|" << std::setw(10) << ft_mod(m_nickName)
				<< "|" << std::endl;
}

void	Contact::ft_search_index(int search_index)
{
	if (search_index != m_index)
		return ;
	std::cout << "index : " << m_index << std::endl;
	std::cout << "first name : " << m_firstName << std::endl;
	std::cout << "last name : " << m_lastName << std::endl;
	std::cout << "nickname : " << m_nickName << std::endl;
	std::cout << "phone number : " << m_phoneNumber << std::endl;
	std::cout << "darkest secret : " << m_darkestSecret << std::endl;
}
