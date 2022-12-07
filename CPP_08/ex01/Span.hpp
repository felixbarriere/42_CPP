#ifndef SPAN_HPP
#define SPAN_HPP

#define TRUE 1
#define FALSE 0
#define MAXINT 2147483647
#define MININT -2147483648

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
		void				fillSpan(std::vector<int>::const_iterator,
										std::vector<int>::const_iterator, int);

	private:
		Span(void);
		std::vector<int>	_array;
		int					_sizeMax;
		int					_size;



	private:
};

#endif