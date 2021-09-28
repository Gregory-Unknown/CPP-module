#ifndef CURE_HPP
#define CURE_HPP

class Cure {
private:
	Cure();
protected:
	std::string m_type;
public:
	Cure(std::string const &type);
	Cure(Cure &mat);
	virtual ~Cure();
	Cure &operator=(Cure &mat);
	std::string const &getType() const;
	virtual Cure* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif
