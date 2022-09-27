#include <iostream>
#include <string>
#include "Harl.hpp"

int	main(void)
{
	Harl 			test;
	std::string		input;

	std::cout << "Choose your instruction:" << std::endl;
   	std::cout << "1  --  DEBUG" << std::endl;
  	std::cout << "2  --  INFO" << std::endl;
  	std::cout << "3  --  WARNING" << std::endl;
   	std::cout << "4  --  ERROR" << std::endl;

	std::cin >> input;

	test.complain(input);

	return (0);
}