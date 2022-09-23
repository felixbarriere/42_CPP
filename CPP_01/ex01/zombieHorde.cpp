#include "Zombie.hpp"

Zombie* 	zombieHorde( int N, std::string name )
{
	int	i = 0;
	Zombie	*horde = new Zombie[N];

	while (i < N)
	{
		horde[i].setName(name);
		i++;
	}
	return (horde);
}

void 		hordeAnnounce( int N, Zombie *horde )
{
	int	i = 0;
	while (i < N)
	{
		horde[i].announce();
		i++;
	}
}