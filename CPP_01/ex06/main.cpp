#include <iostream>
#include <string>
#include "Harl.hpp"

int	main(int	ac, char 	**av)
{
	Harl 			test;

	if (ac != 2)
	{
		std::cout << "Wrong arg number" << std::endl;
		return (0);
	}
	test.complain(av[1]);

	return (0);
}