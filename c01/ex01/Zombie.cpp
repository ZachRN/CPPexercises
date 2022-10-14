#include "Zombie.hpp"
#include <iostream>

void		Zombie::announce(void)
{
	std::cout << this->get_name() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string	Zombie::get_name(void)
{
	return (this->name);
}

void		Zombie::set_name(std::string name)
{
	this->name = name;
	return ;
}

Zombie::Zombie(std::string name) : name(name)
{
	return ;
}

Zombie::Zombie(void)
{
	return ;
}

Zombie::~Zombie(void)
{
	return ;
}

Zombie	*newZombie(std::string name)
{
	Zombie *zombie = new Zombie(name);
	return (zombie);
}

Zombie	*zombieHorde(int amt, std::string name)
{
	Zombie *horde = NULL;

	if (amt < 1)
	{
		std::cout << "A horde requires atleast one zombie" << std::endl;
		return horde;
	}	
	horde = new Zombie[amt];
	for (int i = 0; i < amt; i++)
		horde[i].set_name(name);
	return (horde);
}

void randomChump(std::string name)
{
	Zombie zombie = Zombie(name);
	zombie.announce();
	return ;
}