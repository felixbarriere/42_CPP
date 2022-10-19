#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
	std::cout << "default constructor Dog called " << std::endl;
}

Dog::Dog( Dog&	copy)
{
	std::cout << "copy constructor Dog called " << std::endl;
	*this = copy;
}


Dog::~Dog(void)
{
	std::cout << "default destructor Dog called " << std::endl;
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

