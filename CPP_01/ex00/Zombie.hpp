#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#endif

#include <string>
#include <iostream>

class Zombie
{
	public:
	Zombie();
	~Zombie();

	void		setName(std::string name);
	std::string getName(void) const;

	void 		announce( void ) const;
	Zombie* 	newZombie( std::string name );
	void 		randomChump( std::string name );


	private:
	std::string		name;
};

Zombie* 	newZombie( std::string name );
void 		randomChump( std::string name );