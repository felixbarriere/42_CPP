#include "contact.hpp"

contact::contact(void)
{
	return ;
}

std::string		contact::create_contact(std::string input)
{
	return (input);
}

contact::contact(int test)
{
	(void)test;

	
	std::string		input;

	if (std::cin.eof())
	{
		std::cout <<  "Closing phonebook" << std::endl;
		return ;
	}
	std::cout <<  "constructor contact called" << std::endl;
	std::cout << GRN "Type the first name of your contact: " WHT << std::endl;
	std::cin >> input;
	this->first_name = create_contact(input);				
	std::cout << GRN "Type the last name of your contact: " WHT << std::endl;
	std::cin >> input;
	this->last_name = input;				
	std::cout << GRN "Type the nickname of your contact: " WHT << std::endl;
	std::cin >> input;
	this->nickname = input;				
	std::cout << GRN "Type the phone of your contact: " WHT << std::endl;
	std::cin >> input;
	this->phone = input;				
	std::cout << GRN "Type the deepest secret of your contact: " WHT << std::endl;
	std::cin >> input;
	this->secret = input;
	
	return;
}