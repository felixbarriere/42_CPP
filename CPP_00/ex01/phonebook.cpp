#include "phonebook.hpp"

/********************* Constructor - destructor *********************/

phonebook::phonebook(void)
{
	this->total = 0;
	this->index = 0;
	return;
}

/********************* Member functions *********************/

int	phonebook::ft_isnumber(std::string input)
{
	int i = 0;

	if (input.size() > 11)
	{
		std::cout << RED "We don't handle that many indexes!"  << std::endl;
		return (0);
	}	
	while (input[i])
	{
		if (!isdigit(input[i]))
			return (0);
		i++;
	}
	return (1);
}

void	phonebook::ft_add(void)
{
	contact			new_contact(1);  //forme canonique (créé un deuxieme type de constructeur)

	new_contact.set_index(this->index);
	if (this->total <= 7)
	{
		this->contact_list[this->index] = new_contact;
		this->index++;
		this->total++;
	}
	else if (this->total > 7)
	{
		if (this->index > 7)
		{
			this->index = 0;
			new_contact.set_index(0);
		}
		this->contact_list[this->index] = new_contact;
		this->index++;
		new_contact.set_index_inc();
	}
}

void	phonebook::ft_search(void)
{
	int				i = 0;
	std::string		input;

	if (this->total == 0)
		std::cout << RED "There is no contact in your phonebook."  << std::endl;
	else
	{
		std::cout << GRN "Your contacts: " << std::endl << std::endl;
		std::cout << "     index|first name| last name|  nickname" << std::endl;
		while (i < this->total)
		{
			this->display_contact(i);
			i++;
		}
		std::cout << std::endl;
		while (1)
		{
			std::cout << GRN "Enter your contact index or type exit to leave:" << std::endl;
			std::cin >> input;
			if(std::cin.eof() || !input.compare("exit"))
				break;
			else if (!ft_isnumber(input))
				std::cout << RED "Please type a number" << std::endl << std::endl;
			else
			{
				i = atoi(input.c_str());
				if (i + 1 > this->total)
					std::cout << RED "We couldn't find your contact"  << std::endl << std::endl;
				else
				{
					this->display_contact(i);
				}
			}
		}
	}
}

void	phonebook::display_contact(int i)
{
	std::string	index_string = SSTR(this->contact_list[i].get_index());

	std::cout << ft_return_ten(index_string) << "|" << ft_return_ten(this->contact_list[i].get_firstname()) << "|"
			<< ft_return_ten(this->contact_list[i].get_lastname()) << "|" 
			<< ft_return_ten(this->contact_list[i].get_nickname())  << std::endl;
}

std::string		phonebook::ft_return_ten(std::string	str)
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
