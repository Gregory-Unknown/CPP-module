#include "AMateria.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* boba = new Character("boba");
	ICharacter* biba = new Character("biba");
	me->use(0, *biba);
	me->use(1, *biba);
	me->unequip(0);
	me->unequip(1);
	me->use(0, *boba);
	me->use(1, *boba);
	delete biba;
	delete boba;
	delete me;
	delete src;
	return 0;
}
