#ifndef SCAVTRAP_HPP
#define	SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(std::string	name);
		ScavTrap( ScavTrap&	copy);
		virtual ~ScavTrap();

		ScavTrap&	operator=( ScavTrap& rhs);

		void 		attack(const std::string& target);
		void		guardGate(void);
};

#endif