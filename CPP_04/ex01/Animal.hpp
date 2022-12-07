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
		virtual std::string		getIdeasArray(int	ideaNumber) const;
		virtual void			setIdeasArray(int	ideaNumber, std::string newIdea) const;

	protected:
		std::string		_type;
	private:
		Brain*			_myBrain;

};		

#endif