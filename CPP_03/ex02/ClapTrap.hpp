#ifndef CLAPTRAP_HPP
#define	CLAPTRAP_HPP

#include <iostream>
#include <string>

/* utiliser la forme canonique */

class ClapTrap
{
	public:
		ClapTrap(std::string	name);
		ClapTrap(const ClapTrap&	copy);
		~ClapTrap();

		ClapTrap&	operator=( const ClapTrap& rhs);

		std::string	getName(void);
		int			getHitPoints(void);
		int			getEnergyPoints(void);
		int			getAttackDamage(void);

		void		setName(std::string name);
		void		setHitPoints(int hitPoints);
		void		setEnergyPoints(int energyPoints);
		void		setAttackDamage(int attackDamage);

		void 		attack(const std::string& target);
		void 		takeDamage(unsigned int amount);
		void 		beRepaired(unsigned int amount);

	private:
		std::string		_name;
		int				_hitPoints = 10;
		int				_energyPoints = 10;
		int				_attackDamage = 2;	

};

#endif