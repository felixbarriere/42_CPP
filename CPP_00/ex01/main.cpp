#include "phonebook.hpp"

phonebook::phonebook(void)
{
	std::cout <<  "constructor called" << std::endl;
	// this->test_function();
	this->total = 0;

	// this->contact = {};
	// std::cout << "my_phonebook.m_total = " << this->m_total << std::endl;
	return;
}

// phonebook::add_contact(std::string contact)
// {
	
// 	return;
// }

phonebook::~phonebook(void)
{
	std::cout <<  RED"destructor called" WHT << std::endl;
	return;
}

void	phonebook::test_function(void) const
{
	std::cout << RED "test_function called!" WHT << std::endl;
	return;
}

// void	phonebook::my_push_back(std::string input)
// {
// 	// this->contact.push_back (input);
// 	std::cout << RED "my_push_back called for : " << input << WHT << std::endl;
// 	return;
// }

std::string	create_contact(std::string input)
{
	(void)input;
	std::cout << RED "info registered!" WHT << std::endl;
	return 	(input);
}

int	main(void)
{
	int				element_nb;
	std::string		input;

	element_nb = 0;
	contact		new_contact;
	phonebook	repertoire;   //cree l'instance (repertoire) de classe phonebook.

	while (element_nb <= 2)
	{
		std::cout <<  WHT "Enter a command" << std::endl;
		std::cin >> input;
		if (input.compare("ADD") != 0 && input.compare("SEARCH") != 0 && input.compare("EXIT") != 0)
		{
			std::cout << "Wrong command" << std::endl;
		}
		else
		{
			std::cout << "You entered : " << input << std::endl;
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

				std::cout << GRN "Your new contact: " << new_contact.first_name << " | " << new_contact.last_name << " | " << new_contact.nickname 
							<< " | " << new_contact.phone << " | " << new_contact.secret << std::endl;

				// repertoire.contact_list.push_back(new_contact);
			}
			// else if(!input.compare("SEARCH")
			// {

			// }
			element_nb++;
		}
	}
	if  (element_nb > 2)
	{
		std::cout << GRN "you made a total of " << element_nb << " commands" WHT << std::endl;
	}
	
}
