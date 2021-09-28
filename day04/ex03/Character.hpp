#ifndef CHARACTER_HPP
#define CHARACTER_HPP

class Character : virtual public ICharacter {
private:
	std::string m_name;
	AMateria m_inventory[4];
public:
	Character();
	Character(std::string const &name);
	Character(Character &mat);
	virtual ~Character();
	Character &operator=(Character &mat);
	virtual std::string const & getName() const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);
};

#endif
