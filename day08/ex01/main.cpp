#include "span.hpp"
#include <ctime>

int main()
{

	try
	{
		Span sp = Span(1000000);
		int tmp;
		srand(time(0));
		for (int i = 0; i < 1000000; ++i) {
			tmp = rand() % 999999;
			sp.addNumber(tmp);
		}
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;

		Span sp1 = Span(1000000);
		for (int i = 1000000; i > 0; --i) {
			sp1.addNumber(i);
		}
		std::cout << sp1.shortestSpan() << std::endl;
		std::cout << sp1.longestSpan() << std::endl;
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}
