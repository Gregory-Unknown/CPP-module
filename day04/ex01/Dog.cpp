#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Default Contructor Dog !" << std::endl;
	m_brain = new Brain();
	m_type = "Dog";
}
Dog::Dog(const std::string &type)
{
	std::cout << "Init Contructor Dog !" << std::endl;
	m_brain = new Brain();
	m_type = type;
}
Dog::Dog(const Dog &sobaken)
{
	std::cout << "Deep Copy Contructor Dog !" << std::endl;
	*this = sobaken;
}
Dog::~Dog()
{
	std::cout << "Destructor Dog !" << std::endl;
	delete m_brain;
}
Dog &Dog::operator=(const Dog &sobaken)
{
	if (this != &sobaken)
	{
		if (m_brain != nullptr)
			delete m_brain;
		m_brain = new Brain();
		for (int i = 0; i < 100; ++i)
		{
			m_brain->setIdeas(i, sobaken.m_brain->getIdeas(i));
		}
		m_type = sobaken.m_type;
	}
	return (*this);
}
void Dog::makeSound(void) const
{
	std::cout << "Something on the Dog !" << std::endl;
}
