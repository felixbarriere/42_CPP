#include "ClapTrap.hpp"

/* Constructors */

ClapTrap::ClapTrap(std::string	name) : _name(name)
{
	std::cout << "constructor called " << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap&	copy)
{
	std::cout << "copy constructor called " << std::endl;
	*this = copy;
}

ClapTrap::~ClapTrap()
{
	std::cout << "destructor called " << std::endl;
}


/* member functions */


void		ClapTrap::attack(const std::string& target)
{
	if (!this->_hitPoints || !this->_energyPoints)
	{
		std::cout << this->_name <<  "can't attack anymore..." << std::endl;
		return ;
	}
	std::cout << this->_name <<  " attacked " << target << ", causing " << 
						this->_attackDamage << " points of damage!" << std::endl;
	this->_energyPoints--;
}

void		ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << this->_name <<  "took " << amount << " damage" << std::endl;
	this->_hitPoints -= amount;
	if (this->_hitPoints == 0)
		std::cout << this->_name <<  " died from this shot." << std::endl;
}

void 		ClapTrap::beRepaired(unsigned int amount)
{
	if (!this->_hitPoints || !this->_energyPoints)
	{
		std::cout << this->_name <<  " can't repair himself anymore..." << std::endl;
		return ;
	}
	std::cout << this->_name <<  " repaired himself of " << amount << " hit points" << std::endl;
	this->_energyPoints--;
	this->_hitPoints += amount;
}

/* Operateur d'affectation */

ClapTrap&	ClapTrap::operator=( const ClapTrap& rhs)
{
	std::cout << "Assignment operator called" << std::endl;

	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;

	return (*this);
}