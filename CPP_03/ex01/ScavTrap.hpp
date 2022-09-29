#ifndef SCAVTRAP_HPP
#define	SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(std::string	name);
		ScavTrap( ScavTrap&	copy);
		~ScavTrap();

		ScavTrap&	operator=( ScavTrap& rhs);

		void 		attack(const std::string& target);
		void		guardGate(void);

		// void takeDamage(unsigned int amount);
		// void beRepaired(unsigned int amount);

	// private:
	// 	std::string		_name;
	// 	int				_hitPoints = 100;
	// 	int				_energyPoints = 50;
	// 	int				_attackDamage = 20;
};

#endif