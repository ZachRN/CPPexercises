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

void randomChump(std::string name)
{
	Zombie zombie = Zombie(name);
	zombie.announce();
	return ;
}