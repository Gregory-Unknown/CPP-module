#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

class MateriaSource {
private:
	MateriaSource();
protected:
	std::string m_type;
public:
	MateriaSource(std::string const &type);
	MateriaSource(MateriaSource &mat);
	virtual ~MateriaSource();
	MateriaSource &operator=(MateriaSource &mat);
	std::string const &getType() const;
	virtual MateriaSource* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif
