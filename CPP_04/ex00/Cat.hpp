#ifndef	CAT_H
#define CAT_H

#include <iostream>
#include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat(void);
		Cat( Cat&	copy);

		~Cat(void);

		Cat&	operator=( const Cat& rhs);

	void			makeSound() const;
};








#endif