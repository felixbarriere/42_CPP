#include "ClapTrap.hpp"
int	main (void)
{
	// ClapTrap	*John = new ClapTrap("John");  //approfondir ==> ClapTrap *John("John") ne fonctionnera pas
	// ClapTrap	*Hugo = new ClapTrap("Hugo");  //approfondir
	
	ClapTrap	John("John");
	ClapTrap	Hugo("Hugo");

	John.attack("hugo");
	Hugo.takeDamage(10);

	for (int i = 0; i < 5; i++)
	{
		John.attack("a random stranger");
		John.beRepaired(2);
	}

	Hugo = John;

	return (0);
}