/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esobchak <esobchak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 11:41:07 by esobchak          #+#    #+#             */
/*   Updated: 2021/09/22 14:29:20 by esobchak         ###   ########.fr       */
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
	int pos = str.find(s1);
	while(pos != std::string::npos)
	{
		str.erase(pos, s1.length());
		str.insert(pos, s2);
		pos = str.find(s1, pos + s2.length());
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
