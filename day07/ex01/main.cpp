#include "iter.hpp"

int main()
{
	std::string s_array[] = {"one", "two", "three", "four"};
	int i_array[] = {1, 2, 3, 4};

	::print_array(s_array, 4);
	::print_array(i_array, 4);
	::iter(s_array, 4, toUp);
	::iter(i_array, 4, increment);
	::print_array(s_array, 4);
	::print_array(i_array, 4);
}
