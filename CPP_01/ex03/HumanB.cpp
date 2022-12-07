#include "HumanB.hpp"

HumanB::HumanB(std::string	newName) : name(newName), weapon(NULL)
{
	return ;
}

HumanB::~HumanB(void)
{
	return ;
}

void	HumanB::attack(void) const
{
	if (this->weapon == NULL)
	{
		std::cout << this->name << " doesn't have any weapon !" << std::endl;
		return ;
	}	
	std::cout << this->name << " attacks with "
			<< this->weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon	&newWeapon) 
{
	this->weapon = &newWeapon;
	return ;
}
