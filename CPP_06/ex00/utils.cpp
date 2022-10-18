#include "cast.hpp"

bool	ft_isDuplicate(std::string str, char c)
{
	int count = 0;
	for (size_t i = 0; i <= str.size(); i++)
	{
		if (str[i] == c)
			count++;
	}
	if (count <= 1)
		return (FALSE);
	else
		return (TRUE);
}

bool	ft_checkMinMax(std::string str)
{
	if (std::atol(str.c_str()) < std::numeric_limits<int>::min())
		return (FALSE);
	else if (std::atol(str.c_str()) > std::numeric_limits<int>::max())
		return (FALSE);
	return (TRUE);
}

bool	ft_checkMinMaxFloat(std::string str)
{
	if (std::strtof(str.c_str(), NULL) < std::numeric_limits<float>::min())
		return (FALSE);
	else if (std::strtof(str.c_str(), NULL) > std::numeric_limits<float>::max())
		return (FALSE);
	return (TRUE);
}

const char*	BadArgument::what() const throw()
{ return ("Error\nBad or empty argument number"); }

const char*	BadArgumentPlus::what() const throw()
{ return ("Error\nBad or empty argument number\n'+' or '-' is not a number"); }

const char*	MinMaxNumber::what() const throw()
{ return ("Error\nOverflow on the input"); }