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

	std::string		createContact(std::string input);

	/* getters */
	int				getIndex(void) const;	
	std::string		getFirstname(void) const;
	std::string		getLastname(void) const;
	std::string		getNickname(void) const;

	/* setters */
	void			setIndex(int	i);
	void			setIndexInc(void);
	

	private:
	std::string		first_name;
	std::string		last_name;
	std::string		nickname;
	std::string		phone;
	std::string		secret;
	int				index;
};