#include "HumanB.hpp"

HumanB::HumanB(std::string	newName) : name(newName)
{
	return ;
}

HumanB::~HumanB(void)
{
	return ;
}

void	HumanB::attack(void)
{
	std::cout << this->name << " attacks with "
			  << this->weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon	&newWeapon) 
{
	this->weapon = &newWeapon;
	return ;
}