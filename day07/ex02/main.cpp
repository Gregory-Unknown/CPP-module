#include "Array.hpp"

int main()
{
	Array<int> array(8);
	std::cout << "Int array: " << std::endl;
	for (unsigned int i = 0; i < array.size(); ++i) {
		array[i] = i * i;
		std::cout << array[i] << " ";
	}
	std::cout << std::endl;

}
