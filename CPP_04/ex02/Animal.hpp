#ifndef	AANIMAL_H
#define AANIMAL_H

#include <iostream>
#include <string>
#include "Brain.hpp"

class AAnimal
{
	public:
		AAnimal(void);
		AAnimal(std::string	type);
		AAnimal( AAnimal&	copy);

		virtual ~AAnimal();

		AAnimal&	operator=( const AAnimal& rhs);

		std::string				getType(void) const;
		virtual void			makeSound() const = 0;
		virtual std::string		getIdeasArray(int	ideaNumber) const = 0;
		virtual void			setIdeasArray(int	ideaNumber, std::string newIdea) const = 0;

	protected:
		std::string		_type;
	private:
		Brain*			_myBrain;

};		

#endif