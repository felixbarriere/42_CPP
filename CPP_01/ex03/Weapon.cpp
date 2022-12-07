#include "Weapon.hpp"

/* Constructeur */

Weapon::Weapon(void)
{
	return ;
}

Weapon::Weapon(std::string new_type) : _type(new_type)
{
	return ;
}

/* fonctions membres */

std::string		Weapon::getType(void)
{
	return (this->_type);
}

void			Weapon::setType(std::string new_type)
{
	this->_type = new_type;
}
