#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie 
{
	private:
		std::string name;
	public:
		std::string get_name(void);
		void		set_name(std::string name);
		void		announce(void);

		Zombie(void);
		Zombie(std::string);
		~Zombie(void);
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);
Zombie	*zombieHorde(int amt, std::string name);

#endif
