#include "phonebook.hpp"

PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook()
{
}
std::string	PhoneBook::ft_get_firstName()
{
	return (m_firstName);
}
std::string	PhoneBook::ft_get_lastName()
{
	return (m_lastName);
}
std::string	PhoneBook::ft_get_nickName()
{
	return (m_nickName);
}
std::string	PhoneBook::ft_get_phoneNumber()
{
	return (m_phoneNumber);
}
std::string	PhoneBook::ft_get_darkestSecret()
{
	return (m_darkestSecret);
}
void	PhoneBook::ft_set_firstName(std::string firstName)
{
	m_firstName = firstName;
}
void	PhoneBook::ft_set_lastName(std::string lastName)
{
	m_lastName = lastName;
}
void	PhoneBook::ft_set_nickName(std::string nickName)
{
	m_nickName = nickName;
}
void	PhoneBook::ft_set_phoneNumber(std::string phoneNumber)
{
	m_phoneNumber = phoneNumber;
}
void	PhoneBook::ft_set_darkestSecret(std::string darkestSecret)
{
	m_darkestSecret = darkestSecret;
}

PhoneBook	ft_add()
{
	std::string str;
	PhoneBook contact;

	std::cout << "Please, enter first name : ";
	std::cin >> str;
	contact.ft_set_firstName(str);

	std::cout << "Please, enter last name : ";
	std::cin >> str;
	contact.ft_set_lastName(str);

	std::cout << "Please, enter nickname : ";
	std::cin >> str;
	contact.ft_set_nickName(str);

	std::cout << "Please, enter phone number : ";
	std::cin >> str;
	contact.ft_set_phoneNumber(str);

	std::cout << "Please, enter darkest secret : ";
	std::cin >> str;
	contact.ft_set_darkestSecret(str);

	return (contact);
}
