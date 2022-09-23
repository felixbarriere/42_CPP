#include "Zombie.hpp"

/* pile - stack */
void		randomChump( std::string name )
{
	Zombie	new_Zombie;

	new_Zombie.setName(name);
	std::cout << new_Zombie.getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}