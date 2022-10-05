#include "contact.hpp"

contact::contact(void)
{
	return ;
}

contact::contact(int test)
{
	(void)test;
	std::string		input;

	while (1)
	{
		std::cout << GRN "Type the first name of your contact: " WHT << std::endl;

		std::getline(std::cin, input);
		if (std::cin.eof() || !input.compare("exit"))
			return ;
		else if (!input.compare(""))
		{
			std::cout << RED "input vide" WHT << std::endl;
			continue ;
		}
		else
			break;
	}
	this->first_name = createContact(input);				
	while (1)
	{
		std::cout << GRN "Type the last name of your contact: " WHT << std::endl;
		std::getline(std::cin, input);
		if (std::cin.eof() || !input.compare("exit"))
			return ;
		else if (std::cin.eof() || !input.compare(""))
		{
			std::cout << RED "input vide" WHT << std::endl;
			continue ;
		}
		else
			break;
	}
	this->last_name = input;
	while (1)
	{
		std::cout << GRN "Type the nickname of your contact: " WHT << std::endl;
		std::getline(std::cin, input);
		if (std::cin.eof() || !input.compare("exit"))
			return ;
		else if (std::cin.eof() || !input.compare(""))
		{
			std::cout << RED "input vide" WHT << std::endl;
			continue ;
		}
		else
			break;
	}			
	this->nickname = input;		
	while(1)
	{

		std::cout << GRN "Type the phone of your contact: " WHT << std::endl;
		std::getline(std::cin, input);
		if (std::cin.eof() || !input.compare("exit"))
			return ;
		else if (std::cin.eof() || !input.compare(""))
		{
			std::cout << RED "input vide" WHT << std::endl;
			continue ;
		}
		else
			break;
	}		
	this->phone = input;
	while (1)
	{
		std::cout << GRN "Type the deepest secret of your contact: " WHT << std::endl;
		std::getline(std::cin, input);
		if (std::cin.eof() || !input.compare("exit"))
			return ;
		else if (!input.compare(""))
		{
			std::cout << RED "input vide" WHT << std::endl;
			continue ;
		}
		else
			break;
	}	
	this->secret = input;
	std::cout << GRN "Your contact is created!" GRN << std::endl << std::endl;
	
	return;
}

int				contact::getIndex(void) const
{
	return (this->index);
}

std::string		contact::getFirstname(void) const
{
	return (this->first_name);
}

std::string		contact::getLastname(void) const
{
	return (this->last_name);
}

std::string		contact::getNickname(void) const
{
	return (this->nickname);
}

std::string		contact::getSecret(void) const
{
	return (this->secret);
}

std::string		contact::createContact(std::string input)
{
	return (input);
}

void			contact::setIndex(int	i)
{
	this->index = i;
}

void			contact::setIndexInc(void)
{
	this->index++;
}