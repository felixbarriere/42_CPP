#include "Brain.hpp"

Brain::Brain(void)
{
	// std::cout << "default constructor Brain called " << std::endl;
}

Brain::Brain( Brain&	copy)
{
	// std::cout << "copy constructor Brain called " << std::endl;
	*this = copy;
}

Brain::~Brain(void)
{
	// std::cout << "default destructor Brain called " << std::endl;
}

Brain&	Brain::operator=( const Brain& rhs)
{
	std::cout << "Assignment operator called" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		this->_ideas[i] = rhs.getIdeasArray(i);
	}

	return (*this);
}

std::string		Brain::getIdeasArray(int	ideaNumber) const
{ 
	if (ideaNumber >= 0 && ideaNumber <= 100)
		return (this->_ideas[ideaNumber]);
	else
	{
		return ("not in scope");
	}
}

void			Brain::setIdeasArray(int	ideaNumber, std::string newIdea)
{ 
	if (ideaNumber >= 0 && ideaNumber <= 100)
		this->_ideas[ideaNumber] = newIdea; 
	else
		std::cout << "I can't stock ideas anymore" << std::endl;
}



