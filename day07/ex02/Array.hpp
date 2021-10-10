#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>


template<typename T>
class Array {
private:
	T *m_data;
	unsigned int m_length;
public:
	Array() : m_data(NULL), m_length(0)
	{

	}
	Array(unsigned int length)
	{
		m_length = length;
		if (!m_length) throw ArrayException("Nothing to alloc !");
		m_data = new T[m_length];
		if (!m_data) throw ArrayException("Bad alloc !");
		for (unsigned int i = 0; i < m_length; ++i) {
			m_data[i] = 0;
		}
	}
	Array(const Array &ar)
	{
		*this = ar;
	}
	~Array() {
		delete [] m_data;
	}
	Array &operator=(const Array &ar)
	{
		if (this != &ar) {
			if (m_data != NULL) delete []m_data;
			m_length = ar.m_length;
			m_data = new T[m_length];
			if (!m_data) throw ArrayException("Bad alloc !");
			for (unsigned int i = 0; i < m_length; ++i) {
				m_data[i] = ar.m_data[i];
			}
		}
		return (*this);
	}
	T &operator[](unsigned int index)
	{
		if (index >= m_length) throw ArrayException("Out of range !");
		return (m_data[index]);
	}
	unsigned int size()
	{
		return (m_length);
	}
	class ArrayException : public std::exception {
	private:
		std::string m_error;
	public:
		ArrayException() throw() : m_error(std::string("Out of range")) {};
		ArrayException(std::string const &m_error) throw() : m_error(m_error) {};
		virtual ~ArrayException() throw() {};
		const char * what() const throw() {
			return m_error.c_str();
		}
	};
};



#endif
