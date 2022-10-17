#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
	private:
		std::string name;
		Weapon		&type;
	public:
		std::string getName(void);
		void		setName(std::string name);
		void		attack(void);

		HumanA(std::string name, Weapon &type);
		~HumanA();
};

#endif
