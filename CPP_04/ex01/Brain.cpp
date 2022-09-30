#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "default constructor Brain called " << std::endl;
}

Brain::Brain( Brain&	copy)
{
	std::cout << "copy constructor Brain called " << std::endl;
	*this = copy;
}

Brain::~Brain(void)
{
	std::cout << "default destructor Brain called " << std::endl;
}

Brain&	Brain::operator=( const Brain& rhs)
{
	std::cout << "Assignment operator called" << std::endl;
	int	i = 0;
	while (i < 100)
	{
		this->_ideas[i] = rhs._ideas[i];
		i++;
	}

	return (*this);
}

std::string		Brain::getIdeasArray(int	ideaNumber) const
{
	return (this->_ideas[ideaNumber]);
}

void			Brain::setIdeasArray(int	ideaNumber, std::string newIdea)
{
	this->_ideas[ideaNumber] = newIdea;
}



