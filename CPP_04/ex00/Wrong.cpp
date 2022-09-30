#include "Wrong.hpp"

/* ******************************    WRONGANIMAL     *********************************** */


WrongAnimal::WrongAnimal(void)
{
	std::cout << "default constructor WrongAnimal called " << std::endl;
}

WrongAnimal::WrongAnimal(std::string	type) : _type(type)
{
	std::cout << "type constructor WrongAnimal called " << std::endl;
}

WrongAnimal::WrongAnimal( WrongAnimal&	copy)
{
	std::cout << "copy constructor WrongAnimal called " << std::endl;
	*this = copy;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "default destructor WrongAnimal called " << std::endl;
}

WrongAnimal&	WrongAnimal::operator=( const WrongAnimal& rhs)
{
	std::cout << "Assignment operator called" << std::endl;

	this->_type = rhs._type;

	return (*this);
}

std::string		WrongAnimal::getType(void) const
{
	return (this->_type);
}

void			WrongAnimal::makeSound(void) const
{
	std::cout << "... undefined WRONG animal can't make a sound" << std::endl;
}

/* ******************************    WRONGCAT     *********************************** */

WrongCat::WrongCat(void)  : WrongAnimal("WrongCat")
{
	std::cout << "default constructor WrongCat called " << std::endl;

}

WrongCat::WrongCat( WrongCat&	copy)
{
	std::cout << "copy constructor WrongCat called " << std::endl;
	*this = copy;
}


WrongCat::~WrongCat()
{
	std::cout << "default destructor WrongCat called " << std::endl;

}

WrongCat&	WrongCat::operator=( const WrongCat& rhs)
{
	std::cout << "Assignment operator called" << std::endl;

	this->_type = rhs._type;

	return (*this);
}

void			WrongCat::makeSound(void) const
{
	std::cout << "AAAAAAAAAAAAAAAAAh. This sounds like a wrong cat sound..." << std::endl;

}