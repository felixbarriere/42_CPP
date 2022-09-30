#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
	std::cout << "default constructor Cat called " << std::endl;

}

Cat::Cat( Cat&	copy)
{
	std::cout << "copy constructor Cat called " << std::endl;
	*this = copy;
}

Cat::~Cat(void)
{
	std::cout << "default destructor Cat called " << std::endl;
}

Cat&	Cat::operator=( const Cat& rhs)
{
	std::cout << "Assignment operator called" << std::endl;

	this->_type = rhs._type;

	return (*this);
}

void			Cat::makeSound() const
{
	std::cout << "MIAOU" << std::endl;
}

