#include "Zombie.hpp"

Zombie::Zombie( void )
{
	this->name = "NULL";
}

void 		Zombie::announce( void )
{
	// chaque zombie se présente
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void		Zombie::setName(std::string name)
{
	this->name = name;
}

Zombie* 	Zombie::newZombie( std::string name )
{
	Zombie	*new_Zombie;

	new_Zombie->setName(name);

	return (new_Zombie);
}

void 		Zombie::randomChump( std::string name )
{
	Zombie	new_Zombie;

	new_Zombie.setName(name);
	std::cout << new_Zombie.name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
