#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#endif

#include <iostream>
#include <string>
#include <vector>
#include "colors.hpp"

/* utiliser struct dans le cas d’une simple agrégation de données 
et de réserver class quand il y a présence d’au moins un invariant. */

// class phonebook
// {
// 	public:
// 	/* constructeur:"fonction" permettant de verifier un contrat avant la creation" */
// 	/* attention aux conversions implicites dans les constructeurs */
// 	/* fonctions membres et variables publiques */

// 	private:
// 	/* fonctions membres et variables privees. on y defini les invariants */
// 	/* les attributst prives ne peuvent utiliser les fonctions libres (solution: friend) */

// };

// /********************************************************/


class phonebook
{
	public:
	/* constructeur:"fonction" permettant de verifier un contrat avant la creation" */

	phonebook(void);    //constructeur
	~phonebook(void);   //destructeur
	/* attention aux conversions implicites dans les constructeurs */
	/* fonctions membres et variables publiques */
	// void	my_push_back(contact contact);
	void	test_function() const;

	// std::vector<std::string>		add_contact(std::string contact);    //noexcept?
	int								total;
	std::vector<contact>		contact_list[7];

	// int		count_contact(void);

	private:
};

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

	private:
	/* variables */
	// int			number;
	// std::string	name;
	
};