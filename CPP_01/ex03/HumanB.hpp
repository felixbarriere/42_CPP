#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class	HumanB
{
	public:
		HumanB(std::string	name);
		~HumanB(void);

		void	setWeapon(Weapon&);
		void	attack(void) const;


	private:
		Weapon			*weapon;
		std::string		name;
};

#endif