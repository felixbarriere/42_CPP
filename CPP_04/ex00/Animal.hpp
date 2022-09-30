#ifndef	ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>

class Animal
{
	public:
		Animal(void);
		Animal(std::string	type);
		Animal( Animal&	copy);

		~Animal();

		Animal&	operator=( const Animal& rhs);

		std::string				getType(void) const;
		virtual void			makeSound() const;



	protected:
		std::string		_type;
};








#endif