#ifndef AMATERIA_HPP
#define AMATERIA_HPP

class AMateria {
private:
	AMateria();
protected:
	std::string m_type;
public:
	AMateria(std::string const &type);
	AMateria(AMateria &mat);
	virtual ~AMateria();
	AMateria &operator=(AMateria &mat);
	std::string const &getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif
