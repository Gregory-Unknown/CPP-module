#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <locale>


template<typename T>
void increment(T &element) {
	element++;
}

template<typename T>
void toUp(T &element) {
	for(size_t i = 0; i < element.size(); ++i) {
		element[i] = std::toupper(element[i]);
	}
}

template<typename T>
void iter(T *array, int len, void (*f)(T &)) {
	for (int i = 0; i < len; ++i) {
		f(array[i]);
	}
}

template<typename T>
void print_array(T *array, int len) {
	for (int i = 0; i < len; ++i) {
		std::cout << array[i] << " ";
	}
	std::cout << std::endl;
}



#endif
