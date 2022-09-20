#include "contact.hpp"

contact::contact(void)
{
	return ;
}

contact::contact(int test)
{
	(void)test;
	std::string		input;

	if (std::cin.eof() || !input.compare("exit"))
	{
		std::cout << std::endl;
		return ;
	}
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

int				contact::get_index(void) const
{
	return (this->index);
}

std::string		contact::get_firstname(void) const
{
	return (this->first_name);
}

std::string		contact::get_lastname(void) const
{
	return (this->last_name);
}

std::string		contact::get_nickname(void) const
{
	return (this->nickname);
}

std::string		contact::create_contact(std::string input)
{
	return (input);
}

void			contact::set_index(int	i)
{
	this->index = i;
}

void			contact::set_index_inc(void)
{
	this->index++;
}