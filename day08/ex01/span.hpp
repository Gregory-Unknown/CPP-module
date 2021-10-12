#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <exception>
#include <algorithm>

class Span {
private :
	std::vector<unsigned int> m_vec;
	unsigned int m_size;
	int m_isSorted;
public :
	Span();
	Span(int i);
	Span(const Span &sp);
	~Span();
	Span &operator=(const Span &sp);
	void addNumber(int number);
	unsigned int shortestSpan(void);
	unsigned int longestSpan(void);
};
class SpanException : public std::exception{
private:
	std::string m_error;
public:
	SpanException() throw() : m_error("Something error !") {}
	SpanException(std::string error) throw() : m_error(error) {}
	virtual ~SpanException() throw() {}
	const char * what() const throw() {
		return (m_error.c_str());
	}
};

#endif
