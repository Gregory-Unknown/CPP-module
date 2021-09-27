#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal* meta[100];
	for	(int i = 0; i < 100; ++i)
	{
		if (i % 2 == 0)
			meta[i] = new Cat();
		else
			meta[i] = new Dog();
		meta[i]->makeSound();
	}
	for (int i = 99; i >= 0; --i)
	{
		delete meta[i];
	}
	system("leaks I_don’t_want_to_set_the_world_on_fire");
}
