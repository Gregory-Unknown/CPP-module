/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esobchak <esobchak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 11:40:36 by esobchak          #+#    #+#             */
/*   Updated: 2021/08/24 11:47:41 by esobchak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>


int	main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *ptr = &str;
	std::string &ref = str;
	std::cout << "STR : " << str << std::endl;
	std::cout << "PTR : " << *ptr << std::endl;
	std::cout << "REF : " << ref << std::endl;
	std::cout << "PTR : " << ptr << std::endl;
	std::cout << "REF : " << &ref << std::endl;
	return(0);
}
