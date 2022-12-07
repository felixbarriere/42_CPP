#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	this->setHitPoints(200); 
	this->setEnergyPoints(150); 
	this->setAttackDamage(120);
	std::cout << "default constructor ScavTrap called " << std::endl;
}

ScavTrap::ScavTrap(std::string	name) : ClapTrap(name)
{
	this->setName(name); 
	this->setHitPoints(200); 
	this->setEnergyPoints(150); 
	this->setAttackDamage(120);
	std::cout << "constructor ScavTrap called " << std::endl;
}

ScavTrap::ScavTrap( ScavTrap&	copy) : ClapTrap(copy)
{
	std::cout << "copy constructor ScavTrap called " << std::endl;
	*this = copy;
}

ScavTrap::~ScavTrap()
{
	std::cout << "destructor ScavTrap called " << std::endl;
}

/* Member functions */

void		ScavTrap::attack(const std::string& target)
{
	if (!this->getHitPoints() || !this->getEnergyPoints())
	{
		std::cout << "ScavTrap " << this->getName() <<  "can't attack anymore..." << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->getName() <<  " attacked " << target << ", causing " << 
						this->getAttackDamage() << " points of damage!" << std::endl;
	this->setEnergyPoints(this->getEnergyPoints() - 1);
}

void	ScavTrap::guardGate(void)
{
		std::cout << "ScavTrap " << this->getName() <<  " entered Gate Keeper mode" << std::endl;

}

/* Operateurs */

ScavTrap&	ScavTrap::operator=( ScavTrap& rhs)
{
	std::cout << "ScavTrap assignment operator called" << std::endl;

	this->setName(rhs.getName());
	this->setHitPoints(rhs.getHitPoints());
	this->setEnergyPoints(rhs.getEnergyPoints());
	this->setAttackDamage(rhs.getAttackDamage());

	return (*this);
}