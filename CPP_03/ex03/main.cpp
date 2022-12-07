#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"


int	main (void)
{	
// 	ClapTrap	John("John");
// 	ClapTrap	Hugo("Hugo");

// 	std::cout << John.getName() << " has " << John.getHitPoints() << " hit points!" <<  std::endl;
// 	John.attack("hugo");
// 	Hugo.takeDamage(10);
// 	std::cout <<  std::endl;

// 	for (int i = 0; i < 5; i++)
// 	{
// 		John.attack("a random stranger");
// 		John.beRepaired(2);
// 	}
// 	std::cout <<  std::endl;

// 	Hugo = John;
// 	std::cout <<  std::endl;

// /* ******************************************************************* */

// 	ScavTrap	Chris("Sam");

// 	std::cout << "ScavTrap " << Chris.getName() << " has " << Chris.getHitPoints() << " hit points!" <<  std::endl;
// 	Chris.attack("a random stranger");
// 	Chris.guardGate();
// 	std::cout <<  std::endl;

// /* ******************************************************************* */

// 	FragTrap	Serge("Serge");

// 	std::cout << "FragTrap " << Serge.getName() << " has " << Serge.getAttackDamage() << " attack damage!" <<  std::endl;
// 	Serge.attack("a random stranger");
// 	Serge.highFivesGuys();
// 	std::cout <<  std::endl;

/* ******************************************************************* */

	DiamondTrap	Fifu("Fifu");
	std::cout << Fifu.getName() << " has " << Fifu.getHitPoints() << " hit points (like FragTrap has 100), " <<
		Fifu.getEnergyPoints() << " energy Points (like ScavTrap has 150) and " <<  Fifu.getAttackDamage() << " attack damage(like FragTraph as 30)!"<< std::endl;

	Fifu.whoAmI();
	Fifu.attack("someone");

	return (0);
}
