#ifndef	CAT_H
#define CAT_H

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	public:
		Cat(void);
		Cat(Cat& copy);
		~Cat();

		Cat&		operator=( const Cat& rhs);

		void		makeSound(void) const;
		std::string	getIdeasArray(int	ideaNumber) const;
		void		setIdeasArray(int	ideaNumber, std::string newIdea)const;

		


	private:
		Brain*	_myBrain;
};








#endif