#include <iostream>
#include "Fixed.hpp"

int main( void ) 
{
	Fixed a(1898);

	std::cout << "a: " << a << std::endl;
	std::cout << "a.getRawBits(): " << a.getRawBits() << std::endl;

	std::cout << "++a: " << ++a << std::endl;
	std::cout << "a.toFloat(): " << a.toFloat() << std::endl;
	std::cout << "a.toInt(): " << a.toInt() << std::endl;
	std::cout << "a.getRawBits(): " << a.getRawBits() << std::endl << std::endl;

	std::cout << "a++: "  << a++ << std::endl;
	std::cout << "a.toFloat(): " << a.toFloat() << std::endl;
	std::cout << "a: "  << a << std::endl;

/* *********************************************************************** */

	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed const c( Fixed( 5.05123456f ) * Fixed( 2 ) );

	std::cout << "b: "  << b << std::endl;
	std::cout << "c: "  << c << std::endl;
	std::cout << "b + a: "  << b + a << std::endl;
	std::cout << "a.toFloat(): " << a.toFloat() << std::endl;
	std::cout << "a.toInt(): " << a.toInt() << std::endl;

	std::cout << "b - a: "  << b - a << std::endl;
	std::cout << "b * a: "  << b * a << std::endl;
	std::cout << "b / a: "  << b / a << std::endl;
	std::cout << "a / b: "  << a / b << std::endl;

	if (a > b)
		std::cout << "a > b" << std::endl;
	else 
		std::cout << "b > a" << std::endl;

	std::cout <<  "Fixed max: "<< Fixed::max( a, b ) << std::endl;
	
	return (0);
}
