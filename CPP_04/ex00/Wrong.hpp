#ifndef	WRONG_H
#define WRONG_H

#include <iostream>
#include <string>

class WrongAnimal
{
	public:
		WrongAnimal(void);
		WrongAnimal(std::string	type);
		WrongAnimal( WrongAnimal&	copy);
		~WrongAnimal();

		WrongAnimal&	operator=( const WrongAnimal& rhs);

		std::string		getType(void) const;
		void			makeSound() const;



	protected:
		std::string		_type;
};

class WrongCat : public WrongAnimal
{
	public:
		WrongCat(void);
		WrongCat( WrongCat&	copy);	
		~WrongCat();

		WrongCat&	operator=( const WrongCat& rhs);

		void			makeSound() const;
};







#endif