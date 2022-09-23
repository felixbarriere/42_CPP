#include "Zombie.hpp"


void 		Zombie::announce( void ) const
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void		Zombie::setName(std::string name)
{
	this->name = name;
}

std::string Zombie::getName(void) const
{
	return (this->name);
}