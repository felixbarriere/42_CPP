#include "Zombie.hpp"

int	main(void)
{
	Zombie	*Zombie_1 = newZombie( "foo" );
	Zombie	*Zombie_2 = newZombie( "barz" );

	Zombie_1->announce();
	delete(Zombie_1);
	
	Zombie_2->announce();
	delete(Zombie_2);

	randomChump("fifu");

	return (0);
}