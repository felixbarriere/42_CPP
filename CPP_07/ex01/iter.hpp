#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

template <typename T>
void	iter( T array[], unsigned int length, void (*my_function)(T const &))
{
	for (unsigned int j = 0; j < length; j++)
	{
		my_function(array[j]);
	}
}

template <typename T>
void		my_putstr(T const & str)
{
	std::cout << str << std::endl;

}

/* **************************************************** */

template <typename T, typename U>
void	iter( T array[], unsigned int length, U (*my_function)(U const &))
{
	for (unsigned int j = 0; j < length; j++)
	{
		std::cout << my_function(array[j]) << std::endl;
	}
}

template <typename T>
T		my_double(T const & x)
{
	return (x * 2);
}

#endif