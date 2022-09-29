#ifndef DIAMONDTRAP_HPP
#define	DIAMONDTRAP_HPP

#include <iostream>
#include <string>
// #include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"


class DiamondTrap : public FragTrap, public ScavTrap
{
	public:
		DiamondTrap(std::string	name);   //_clap_name
		DiamondTrap( DiamondTrap&	copy);
		~DiamondTrap();

		DiamondTrap&	operator=( DiamondTrap& rhs);

		void 		attack(const std::string& target);
		void		whoAmI(void);

	private:
		std::string		_name;  //= ClapTrap::_name;
		// int				_hitPoints = FragTrap::getHitPoints();
		// int				_energyPoints = ScavTrap::getEnergyPoints();
		// int				_attackDamage = FragTrap::getAttackDamage();
};

#endif

//  Base<T>::func3(); 