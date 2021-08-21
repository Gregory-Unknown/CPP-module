#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <string.h>

const int MAX_CONTACTS = 8;
const int MAX_FIELDS = 10;

class	PhoneBook
{
	private:
	int			m_index;
	std::string	m_firstName;
	std::string	m_lastName;
	std::string	m_nickName;
	std::string	m_phoneNumber;
	std::string	m_darkestSecret;

	public:
	PhoneBook();
	~PhoneBook();
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
	void		ft_add(int index);
	void		ft_search();
};

#endif
