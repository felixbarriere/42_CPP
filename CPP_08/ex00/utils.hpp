#ifndef UTILS_HPP
#define UTILS_HPP

#define TRUE 1
#define FALSE 0

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <list>

// exception et message
class NotInList : public std::exception
{ public: virtual const char*	what() const throw()
	{ return ("The element requested is not in the list ");  }
};

template <typename T>
bool	easyfind( T container, int toFind)
{
	if (std::find(container.begin(), container.end(), toFind) != container.end())
		return (TRUE);
	else
		throw NotInList();
}

#endif