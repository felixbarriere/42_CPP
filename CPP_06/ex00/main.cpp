
#include "cast.hpp"



/* 5 types: 
- conversion : reorganistion des bits (cf int vs float)
- reinterpretation : conv identitaire (les bits sont gardes dans le meme ordre). Utilite de Void*.
- changement de class qualifier
- downcast: Mere => fille
- upcast: Fille ==> mere

types: conversion normale: reorganistion des bits
demotion: reinterpretation descendante, regagner en precision / perdre en generalite. 
-Wnoconversion : pas de cast implicit pour perte de precision   

--------------------------------------------------------------------
    Cast         | Conv | Reint. | Upcast | Downcast | Type qual.
--------------------------------------------------------------------
Implicit         | Yes  |        | Yes    |          |
Static_cast      | Yes  |        | Yes    | Yes      | 
dynamic_cast     |      |        | Yes    | Yes      |
const_cast       |      |        |        |          | Yes
reinterpret_cast |      | Yes    | Yes    | Yes      |
---------------------------------------------------------------------
---------------------------------------------------------------------
    Cast         | Semantic check | Reliable at run | Tested at run
--------------------------------------------------------------------
Implicit         | Yes            | Yes             |   
Static_cast      | Yes            |                 | Yes    
dynamic_cast     | Yes            | Yes             | Yes
const_cast       |                |                 |        
reinterpret_cast |                |                 |
---------------------------------------------------------------------
*/

/* double : min = 2.225074e-308 ; max = 1.797693e+308. */

int	ft_isInt(std::string str)
{
	int neg = 0;

	if (str.at(0) == '+' && str.size() > 1)
		str.erase(0, 1);
	else if (str.at(0) == '-' && str.size() > 1)
	{
		str.erase(0, 1);
		neg = 1;
	}
	if (str.find_first_not_of("0123456789") == std::string::npos)
	{
		if (neg)
			str.insert(0, "-");
		return (1);
	}
	return (0);
}

int	ft_isDouble(std::string str)
{
	int neg = 0;

	if (str.at(0) == '+' && str.size() > 1)
		str.erase(0, 1);
	else if (str.at(0) == '-' && str.size() > 1)
	{
		str.erase(0, 1);
		neg = 1;
	}
	if (str.find_first_not_of("0123456789.") == std::string::npos && ft_isDuplicate(str, '.') == FALSE)
	{
		if (str.at(0) == '.' || str.at(str.size() - 1) == '.')
			return (0);
		if (neg)
			str.insert(0, "-");
		return (1);
	}
	return (0);
}

int	ft_isFloat(std::string str)
{
	int neg = 0;

	if (str.at(0) == '+' && str.size() > 1)
		str.erase(0, 1);
	else if (str.at(0) == '-' && str.size() > 1)
	{
		str.erase(0, 1);
		neg = 1;
	}
	if (str.find_first_not_of("0123456789.f") == std::string::npos && str.size() >= 2)
	{
		if (str.at(0) == '.' || str.at(str.size() - 2) == '.' || str.at(str.size() - 1) != 'f'
							|| ft_isDuplicate(str, '.') == TRUE || ft_isDuplicate(str, 'f') == TRUE)
			return (0);
		if (neg)
			str.insert(0, "-");
		return (1);
	}
	return (0);
}

int		ft_isMessage(std::string str)
{
	std::string array[6] = {"-inff", "-inf", "+inff", "+inf", "nan", "nanf"};
	for (int i = 0; i <= 5; i++)
	{
		if (!str.compare(array[i]))
			return (1);
	}
	return (0);
}

int		ft_isChar(std::string str)
{
	if (str.size() != 1)
		return (0);
	for (size_t i = 0; i < str.size(); i++)
	{
		if (isalpha(str[i]) == 0)
			return (0);
	}
	return (1);
}

int main(int ac, char **av)
{
	try
	{
		if (ac != 2 || static_cast<std::string>(av[1]).empty())
			throw BadArgument();
		std::string str = (std::string)av[1];
		if ((str.at(0) == '+' && str.size() == 1) || (str.at(0) == '-' && str.size() == 1))
			throw BadArgumentPlus();
		if (ft_isInt(str))
		{
			if (str.at(0) == '+')
				str.erase(0, 1);
			ft_displayInt(str);
		}
		else if (ft_isDouble(str))
		{
			if (str.at(0) == '+')
				str.erase(0, 1);
			ft_displayDouble(str);
		}
		else if (ft_isFloat(str))
		{
			if (str.at(0) == '+')
				str.erase(0, 1);
			ft_displayFloat(str);
		}
		else if (ft_isChar(str))
			ft_displayChar(str);
		else if (ft_isMessage(str))
			ft_displayMessage(str);
		else
			std::cout << "not a number" << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
		return (1);
	}
	return (0);
}
