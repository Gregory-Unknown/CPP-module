#include "span.hpp"

Span::Span() : m_size(0)
{

}
Span::Span(int i) : m_size(i)
{

}
Span::Span(const Span &sp)
{
	*this = sp;
}
Span::~Span()
{

}
Span &Span::operator=(const Span &sp)
{
	if (this != &sp) {
		m_vec = sp.m_vec;
		m_size = sp.m_size;
	}
	return (*this);
}
void Span::addNumber(int number)
{
	if (m_vec.size() > m_size) throw SpanException("already Number of them stored in the object !");
	m_vec.push_back(number);
	m_isSorted = 0;
}
unsigned int Span::shortestSpan(void)
{
	if (m_vec.size() < 2) throw SpanException("Not enough number !");
	if (!m_isSorted) {
		std::sort(m_vec.begin(), m_vec.end());
		m_isSorted = 1;
	}
	std::vector<unsigned int>::iterator iter1 = m_vec.begin();
	std::vector<unsigned int>::iterator iter2 = m_vec.begin();
	iter2++;
	int min = m_vec.at(m_vec.size() - 1) - m_vec.at(0);
	unsigned int tmp;
	for (; iter2 != m_vec.end(); ++iter1, ++iter2) {
		tmp = *iter2 - *iter1;
		if (tmp < min) min = tmp;
	}
	return (min);
}
unsigned int Span::longestSpan(void)
{
	if (m_vec.size() < 2) throw SpanException("Not enough number !");
	if (!m_isSorted) {
		std::sort(m_vec.begin(), m_vec.end());
		m_isSorted = 1;
	}
	return (m_vec.at(m_vec.size() - 1) - m_vec.at(0));
}
