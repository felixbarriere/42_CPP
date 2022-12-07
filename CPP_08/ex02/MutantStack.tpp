#ifndef MUTANTSTACK_TPP
#define MUTANTSTACK_TPP

#include "MutantStack.hpp"

template <typename T>
class MutantStack : public std::stack<T, std::deque<T> >  // underlying container
{
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;

		MutantStack<T>(void);
		MutantStack( MutantStack&	copy);
		~MutantStack<T>();

		MutantStack&		operator=( const MutantStack& rhs);

		iterator begin(void)
		{
			return (this->c.begin());
		}

		iterator end(void)
		{
			return (this->c.end());
		}
};

/****************************** constructors *********************/

template <typename T>
MutantStack<T>::MutantStack(void) 
{
	std::stack<T> 	s1;
}

template <typename T>
MutantStack<T>::MutantStack( MutantStack&	rhs)
{
	*this = rhs;
}

template <typename T>
MutantStack<T>::~MutantStack() {}

/****************************** Operators *********************/


template <typename T>
MutantStack<T>&				MutantStack<T>::operator=( const MutantStack<T>& rhs)
{
	if (*this == rhs)
		return (*this);
	this->c = rhs.c;

	return (*this);
}

/****************************** Member functions *********************/


#endif