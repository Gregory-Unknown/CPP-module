#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Default Contructor Cat !" << std::endl;
	m_brain = new Brain();
	m_type = ("Cat");
}
Cat::Cat(const std::string &type)
{
	std::cout << "Init Contructor Cat !" << std::endl;
	m_brain = new Brain();
	m_type = type;
}
Cat::Cat(const Cat &koshak)
{
	std::cout << "Deep Copy Contructor Cat !" << std::endl;
	*this = koshak;
}
Cat::~Cat()
{
	std::cout << "Destructor Cat !" << std::endl;
	delete m_brain;
}
Cat &Cat::operator=(const Cat &koshak)
{
	if (this != &koshak)
	{
		if (m_brain != nullptr)
			delete m_brain;
		m_brain = new Brain();
		for (int i = 0; i < 100; ++i)
		{
			m_brain->setIdeas(i, koshak.m_brain->getIdeas(i));
		}
		m_type = koshak.m_type;
	}
	return (*this);
}
void Cat::makeSound(void) const
{
	std::cout << "Something on the Cat !" << std::endl;
}
