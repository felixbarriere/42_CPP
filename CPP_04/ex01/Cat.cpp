#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
	// std::cout << "default constructor Cat called " << std::endl;
	this->_myBrain = new Brain();
}

Cat::Cat( Cat&	copy)
{
	// std::cout << "copy constructor Cat called " << std::endl;
	this->_myBrain = new Brain();
	
	*this = copy;
}

Cat::~Cat(void)
{
	// std::cout << "default destructor Cat called " << std::endl;
	delete (this->_myBrain);
}

Cat&	Cat::operator=( const Cat& rhs)
{
	std::cout << "Assignment operator called" << std::endl;
	this->_type = rhs._type;
	delete (this->_myBrain);
	this->_myBrain = new Brain();
	for (int i = 0; i < 100; i++)
	{
		this->setIdeasArray(i, rhs.getIdeasArray(i));
	}
	return (*this);
}

void			Cat::makeSound() const
{ std::cout << "MIAOU" << std::endl; }

std::string		Cat::getIdeasArray(int	ideaNumber) const
{ return (this->_myBrain->getIdeasArray(ideaNumber)); }


void		Cat::setIdeasArray(int	ideaNumber, std::string newIdea) const
{ this->_myBrain->setIdeasArray(ideaNumber, newIdea); }

