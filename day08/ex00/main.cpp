#include "easyfind.hpp"

int main()
{
	std::list<int> lst;
	for (int i = 0; i < 10; ++i) {
		lst.push_back(i * i);
	}
	easyfind(lst, 1);
	easyfind(lst, 49);
	easyfind(lst, 81);
	easyfind(lst, 50);
	std::vector<int> vec;
	for (int i = 0; i < 10; ++i) {
		vec.push_back(i * i);
	}
	easyfind(vec, 1);
	easyfind(vec, 49);
	easyfind(vec, 81);
	easyfind(vec, 50);
	return (0);
}
