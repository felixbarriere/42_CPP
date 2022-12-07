#include "Zombie.hpp"

int	main(void)
{
	int		i = 0;
	Zombie	*horde = zombieHorde(i, "fifu");
	hordeAnnounce(i, horde);

	int		j = 5;
	Zombie	*horde2 = zombieHorde(j, "foo");
	hordeAnnounce(j, horde2);

	int		k = 20;
	Zombie	*horde3 = zombieHorde(k, "barz");
	hordeAnnounce(k, horde3);


	delete [] horde;
	delete [] horde2;
	delete [] horde3;


	return (0);
}