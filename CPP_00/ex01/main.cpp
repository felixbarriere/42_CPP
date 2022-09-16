#include "phonebook.hpp"
#include <string>
#include <iostream>
#include <stdlib.h>

int		ft_strlen(std::string str)
{
	int	i = 0;

	while (str[i])
		i++;
	return (i);
}

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

std::string	create_contact(std::string input)
{
	(void)input;
	std::cout << RED "info registered!" WHT << std::endl;
	return 	(input);
}

int	main(void)
{
	std::string		input;
	contact			new_contact;
	phonebook		repertoire;   //cree l'instance (repertoire) de classe phonebook.

	while (1)
	{
		std::cout <<  WHT "Enter a command" << std::endl;
		std::cin >> input;
		if (input.compare("ADD") != 0 && input.compare("SEARCH") != 0 && input.compare("EXIT") != 0)
			std::cout << "Wrong command" << std::endl;
		else
		{
			if (!input.compare("EXIT"))
				return (0);
			else if(!input.compare("ADD"))
			{
				std::cout << GRN "Type the first name of your contact: " WHT << std::endl;
				std::cin >> input;
				new_contact.first_name = create_contact(input);				
				std::cout << GRN "Type the last name of your contact: " WHT << std::endl;
				std::cin >> input;
				new_contact.last_name = create_contact(input);				
				std::cout << GRN "Type the nickname of your contact: " WHT << std::endl;
				std::cin >> input;
				new_contact.nickname = create_contact(input);				
				std::cout << GRN "Type the phone of your contact: " WHT << std::endl;
				std::cin >> input;
				new_contact.phone = create_contact(input);				
				std::cout << GRN "Type the deepest secret of your contact: " WHT << std::endl;
				std::cin >> input;
				new_contact.secret = create_contact(input);
				new_contact.index = repertoire.index;			

				std::cout << GRN "Your new contact: " << new_contact.first_name << " | " << new_contact.last_name << " | " << new_contact.nickname 
							<< " | " << new_contact.phone << " | " << new_contact.secret << std::endl;
				if (repertoire.total <= 7)
				{
					std::cout << GRN "repertoire.index" << repertoire.index << std::endl;
					repertoire.contact_list[repertoire.index] = new_contact;
					repertoire.index++;
					repertoire.total++;
				}
				else if (repertoire.total > 7)
				{
					if (repertoire.index > 7)
					{
						repertoire.index = 0;
						new_contact.index = 0;
					}
					repertoire.contact_list[repertoire.index] = new_contact;
					repertoire.index++;
					new_contact.index++;
				}
			}
			else if(!input.compare("SEARCH"))
			{
				int	i = 0;
				if (repertoire.total == 0)
					std::cout << RED "There is no contact in your phonebook."  << std::endl;
				else
				{
					std::cout << GRN "Your contacts: " << std::endl << std::endl;
					std::cout << "     index|first name| last name|  nickname" << std::endl;
					while (i < repertoire.total)
					{
						std::string	index_string = SSTR(repertoire.contact_list[i].index);
						std::cout << ft_return_ten(index_string) << "|" << ft_return_ten(repertoire.contact_list[i].first_name) << "|"
						<< ft_return_ten(repertoire.contact_list[i].last_name) << "|" << ft_return_ten(repertoire.contact_list[i].nickname) << std::endl;
						i++;
					}
					while (1)
					{
						std::cout << GRN "Enter your contact index or type exit to leave:" << std::endl;
						std::cin >> input;
						if(!input.compare("exit"))
							break;
						i = atoi(input.c_str());
						if (i > repertoire.total)
							std::cout << GRN "We couldn't find your contact" << std::endl;
						else
						{
							std::string	index_string = SSTR(repertoire.contact_list[i].index);
							std::cout << ft_return_ten(index_string) << "|" << ft_return_ten(repertoire.contact_list[i].first_name) << "|"
							<< ft_return_ten(repertoire.contact_list[i].last_name) << "|" << ft_return_ten(repertoire.contact_list[i].nickname) << std::endl;
						}
					}
				}
			}
		}
	}
}
