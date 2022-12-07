#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	this->setHitPoints(100); 
	this->setEnergyPoints(100); 
	this->setAttackDamage(30);
	std::cout << "default constructor FragTrap called " << std::endl;
}

FragTrap::FragTrap(std::string	name) : ClapTrap(name)
{
	this->setName(name); 
	this->setHitPoints(100); 
	this->setEnergyPoints(100); 
	this->setAttackDamage(30);
	std::cout << "constructor FragTrap called " << std::endl;
}

FragTrap::FragTrap( FragTrap&	copy) : ClapTrap(copy)
{
	std::cout << "copy constructor FragTrap called " << std::endl;
	*this = copy;
}

FragTrap::~FragTrap()
{
	std::cout << "destructor FragTrap called " << std::endl;
}

/* Member functions */

void	FragTrap::highFivesGuys(void)
{
		std::cout << "FragTrap " << this->getName() <<  " asks a high five!" << std::endl;

}


/* Operateurs */

FragTrap&	FragTrap::operator=( FragTrap& rhs)
{
	std::cout << "FragTrap assignment operator called" << std::endl;

	this->setName(rhs.getName());
	this->setHitPoints(rhs.getHitPoints());
	this->setEnergyPoints(rhs.getEnergyPoints());
	this->setAttackDamage(rhs.getAttackDamage());

	return (*this);
}