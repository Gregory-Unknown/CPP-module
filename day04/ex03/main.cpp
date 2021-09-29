#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	std::cout << "AAAA\n";
	me->equip(tmp);
	std::cout << "BBBB\n";
	tmp = src->createMateria("cure");
	std::cout << "CCCC\n";
	me->equip(tmp);
	std::cout << "DDDD\n";
	ICharacter* bob = new Character("bob");
	std::cout << "FFFF\n";
	me->use(0, *bob);
	std::cout << "GGGG\n";
	me->use(1, *bob);
	std::cout << "HHHH\n";
	delete bob;
	delete me;
	delete src;
	return 0;
}
