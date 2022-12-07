#include "ClapTrap.hpp"

int	main (void)
{	
	ClapTrap	John("John");
	ClapTrap	Hugo("Hugo");

	std::cout << John.getName() << " has " << John.getHitPoints() << " hit points!" <<  std::endl;

	John.attack("hugo");
	Hugo.takeDamage(5);
	Hugo.takeDamage(4);
	Hugo.takeDamage(1);

	std::cout <<  std::endl;

	for (int i = 0; i < 5; i++)
	{
		John.attack("a random stranger");
		John.beRepaired(2);
	}
	std::cout <<  std::endl;

	Hugo = John;
	Hugo.beRepaired(2);
	std::cout <<  std::endl;

	return (0);
}