#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string&	name) 
{
	// : ClapTrap(name)
	// ClapTrap::getName() += "_clap_name";
	this->ClapTrap::setName(name + "_clap_name");
	this->ClapTrap::setHitPoints(FragTrap::getHitPoints());
	this->ClapTrap::setEnergyPoints(ScavTrap::getEnergyPoints());
	this->ClapTrap::setAttackDamage(FragTrap::getAttackDamage());
	
	std::cout << "constructor DiamondTrap called " << std::endl;
}

DiamondTrap::DiamondTrap( DiamondTrap&	copy) : ClapTrap(copy)
{
	std::cout << "copy constructor DiamondTrap called " << std::endl;
	*this = copy;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "destructor DiamondTrap called " << std::endl;
}

/* Member functions */

void	DiamondTrap::whoAmI(void)
{
	std::cout << this->_name << "has a sub_name: " << ClapTrap::getName() << std::endl;
}


/* Operateurs */

DiamondTrap&	DiamondTrap::operator=( DiamondTrap& rhs)
{
	std::cout << "DiamondTrap assignment operator called" << std::endl;

	this->ClapTrap::setName(rhs.ClapTrap::getName());
	this->ClapTrap::setHitPoints(rhs.ClapTrap::getHitPoints());
	this->ClapTrap::setEnergyPoints(rhs.ClapTrap::getEnergyPoints());
	this->ClapTrap::setAttackDamage(rhs.ClapTrap::getAttackDamage());

	return (*this);
}