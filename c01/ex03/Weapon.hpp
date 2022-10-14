#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
	private:
		std::string type;
	public:
		std::string getType(void);
		void		setType(std::string name);
		
		Weapon(std::string);
		~Weapon();
};

#endif
