#include <iostream>
#include <cmath>
#include "Fixed.hpp"

/*************** Constructors ***************/

Fixed::Fixed(void) : _i(0) 
{ return ; }

Fixed::Fixed(const Fixed&  src) 
{ *this = src; }

Fixed::Fixed(const int	nb) : _i(nb << this->_bits)
{ return ; }

Fixed::Fixed(const float	nb) : _i((int)roundf(nb * (1 << this->_bits))) 
{ return ; }

Fixed::~Fixed() 
{ return ; }

/*************** Member functions ***************/

Fixed&		Fixed::min(Fixed& f1, Fixed& f2)
{
	if (f1 > f2)
		return (f2);
	else
		return (f1);
}

Fixed&		Fixed::max(Fixed& f1, Fixed& f2)
{
	if (f1 < f2)
		return (f2);
	else
		return (f1);
}

const Fixed&		Fixed::min(const Fixed& f1, const Fixed& f2)
{
	if (f1.getRawBits() > f2.getRawBits())
		return (f2);
	else
		return (f1);
}

const Fixed&		Fixed::max(const Fixed& f1, const Fixed& f2)
{
	if (f1.getRawBits() < f2.getRawBits())
		return (f2);
	else
		return (f1);
}

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

int			Fixed::operator>( const Fixed& nb) const 
{ return (this->getRawBits() > nb.getRawBits()); }

int			Fixed::operator<( const Fixed& nb) const 
{ return (this->getRawBits() < nb.getRawBits()); }

int			Fixed::operator>=( const Fixed& nb) const 
{ return (this->getRawBits() >= nb.getRawBits()); }

int			Fixed::operator<=( const Fixed& nb) const 
{ return (this->getRawBits() <= nb.getRawBits()); }

int			Fixed::operator==( const Fixed& nb) const 
{ return (this->getRawBits() == nb.getRawBits()); }

int			Fixed::operator!=( const Fixed& nb) const 
{ return (this->getRawBits() != nb.getRawBits()); }



Fixed		Fixed::operator+( const Fixed& rhs) const 
{
	 return Fixed(this->toFloat() + rhs.toFloat()); 
	/*  return Fixed(((float)this->getRawBits() + (float)rhs.getRawBits()) / 256); */
}

Fixed		Fixed::operator-( const Fixed& rhs) const 
{ return Fixed(this->toFloat() - rhs.toFloat()); }

Fixed		Fixed::operator*( const Fixed& rhs) const 
{
	return Fixed(this->toFloat() * rhs.toFloat());
	/* return Fixed((((float)this->getRawBits() * (float)rhs.getRawBits()) / 256) / 256); */
}

Fixed		Fixed::operator/( const Fixed& rhs) const 
{ return Fixed(this->toFloat() / rhs.toFloat()); }


Fixed		Fixed::operator++( void )
{
	this->_i++;
	return (*this);
}

Fixed		Fixed::operator--( void )
{
	this->_i--;
	return (*this);
}

Fixed		Fixed::operator++( int nb)
{
	(void)nb;
	Fixed	value = *this;
	this->_i++;
	return (value);
}

Fixed		Fixed::operator--( int nb)
{
	(void)nb;
	Fixed	value = *this;
	this->_i--;
	return (value);
}