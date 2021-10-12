#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <string>
#include <cstdint>
#include <stack>
// #include <cstdint>

// template <typename T>
// class MutantStack : public std::stack<T> {
// public:
// 	MutantStack();
// 	MutantStack(const MutantStack<T> &st);
// 	virtual ~MutantStack();
// 	MutantStack<T> &operator=(const MutantStack<T> &st);
// 	// typedef typename std::stack<T>::container_type::iterator iterator;
// 	// typedef typename std::stack<T>::container_type::const_iterator const_iterator;
// 	// typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
// 	// typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
// 	std::stack<T>::container_type::iterator begin();
// 	std::stack<T>::container_type::const_iterator begin() const;
// 	std::stack<T>::container_type::reverse_iterator rbegin();
// 	std::stack<T>::container_type::const_reverse_iterator rbegin() const;
// 	std::stack<T>::container_type::iterator end();
// 	std::stack<T>::container_type::const_iterator end() const;
// 	std::stack<T>::container_type::reverse_iterator rend();
// 	std::stack<T>::container_type::const_reverse_iterator rend() const;
// };

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack();
		MutantStack(MutantStack<T> const &other);
		virtual ~MutantStack();
		MutantStack<T> &operator=(MutantStack<T> const &other);

		// Typedef
		typedef typename std::stack<T>::container_type::iterator                   iterator;
		typedef typename std::stack<T>::container_type::const_iterator             const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator           reverse_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator     const_reverse_iterator;
		// -------
		iterator begin();
		const_iterator begin();
		reverse_iterator rbegin();
		const_reverse_iterator  rbegin();
		iterator end();
		const_iterator end();
		reverse_iterator rend();
		const_reverse_iterator  rend() const;
};

#endif;
