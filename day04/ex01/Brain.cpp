#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Default Contructor Brain !" << std::endl;
}
Brain::Brain(const Brain &brain)
{
	std::cout << "Copy Contructor Brain !" << std::endl;
	*this = brain;
}
Brain::~Brain()
{
	std::cout << "Destructor Brain !" << std::endl;
}
Brain &Brain::operator=(const Brain &brain)
{
	if (this != &brain)
	{
		for(int i = 0; i < 100; ++i)
			m_ideas[i] = brain.m_ideas[i];
	}
	return (*this);
}
std::string Brain::getIdeas(int count) const
{
	if (count < 0 || count > 99)
		throw (std::runtime_error("Error index !"));
	return (m_ideas[count]);
}
void Brain::setIdeas(int count, const std::string &idea)
{
	if (count < 0 || count > 99)
		throw (std::runtime_error("Error index !"));
	m_ideas[count] = idea;
}
