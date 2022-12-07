#ifndef	DOG_H
#define DOG_H

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
	public:
		Dog(void);
		Dog(Dog& copy);
		~Dog();

		Dog&		operator=( const Dog& rhs);

		void		makeSound(void) const;
		std::string	getIdeasArray(int	ideaNumber) const;
		void		setIdeasArray(int	ideaNumber, std::string newIdea)const;

	
	private:
		Brain*	_myBrain;
};

#endif