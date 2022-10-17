#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	private:
		std::string name;
		Weapon		*type;
	public:
		std::string getName(void);
		void		setName(std::string name);
		void		attack(void);
		void		setWeapon(Weapon	&type);

		HumanB(std::string name, Weapon type);
		HumanB(std::string name = "None");
		~HumanB();
};

#endif
