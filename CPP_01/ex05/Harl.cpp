#include <iostream>
#include <string>
#include "Harl.hpp"

void 	Harl::complain( std::string level )
{
	void 			(Harl::*monPointeur[4])(void) = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string		str[4] = { "DEBUG" , "INFO" , "WARNING" , "ERROR"};
	int				i = 0;

	while (i < 4)
	{
		if (!level.compare(str[i]))
		{
			(this->*monPointeur[i])();
			return ;
		}
		i++;
	}
	std::cout << "Wrong instruction {DEBUG , INFO , WARNING , ERROR}" << std::endl;
}

void 	Harl::debug( void )
{
	std::cout <<
	"I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !"
					<< std::endl;
}

void 	Harl::info( void )
{
	std::cout <<
	"cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger !"
					<< std::endl;
}

void 	Harl::warning( void )
{
	std::cout <<
	"think I deserve to have some extra bacon for free."
					<< std::endl;
}

void 	Harl::error( void )
{
	std::cout <<
	"This is unacceptable ! I want to speak to the manager now."
					<< std::endl;
}
