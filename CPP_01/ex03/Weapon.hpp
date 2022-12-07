#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>

class	Weapon
{
	public:
		Weapon(void);
		Weapon(std::string new_type);

		std::string		getType(void);
		void			setType(std::string);


	private:
		std::string	_type;
};

#endif