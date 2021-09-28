#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

class IMateriaSource {
public:
	IMateriaSource();
	IMateriaSource(std::string const &type);
	IMateriaSource(IMateriaSource &mat);
	virtual ~IMateriaSource() {}
	virtual void learnMateria(IMateriaSource*) = 0;
	virtual IMateriaSource* createMateria(std::string const & type) = 0;
};

#endif
