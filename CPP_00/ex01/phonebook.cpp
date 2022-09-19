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
	std::cout <<  RED "destructor called" WHT << std::endl;
	return;
}

/********************* Member functions *********************/

void			phonebook::display_contact(phonebook *repertoire, std::string	index_string, int i)
{
	std::cout << ft_return_ten(index_string) << "|" << ft_return_ten(repertoire->contact_list[i].first_name) << "|"
			<< ft_return_ten(repertoire->contact_list[i].last_name) << "|" << ft_return_ten(repertoire->contact_list[i].nickname) << std::endl;
	// (void)repertoire;
	// (void)index_string;
	// (void)i;
	std::cout << "test\n" << std::endl;
}


std::string		ft_return_ten(std::string	str)
{
	std::string			new_str;
	size_t				i = 0;
	size_t				j = 0;

	if (str.size() > 9)
	{
		str[9] = '.';
		str.resize(10);
	}
	else
	{
		while (i < (10 - str.size()))
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
