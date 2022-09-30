#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
	std::cout << "default constructor Dog called " << std::endl;
	this->_myBrain = new Brain();
}

Dog::Dog( Dog&	copy)
{
	std::cout << "copy constructor Dog called " << std::endl;
	*this = copy;
}


Dog::~Dog(void)
{
	std::cout << "default destructor Dog called " << std::endl;
	delete (this->_myBrain);
}

Dog&	Dog::operator=( const Dog& rhs)
{
	std::cout << "Assignment operator called" << std::endl;

	this->_type = rhs._type;

	return (*this);
}

void			Dog::makeSound(void) const
{
	std::cout << "WAFF" << std::endl;

}

std::string		Dog::getIdeasArray(int	ideaNumber) const
{
	return (this->_myBrain->getIdeasArray(ideaNumber));
}

void			Dog::setIdeasArray(int	ideaNumber, std::string newIdea) const
{
	this->_myBrain->setIdeasArray(ideaNumber, newIdea);
	// return (this->_myBrain->getIdeasArray(ideaNumber));
}