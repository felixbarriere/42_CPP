#ifndef CONTACT_HPP
#define CONTACT_HPP
#endif

#include <iostream>
#include <string>
#include "colors.hpp"



class contact
{
	public:
	contact(void);
	contact(int	test);   //second constructeur (polymorphisme) afin de permettre à la fonction ADD de ne pas se lancer directement

	std::string		create_contact(std::string input);

	/* getters */
	int				get_index(void) const;	
	std::string		get_firstname(void) const;
	std::string		get_lastname(void) const;
	std::string		get_nickname(void) const;

	/* setters */
	void			set_index(int	i);
	void			set_index_inc(void);
	

	private:
	std::string		first_name;
	std::string		last_name;
	std::string		nickname;
	std::string		phone;
	std::string		secret;
	int				index;
};