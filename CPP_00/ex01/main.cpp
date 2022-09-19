#include "phonebook.hpp"
#include <string>
#include <iostream>
#include <stdlib.h>

void	ft_add(phonebook *repertoire)
{
	contact			new_contact(1);  //forme canonique (créé un deuxieme type de constructeur)

	new_contact.index = repertoire->index;
	std::cout << GRN "Your new contact: " << new_contact.first_name << " | " << new_contact.last_name << " | " << new_contact.nickname 
				<< " | " << new_contact.phone << " | " << new_contact.secret << std::endl;
	if (repertoire->total <= 7)
	{
		repertoire->contact_list[repertoire->index] = new_contact;
		repertoire->index++;
		repertoire->total++;
	}
	else if (repertoire->total > 7)
	{
		if (repertoire->index > 7)
		{
			repertoire->index = 0;
			new_contact.index = 0;
		}
		repertoire->contact_list[repertoire->index] = new_contact;
		repertoire->index++;
		new_contact.index++;
	}
}

void	ft_search(phonebook *repertoire)
{
	int				i = 0;
	std::string		input;

	if (repertoire->total == 0)
		std::cout << RED "There is no contact in your phonebook."  << std::endl;
	else
	{
		std::cout << GRN "Your contacts: " << std::endl << std::endl;
		std::cout << "     index|first name| last name|  nickname" << std::endl;
		while (i < repertoire->total)
		{
			std::string	index_string = SSTR(repertoire->contact_list[i].index);

			// std::cout << ft_return_ten(index_string) << "|" << ft_return_ten(repertoire->contact_list[i].first_name) << "|"
			// << ft_return_ten(repertoire->contact_list[i].last_name) << "|" << ft_return_ten(repertoire->contact_list[i].nickname) << std::endl;
			repertoire->display_contact(repertoire, index_string, i);
			i++;
		}
		while (1)
		{
			std::cout << GRN "Enter your contact index or type exit to leave:" << std::endl;
			std::cin >> input;
			if(std::cin.eof() || !input.compare("exit"))
				break;
			i = atoi(input.c_str());
			if (i + 1 > repertoire->total)
				std::cout << RED "We couldn't find your contact" << std::endl;
			else
			{
				std::string	index_string = SSTR(repertoire->contact_list[i].index);
				std::cout << ft_return_ten(index_string) << "|" << ft_return_ten(repertoire->contact_list[i].first_name) << "|"
				<< ft_return_ten(repertoire->contact_list[i].last_name) << "|" << ft_return_ten(repertoire->contact_list[i].nickname)  << std::endl << std::endl;
			}
		}
	}
}

int	main(void)
{
	std::string		input;
	// contact			new_contact;
	phonebook		repertoire;   //cree l'instance (repertoire) de classe phonebook.

	while (1)
	{
		std::cout <<  WHT "Enter a command" << std::endl;
		std::cin >> input;

		if (std::cin.eof() || !input.compare("EXIT"))
		{
			std::cout <<  "Closing phonebook" << std::endl;
			return (0);
		}
		else if(!input.compare("ADD"))  // set_contact. mettre la variable en privee et creer un setter pour le modifier avec des conditions.
		{
			ft_add(&repertoire);
		}
		else if(!input.compare("SEARCH"))  //creer fonction membre get_contact (accesseur/getter)
		{
			ft_search(&repertoire);
		}
		else
			std::cout << RED "Wrong command" << std::endl;
	}
}







// std::string	create_contact(std::string input)
// {
// 	(void)input;
// 	std::cout << RED "info registered!" WHT << std::endl;
// 	return 	(input);
// }


