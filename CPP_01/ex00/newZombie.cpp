#include "Zombie.hpp"

/* tas - Heap */
Zombie* 	newZombie( std::string name )
{
	Zombie	*new_Zombie = new(Zombie);

	new_Zombie->setName(name);

	return (new_Zombie);
}
