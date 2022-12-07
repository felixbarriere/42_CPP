#include "Span.hpp"

/****************************** constructors *********************/

Span::Span(void) {}

Span::Span(unsigned int maxStore) : _sizeMax(maxStore), _size(0)
{
	std::vector<int>	_array;
}

Span::Span( Span&	rhs)
{
	*this = rhs;
}

Span::~Span() {}


/****************************** Operators *********************/


Span&				Span::operator=( const Span& rhs)
{
	this->_array = rhs._array;
	this->_size = rhs._size;

	return (*this);
}


/******************************* Accessors *********************/


std::vector<int>	Span::getArray(void) const
{ 
	return (this->_array); 
}


/****************************** Member functions *********************/


void				Span::displayArray(void) const
{
	std::vector<int>::const_iterator it;

	if (this->_size <= 1)
		throw Span::notEnoughNumbers();
	std::cout << "Array: ";
	for (it = this->_array.begin(); it != this->_array.end(); it++)
		std::cout << *it << "; ";
	std::cout << std::endl;
}

void			Span::addNumber(int toStore)
{
	if ((this->_size + 1) > this->_sizeMax )
		throw Span::storageFull();
	this->_size++;
	this->_array.push_back(toStore);
}


int				Span::shortestSpan(void)
{
	if (this->_size <= 1)
		throw Span::notEnoughNumbers();
	std::vector<int>::const_iterator it;
	std::vector<int>::const_iterator it2;
	int	min = MAXINT ;

	for (it = this->_array.begin(); it != this->_array.end(); it++)
	{
		for (it2 = it + 1; it2 != this->_array.end(); it2++)
		{
			if( abs(*it - *it2) < min && abs(*it2 - *it) <= MAXINT) // && abs(*it2 - *it) >= MININT
				min = abs(*it - *it2);
		}
	}
	return (min);
}

int				Span::longestSpan(void)
{
	if (this->_size <= 1)
		throw Span::notEnoughNumbers();
	std::vector<int>::const_iterator it;
	std::vector<int>::const_iterator it2;
	int		max = 0;

	for (it = this->_array.begin(); it != this->_array.end(); it++)
	{
		for (it2 = this->_array.begin(); it2 != this->_array.end(); it2++)
		{
			if(*it2 - *it > max)
				max = abs(*(it2) - (*it));
		}
	}
	return (max);
}

void			Span::fillSpan(std::vector<int>::const_iterator it,
						std::vector<int>::const_iterator it2, int tabSize)
{
	if (tabSize > this->_sizeMax )
		throw Span::storageFull();
	for (; it != it2; it++)
	{
		this->addNumber(*it);
	}
}

const char*	Span::storageFull::what() const throw()
{ return ("Too many int in your array."); }

const char*	Span::notEnoughNumbers::what() const throw()
{ return ("There is not enough numbers to compare in your array."); }