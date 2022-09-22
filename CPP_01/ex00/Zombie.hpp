#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#endif

#include <string>
#include <iostream>

class Zombie
{
	public:
	Zombie();

	void 		announce( void );
	void		setName(std::string name);

	Zombie* 	newZombie( std::string name );
	void 		randomChump( std::string name );


	private:
	std::string		name;
};