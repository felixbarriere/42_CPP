#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string	name) : ClapTrap(name)
{

	ClapTrap::_name += "_clap_name";
	this->setName(name + "_clap_name");
	this->setHitPoints(FragTrap::getHitPoints());
	this->setEnergyPoints(ScavTrap::getEnergyPoints());
	this->setAttackDamage(FragTrap::getAttackDamage());
	
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

	this->setName(rhs.getName());
	this->setHitPoints(rhs.getHitPoints());
	this->setEnergyPoints(rhs.getEnergyPoints());
	this->setAttackDamage(rhs.getAttackDamage());

	return (*this);
}