#include "Zombie.hpp"

int	main(void)
{
	int		i = 0;
	Zombie	*horde = zombieHorde(i, "fifu");

	hordeAnnounce(i, horde);
	delete [] horde;

	return (0);
}
