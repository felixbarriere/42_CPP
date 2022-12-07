#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	FragTrap	myFrag("myFrag");
	
	this->ScavTrap::setEnergyPoints(ScavTrap::getEnergyPoints());
	this->setHitPoints(myFrag.getHitPoints());
	this->setAttackDamage(myFrag.getAttackDamage());
	
	std::cout << "default constructor DiamondTrap called " << std::endl;
}

DiamondTrap::DiamondTrap(std::string	name) : FragTrap(name), ScavTrap(name), _name(name)
{
	FragTrap	myFrag("myFrag");

	ClapTrap::setName(name + "_clap_name");

	this->setEnergyPoints(ScavTrap::getEnergyPoints());
	this->setHitPoints(myFrag.getHitPoints()); 			//ou passer de private a protected dans ClapTrap si on veut eviter les accesseurs
	this->setAttackDamage(myFrag.getAttackDamage());
	
	std::cout << "constructor DiamondTrap called " << std::endl;
}

DiamondTrap::DiamondTrap( DiamondTrap&	copy) : ClapTrap(copy), FragTrap(copy), ScavTrap(copy)
{
	std::cout << "copy constructor DiamondTrap called " << std::endl;
	*this = copy;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "destructor DiamondTrap called " << std::endl;
}

/*************************************** Member functions ***************************************/

void	DiamondTrap::whoAmI(void)
{
	std::cout << this->getName() << " has a sub_name: " << ClapTrap::getName() << std::endl;
}

void		DiamondTrap::attack(const std::string& target)
{
	if (!this->getHitPoints() || !this->getEnergyPoints())
	{
		std::cout << "DiamondTrap " << this->getName() <<  "can't attack anymore..." << std::endl;
		return ;
	}
	std::cout << "DiamondTrap " << this->getName() <<  " attacked " << target << ", causing " << 
						this->getAttackDamage() << " points of damage!" << std::endl;
	this->setEnergyPoints(this->getEnergyPoints() - 1);
}

/*************************************** Operateurs ***************************************/

DiamondTrap&	DiamondTrap::operator=( DiamondTrap& rhs)
{
	std::cout << "DiamondTrap assignment operator called" << std::endl;

	this->ClapTrap::setName(rhs.ClapTrap::getName());
	this->ClapTrap::setHitPoints(rhs.ClapTrap::getHitPoints());
	this->ClapTrap::setEnergyPoints(rhs.ClapTrap::getEnergyPoints());
	this->ClapTrap::setAttackDamage(rhs.ClapTrap::getAttackDamage());

	return (*this);
}
