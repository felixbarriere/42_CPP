#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main (void)
{	
	ClapTrap	John("John");
	ClapTrap	Hugo("Hugo");

	std::cout << John.getName() << " has " << John.getHitPoints() << " hit points!" <<  std::endl;
	John.attack("hugo");
	Hugo.takeDamage(10);
	std::cout <<  std::endl;

	for (int i = 0; i < 5; i++)
	{
		John.attack("a random stranger");
		John.beRepaired(2);
	}
	std::cout <<  std::endl;

	Hugo = John;
	std::cout <<  std::endl;

/* ******************************************************************* */

	ScavTrap	Chris("Chris");

	std::cout << "ScavTrap " << Chris.getName() << " has " << Chris.getHitPoints() << " hit points!" <<  std::endl;
	Chris.attack("a random stranger");
	Chris.guardGate();
	std::cout <<  std::endl;

/* ******************************************************************* */


	FragTrap	Serge("Serge");

	std::cout << "FragTrap " << Serge.getName() << " has " << Serge.getAttackDamage() << " attack damage!" <<  std::endl;
	Serge.attack("a random stranger");
	Serge.highFivesGuys();
	std::cout <<  std::endl;

	return (0);
}