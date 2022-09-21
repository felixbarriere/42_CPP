#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#endif

#include <iostream>
#include <string>
#include <stdlib.h>
#include <sstream>
#include <cctype>
#include "contact.hpp"
#include "colors.hpp"

#define SSTR( x ) static_cast< std::ostringstream & >(( std::ostringstream() << std::dec << x )).str()


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
	phonebook(void);
	/* constructeur:"fonction" permettant de verifier un contrat avant la creation" */
	// phonebook(void);

	
	void		ft_add(void);
	void		ft_search(void);
	void		displayContact(int i);
	std::string	ft_returnTen(std::string	str);
	int			ft_isNumber(std::string input);


	private:
	int			index;
	int			total;
	contact		contact_list[8];
};

std::string		createContact(std::string input);
