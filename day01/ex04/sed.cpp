/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esobchak <esobchak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 11:41:07 by esobchak          #+#    #+#             */
/*   Updated: 2021/08/25 18:34:02 by esobchak         ###   ########.fr       */
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
	std::string str;
	std::string	tmp;

	for (int i = 0; i < line.size(); i++)
	{
		for (int j = 0; j < s1.size() && line.size() >= s1.size(); j++)
		{
			if (i + j < line.size() && j < s1.size())
			{
				if ((line.at(i + j) == s1.at(j)) && (j == s1.size() - 1))
				{
					str += s2;
					tmp.clear();
					i += (s1.size() - 1);
				}
				else if (line.at(i + j) == s1.at(j))
				{
					tmp += line.at(i);
					i++;
				}
				else
				{
					if (!tmp.empty())
					{
						str += tmp;
						tmp.clear();
					}
					str += line.at(i);
					i++;
				}
			}
			// else
			// {
			// 	str += line.at(i);

			// }


		}
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
