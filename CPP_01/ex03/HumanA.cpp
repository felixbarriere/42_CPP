#include <string>
#include <iostream>
#include "HumanA.hpp"

HumanA::HumanA(std::string	newName, Weapon	&newWeapon)
							: weapon(newWeapon), name(newName)
{
	return ;
}

HumanA::~HumanA(void)
{
	return ;
}

void	HumanA::attack(void)
{
	std::cout << this->name << " attacks with " << this->weapon.getType() << std::endl;
}