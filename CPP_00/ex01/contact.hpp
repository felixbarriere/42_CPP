#ifndef CONTACT_HPP
#define CONTACT_HPP
#endif

#include <iostream>
#include <string>
// #include "phonebook.hpp"
#include "colors.hpp"

class contact
{
	public:
	/* fonctions membres */
	// contact(void);
	// ~contact(void);
	std::string		create_contact(std::string input);
	std::string		first_name;
	std::string		last_name;
	std::string		nickname;
	std::string		phone;
	std::string		secret;
	int				index;

	private:
	/* variables */
	// int			number;
	// std::string	name;
	
};