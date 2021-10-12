#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <list>
template <class T>
void easyfind(T &data, int number)
{
	try
	{
		if (std::find(data.begin(), data.end(), number) != data.end())
			std::cout << "Find element : " << number << std::endl;
		else
			throw ("Not found !");
	} catch (const char *e) {
		std::cerr << e << std::endl;
	}
}

#endif
