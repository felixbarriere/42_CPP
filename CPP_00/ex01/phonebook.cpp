#include "phonebook.hpp"

/********************* Constructor - destructor *********************/

phonebook::phonebook(void)
{
	this->total = 0;
	this->index = 0;
	return;
}

/********************* Member functions *********************/

int	phonebook::ft_isNumber(std::string input)
{
	// int i = 0;

	for (int i = 0; input[i] ; i++)
	{
		if (!isdigit(input[i]))
		{
			std::cout << RED "Please type a number" << std::endl << std::endl;
			return (0);
		}
		// i++;
	}
	if (input.size() > 1)
	{
		std::cout << RED "We don't handle that many indexes!"  << std::endl << std::endl;
		return (0);
	}	
	return (1);
}

void	phonebook::ft_add(void)
{
	contact			new_contact(1);  //forme canonique (créé un deuxieme type de constructeur)

	new_contact.setIndex(this->index);
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
			new_contact.setIndex(0);
		}
		this->contact_list[this->index] = new_contact;
		this->index++;
		new_contact.setIndexInc();
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
			this->displayContact(i);
			i++;
		}
		std::cout << std::endl;
		while (1)
		{
			std::cout << GRN "Enter your contact index or type exit to leave:" << std::endl;
			std::getline(std::cin, input);
			if(std::cin.eof() || !input.compare("exit"))
				return ;
			else if (!ft_isNumber(input))
				continue;
			else
			{
				i = atoi(input.c_str());
				if (i + 1 > this->total)
					std::cout << RED "We couldn't find your contact"  << std::endl << std::endl;
				else
				{
					// this->displayContact(i);
					std::string	index_string = SSTR(this->contact_list[i].getIndex());

					std::cout << "Index: " << index_string << std::endl << "First name: " << this->contact_list[i].getFirstname() << std::endl
						<< "Last name: " << this->contact_list[i].getLastname() << std::endl
						<< "NickName: " << this->contact_list[i].getNickname() << std::endl
						<< "Darkest secret: " << this->contact_list[i].getSecret() << std::endl<< std::endl;
				}
			}
		}
	}
}

void	phonebook::displayContact(int i)
{
	std::string	index_string = SSTR(this->contact_list[i].getIndex());

	std::cout << ft_returnTen(index_string) << "|" << ft_returnTen(this->contact_list[i].getFirstname()) << "|"
			<< ft_returnTen(this->contact_list[i].getLastname()) << "|" 
			<< ft_returnTen(this->contact_list[i].getNickname())  << std::endl;
}

std::string		phonebook::ft_returnTen(std::string	str)
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
