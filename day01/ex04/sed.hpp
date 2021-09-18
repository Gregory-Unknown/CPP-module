/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esobchak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 11:41:10 by esobchak          #+#    #+#             */
/*   Updated: 2021/09/18 15:18:16 by esobchak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
#define SED_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

class Sed
{
	public:
	static void	replace(std::string const &filename, std::string const &s1, std::string const &s2);
};

#endif
