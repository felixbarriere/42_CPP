#ifndef SPAN_HPP
#define SPAN_HPP

#define TRUE 1
#define FALSE 0

#include <iostream>
#include <string>
#include <exception>
#include <algorithm>
#include <vector>
#include <stdlib.h>

class Span
{
	public:
		Span(unsigned int maxStore);
		Span( Span&	copy);
		~Span();

		Span&		operator=( const Span& rhs);

		class storageFull : public std::exception
			{ public: virtual const char*	what() const throw(); };
		class notEnoughNumbers : public std::exception
			{ public: virtual const char*	what() const throw(); };

		std::vector<int>	getArray(void) const;
		void				displayArray(void) const;

		void				addNumber(int toStore);
		int					shortestSpan(void);
		int					longestSpan(void);

		Span(void);
	private:
		std::vector<int>	_array;
		int					_sizeMax;
		int					_size;



	private:
};

#endif