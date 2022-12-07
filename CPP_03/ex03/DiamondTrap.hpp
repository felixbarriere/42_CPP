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
		DiamondTrap(void);
		DiamondTrap(std::string	name);   //_clap_name
		DiamondTrap( DiamondTrap&	copy);
		virtual ~DiamondTrap(void);

		DiamondTrap&	operator=( DiamondTrap& rhs);

		void 		attack(const std::string& target);
		void		whoAmI(void);

	private:
		std::string		_name;  //= ClapTrap::_name;
};

#endif

//  Base<T>::func3(); 