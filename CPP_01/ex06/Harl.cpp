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
			switch(i)
			{
				case 0: (this->*monPointeur[0])();
				case 1: (this->*monPointeur[1])();
				case 2: (this->*monPointeur[2])();
				case 3: (this->*monPointeur[3])();
			}
			return ;
		}
		i++;
	}
	std::cout << "Wrong instruction {DEBUG , INFO , WARNING , ERROR}" << std::endl;
}

void 	Harl::debug( void )
{
	std::cout <<
	"DEBUG\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !"
					<< std::endl;
}

void 	Harl::info( void )
{
	std::cout <<
	"INFO\ncannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger !"
					<< std::endl;
}

void 	Harl::warning( void )
{
	std::cout <<
	"WARNING\nthink I deserve to have some extra bacon for free."
					<< std::endl;
}

void 	Harl::error( void )
{
	std::cout <<
	"ERROR\nThis is unacceptable ! I want to speak to the manager now."
					<< std::endl;
}


