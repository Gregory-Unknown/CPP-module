/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esobchak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 11:41:07 by esobchak          #+#    #+#             */
/*   Updated: 2021/09/21 14:15:37 by esobchak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"
#include <iostream>
#include <fstream>
#include <sstream>

std::string	ft_mod(std::string const &s)
{
	std::string res = s;
	for(int i = 0; i < res.size(); i++)
	{
		res.at(i) = std::toupper(res.at(i));
	}
	return (res);
}

std::string ft_rep(std::string &line, std::string const &s1, std::string const &s2)
{
	std::string str = line;
	std::string::size_type itr = line.find(s1);
	while(itr != std::string::npos)
	{
		str.erase(itr, s1.length());
		str.insert(itr, s2);
		itr = str.find(s1);
	}
	return (str);
}

void	Sed::replace(std::string const &filename, std::string const &s1, std::string const &s2)
{
	std::ifstream file (filename);
	if (!file.is_open())
		throw("Bad file !");
	if (!s1.size() || !s2.size())
		throw("Empty string !");
	std::ofstream out(ft_mod(filename) + ".replace", std::ios::trunc);
	std::string line;
	std::string res;
	while (std::getline(file, line))
	{
		out << ft_rep(line, s1, s2);
		if (!file.eof())
			out << '\n';
	}
	file.close();
	out.close();
}
