#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

class ICharacter {
public:
	ICharacter();
	ICharacter(std::string const &type);
	ICharacter(ICharacter &mat);
	virtual ~ICharacter() {}
	virtual std::string const & getName() const = 0;
	virtual void equip(AMateria* m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter& target) = 0;
};

#endif
