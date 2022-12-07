#ifndef FRAGTRAP_HPP
#define	FRAGTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string	name);
		FragTrap( FragTrap&	copy);
		virtual ~FragTrap();

		FragTrap&	operator=( FragTrap& rhs);

		void		highFivesGuys(void);
};

#endif