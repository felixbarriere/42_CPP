#ifndef	ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>
#include "Brain.hpp"

class Animal
{
	public:
		Animal(void);
		Animal(std::string	type);
		Animal( Animal&	copy);

		virtual ~Animal();

		Animal&	operator=( const Animal& rhs);

		std::string				getType(void) const;
		virtual void			makeSound() const;
		virtual std::string		getIdeasArray(int	ideaNumber) const = 0;
		virtual void			setIdeasArray(int	ideaNumber, std::string newIdea) const = 0;




	protected:
		std::string		_type;
		// Brain*			_myBrain;

};








#endif