#include "phonebook.hpp"

PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook()
{
}
int			PhoneBook::ft_get_index()
{
	return (m_index);
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
void	PhoneBook::ft_set_index(int index)
{
	m_index = index;
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

void	PhoneBook::ft_add(int index)
{
	std::string str;

	ft_set_index(index);
	std::cout << "Please, enter first name : ";
	std::cin >> str;
	ft_set_firstName(str);

	std::cout << "Please, enter last name : ";
	std::cin >> str;
	ft_set_lastName(str);

	std::cout << "Please, enter nickname : ";
	std::cin >> str;
	ft_set_nickName(str);

	std::cout << "Please, enter phone number : ";
	std::cin >> str;
	ft_set_phoneNumber(str);

	std::cout << "Please, enter darkest secret : ";
	std::cin >> str;
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
void	PhoneBook::ft_search()
{
	std::cout << "|" << std::setw(10) << m_index
				<< "|" << std::setw(10) << ft_mod(m_firstName)
				<< "|" << std::setw(10) << ft_mod(m_lastName)
				<< "|" << std::setw(10) << ft_mod(m_nickName)
				<< "|" << std::endl;
}
