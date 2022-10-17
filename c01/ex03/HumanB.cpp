#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string name)
: name(name)
{
	this->type = NULL;
	return ;
}

HumanB::HumanB(std::string name, Weapon type) 
: name(name)
{
	this->type = &type;
	return ;
}

HumanB::~HumanB(void)
{
	return ;
}

std::string	HumanB::getName(void)
{
	return (this->name);
}

void		HumanB::setName(std::string name)
{
	this->name = name;
}

void		HumanB::attack(void)	
{
	if (this->type)
		std::cout << this->name << " attacks with their " << (this->type)->getType() << std::endl;
	else
		std::cout << this->name << " swings with their fists" << std::endl;
}

void	HumanB::setWeapon(Weapon	&type)
{
	this->type = &type;
}
