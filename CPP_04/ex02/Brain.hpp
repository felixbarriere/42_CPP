#ifndef	BRAIN_H
#define BRAIN_H

#include <iostream>
// #include "Animal.hpp"

class Brain	
{
	public:
		Brain(void);
		Brain(Brain& copy);

		~Brain();

		Brain&		operator=( const Brain& rhs);
		
		std::string	getIdeasArray(int	ideaNumber) const;
		void		setIdeasArray(int	ideaNumber, std::string newIdea);

	protected:
		std::string		_ideas[100];
};

#endif