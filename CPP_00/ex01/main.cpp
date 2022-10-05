#include "phonebook.hpp"

int	main(void)
{
	std::string		input;
	phonebook		repertoire;   //cree l'instance (repertoire) de classe phonebook.

	while (1)
	{
		std::cout <<  WHT "Enter a command => ";
		std::getline(std::cin, input);

		if (std::cin.eof() || !input.compare("EXIT"))
		{
			std::cout <<  "Closing phonebook" << std::endl;
			return (0);
		}
		else if(!input.compare("ADD"))
		{
			repertoire.ft_add();
		}
		else if(!input.compare("SEARCH"))
		{
			repertoire.ft_search();
		}
		else
			std::cout << RED "Wrong command" << std::endl;
	}
	return (0);
}

