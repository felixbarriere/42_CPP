#include "Zombie.hpp"

Zombie::Zombie( void )
{
	return ;
}

Zombie::~Zombie( void )
{
	std::cout << this->name << " died" << std::endl;
}

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




