#ifndef CLAPTRAP_HPP
#define	CLAPTRAP_HPP

#include <iostream>
#include <string>

/* utiliser la forme canonique */

class ClapTrap
{
	public:
		ClapTrap(void);
		ClapTrap(std::string	name);
		ClapTrap(const ClapTrap&	copy);
		~ClapTrap();

		ClapTrap&	operator=( const ClapTrap& rhs);

		std::string	getName(void);
		int			getHitPoints(void);
		int			getEnergyPoints(void);
		int			getAttackDamage(void);

		virtual void		setName(std::string name);
		virtual void		setHitPoints(int hitPoints);
		virtual void		setEnergyPoints(int energyPoints);
		virtual void		setAttackDamage(int attackDamage);

		void 		attack(const std::string& target);
		void 		takeDamage(unsigned int amount);
		void 		beRepaired(unsigned int amount);

	protected:
		std::string		_name;
		int				_hitPoints;
		int				_energyPoints;
		int				_attackDamage;	

};

#endif