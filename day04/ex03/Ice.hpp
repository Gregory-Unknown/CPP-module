#ifndef ICE_HPP
#define ICE_HPP

class Ice {
private:
	Ice();
protected:
	std::string m_type;
public:
	Ice(std::string const &type);
	Ice(Ice &mat);
	virtual ~Ice();
	Ice &operator=(Ice &mat);
	std::string const &getType() const;
	virtual Ice* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif
