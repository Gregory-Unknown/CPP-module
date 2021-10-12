#include "mutantstack.hpp"
typedef typename std::stack<T>::container_type::iterator                   iterator;
typedef typename std::stack<T>::container_type::const_iterator             const_iterator;
typedef typename std::stack<T>::container_type::reverse_iterator           reverse_iterator;
typedef typename std::stack<T>::container_type::const_reverse_iterator     const_reverse_iterator;
MutantStack::MutantStack() : std::stack<T>()
{

}
MutantStack::MutantStack(const MutantStack<T> &st) : std::stack<T>(st)
{

}
MutantStack::~MutantStack()
{

}
MutantStack<T> &MutantStack::operator=(const MutantStack<T> &st)
{
	if (this != &st) {
		c = st.c;
	}
	return (*this);
}
iterator MutantStack::begin()
{
	return (this->c.begin());
}
const_iterator MutantStack::begin() const
{
	return (this->c.begin());
}
reverse_iterator MutantStack::rbegin()
{
	return (this->c.rbegin());
}
const_reverse_iterator  MutantStack::rbegin() const
{
	return (this->c.rbegin());
}

iterator MutantStack::end()
{
	return (this->c.end());
}
const_iterator MutantStack::end() const
{
	return (this->c.end());
}

reverse_iterator MutantStack::rend()
{
	return (this->c.rend());
}
const_reverse_iterator  MutantStack::rend() const
{
	return (this->c.rend());
}
