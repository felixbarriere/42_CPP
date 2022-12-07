#include "Animal.hpp"

AAnimal::AAnimal(void)
{
	// std::cout << "default constructor AAnimal called " << std::endl;
}

AAnimal::AAnimal(std::string	type) : _type(type)
{
	// std::cout << "type constructor AAnimal called " << std::endl;
}

AAnimal::AAnimal( AAnimal&	copy)
{
	std::cout << "copy constructor AAnimal called " << std::endl;
	*this = copy;
}

AAnimal::~AAnimal()
{
	// std::cout << "default destructor AAnimal called " << std::endl;
}

AAnimal&	AAnimal::operator=( const AAnimal& rhs)
{
	std::cout << "Assignment operator called" << std::endl;
	this->_type = rhs._type;

	return (*this);
}

std::string		AAnimal::getType(void) const
{ return (this->_type); }

void			AAnimal::makeSound(void) const
{ std::cout << "undefined Aanimal can't make a sound" << std::endl; }


std::string		AAnimal::getIdeasArray(int	ideaNumber) const
{ return (this->_myBrain->getIdeasArray(ideaNumber)); }


void		AAnimal::setIdeasArray(int	ideaNumber, std::string newIdea) const
{ this->_myBrain->setIdeasArray(ideaNumber, newIdea); }