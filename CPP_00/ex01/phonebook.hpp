#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#endif

#include <iostream>
#include <string>
#include <sstream>
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
	/* constructeur:"fonction" permettant de verifier un contrat avant la creation" */

	phonebook(void);    //constructeur
	~phonebook(void);   //destructeur

	void		test_function() const;
	void		create_contact(std::string to_change, std::string input);

	// int		ft_strlen(std::string str);
	// std::string	ft_return_ten(std::string	str);

	int			total;
	int			index;
	contact		contact_list[8];

	// int		count_contact(void);

	private:
};

std::string		ft_return_ten(std::string	str);
int				ft_strlen(std::string str);
std::string		create_contact(std::string input);
