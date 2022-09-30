#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "default constructor Animal called " << std::endl;

}

Animal::Animal(std::string	type) : _type(type)
{
	std::cout << "type constructor Animal called " << std::endl;
}

Animal::Animal( Animal&	copy)
{
	std::cout << "copy constructor Animal called " << std::endl;
	*this = copy;
}

Animal::~Animal()
{
	std::cout << "default destructor Animal called " << std::endl;

}

Animal&	Animal::operator=( const Animal& rhs)
{
	std::cout << "Assignment operator called" << std::endl;
	this->_type = rhs._type;

	return (*this);
}

std::string		Animal::getType(void) const
{
	return (this->_type);
}

void			Animal::makeSound(void) const
{
	std::cout << "undefined animal can't make a sound" << std::endl;

}