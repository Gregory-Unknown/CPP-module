#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain {
private:
	std::string m_ideas[100];
public:
	Brain();
	Brain(const Brain &brain);
	virtual ~Brain();
	Brain &operator=(const Brain &brain);
	std::string getIdeas(int count) const;
	void setIdeas(int count, const std::string &idea);
};

#endif
