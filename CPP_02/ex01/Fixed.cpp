#include <iostream>
#include <cmath>
#include "Fixed.hpp"

/*************** Constructors ***************/

Fixed::Fixed(void) : _i(0)
{
	std::cout << "default constructor called " << std::endl;

	return ;
}

Fixed::Fixed(const Fixed&  src)
{
	std::cout << "copy constructor called " << std::endl;
	*this = src;
}

Fixed::Fixed(const int	nb) : _i(nb << this->_bits)
{
	std::cout << "int constructor called " << std::endl;
	std::cout << "TEST:  " << nb << std::endl;
	std::cout << "TEST2:  " << this->_i << std::endl;
	std::cout << "int constructor called " << std::endl;


}

Fixed::Fixed(const float	nb) : _i((int)roundf(nb * (1 << this->_bits)))
{
	std::cout << "float constructor called " << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "destructor called " << std::endl;
	return ;
}

/*************** Member functions ***************/

float 		Fixed::toFloat( void ) const
{
	return ((float)this->_i / (1 << this->_bits));
}

int 		Fixed::toInt( void ) const
{
	return (this->_i >> this->_bits);
}

int			Fixed::getRawBits(void) const
{
	return (this->_i);
}

void 		Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits function called " << std::endl;
	this->_i = raw;
}

/*************** operators ***************/

Fixed&		Fixed::operator=(const Fixed& rhs)
{
	this->_i = rhs.getRawBits();
	return (*this);
}

std::ostream&	operator<<(std::ostream &os, const Fixed &rhs)
{
	os << rhs.toFloat();
	return (os);
}
