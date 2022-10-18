#ifndef CAST_HPP
# define CAST_HPP

#include <iostream>
#include <string>
#include <stdlib.h>
#include <limits>
#include <stdlib.h>
#include <iomanip>
#include <exception>
#include <cmath>

#define TRUE 1
#define	FALSE 0

class BadArgument : public std::exception
{ 
	public: virtual const char*	what() const throw();
};

class BadArgumentPlus : public std::exception
{ 
	public: virtual const char*	what() const throw();
};

class MinMaxNumber : public std::exception
{ 
	public: virtual const char*	what() const throw();
};

bool	ft_isDuplicate(std::string, char);
bool	ft_checkMinMax(std::string);
bool	ft_checkMinMaxFloat(std::string str);
void	ft_displayInt(std::string str);
void	ft_displayDouble(std::string str);
void	ft_displayFloat(std::string str);
void	ft_displayMessage(std::string str);
void	ft_displayChar(std::string str);

#endif
