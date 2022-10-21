#ifndef UTILS_HPP
#define UTILS_HPP

#define TRUE 1
#define FALSE 0

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

// exception et message


template <typename T>
bool	easyfind( T container, int toFind)
{
	if (std::find(container.begin(), container.end(), toFind) != container.end())
		return (TRUE);
	else
		throw std::exception();
}

#endif