#include "phonebook.hpp"

/********************* Constructor - destructor *********************/

phonebook::phonebook(void)
{
	std::cout <<  "constructor called" << std::endl;
	this->test_function();
	this->total = 0;
	this->index = 0;
	return;
}

phonebook::~phonebook(void)
{
	std::cout <<  RED"destructor called" WHT << std::endl;
	return;
}

/********************* Member functions *********************/

std::string		ft_return_ten(std::string	str)
{
	std::string			new_str;
	int					i = 0;
	int					j = 0;

	if (ft_strlen(str) > 9)
	{
		str[9] = '.';
		str.resize(10);
	}
	else
	{
		while (i < (10 - ft_strlen(str)))
		{
			new_str.insert(i, 1, ' ');
			i++;
		}
		while (i < 10)
		{
			new_str.insert(i, 1, str[j]);
			i++;
			j++;
		}
		return (new_str);
	}
	return (str);
}

void	phonebook::test_function(void) const
{
	std::cout << RED "test_function called!" WHT << std::endl;
	return;
}
