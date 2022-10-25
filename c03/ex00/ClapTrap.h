#ifndef CLAPTRAP_HPP
#	define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	private:
		std::string _name;
		unsigned int 		_health;
		unsigned int 		_energy;
		unsigned int		_attack;
	public:
		std::string		getName(void) const;
		void			setName(std::string name);
		unsigned int	getHealth(void) const;
		void			setHealth(unsigned int hp);
		unsigned int	getEnergy(void) const;
		void			setEnergy(unsigned int energy);
		unsigned int	getAttack(void) const;
		void			setAttack(unsigned int attack);
		
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	stats(void) const;

		ClapTrap(std::string name="None");
		ClapTrap(const ClapTrap &src);
		ClapTrap& operator=(const ClapTrap &src);
		~ClapTrap();
};

#endif
