#include <iostream>
#include "Fixed.hpp"

Fixed::Fixed(void) : _i(0)
{
	std::cout << "default constructor called " << std::endl;

	return ;
}

Fixed::Fixed(const Fixed&  src)
{
	std::cout << "copy constructor called " << std::endl;
	*this = src;
	
	return ;
}

int			Fixed::getRawBits(void) const
{
	std::cout << "getRawBits function called " << std::endl;
	return (this->_i);
}

void 		Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits function called " << std::endl;

	this->_i = raw;

	return ;
}

Fixed&		Fixed::operator=(const Fixed& rhs)
{
	std::cout << "assignment operator called " << std::endl;

	// if (this != &rhs)
		this->_i = rhs.getRawBits();

	return (*this);
}


Fixed::~Fixed()
{
	std::cout << "destructor called " << std::endl;

	return ;
}