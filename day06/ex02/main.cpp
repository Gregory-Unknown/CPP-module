#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <ctime>
#include <iostream>

void identify(Base* p)
{
	if (dynamic_cast<A *>(p)) std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p)) std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p)) std::cout << "C" << std::endl;
	else
		std::cout << "Nothing !" << std::endl;
}

void identify(Base& p)
{
	int flag = 0;

	try {
		A &a = dynamic_cast<A &>(p);
		(void)a;
		std::cout << "A" << std::endl;
		flag = 1;
	} catch (std::exception &e) {}
	try {
		B &b = dynamic_cast<B &>(p);
		(void)b;
		std::cout << "B" << std::endl;
		flag = 1;
	} catch (std::exception &e) {}
	try {
		C &c = dynamic_cast<C &>(p);
		(void)c;
		std::cout << "C" << std::endl;
		flag = 1;
	} catch (std::exception &e) {}
	if (!flag)
		std::cout << "Nothing !" << std::endl;
}

Base * generate(void)
{
	srand(time(0));
	int x = rand() % 3 + 1;
	if (x == 1) return (new A());
	if (x == 2) return (new B());
	if (x == 3) return (new C());
	return (0);
}

int main()
{
	Base *base = generate();
	Base &refBase = *base;
	std::cout << "base : ";
	identify(base);
	std::cout << "refBase  : ";
	identify(refBase);

	std::cout << "By base: ";
	identify(NULL);
	std::cout << "By refBasef: ";
	identify(0);
	return (0);
}
