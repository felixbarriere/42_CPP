#ifndef UTILS_HPP
#define UTILS_HPP

#include <iostream>
#include <string>

template <typename T>

void	my_swap( T & x, T & y)
{
	T tmp;

	tmp = x;
	x = y;
	y = tmp;
}

template <typename T>

T		my_min(T x, T y)
{
	return (x < y ? x : y);
}

template <typename T>

T		my_max(T x, T y)
{
	return (x > y ? x : y);
}





#endif