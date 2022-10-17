#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &type) 
: name(name), type(type)
{
	return ;
}

HumanA::~HumanA(void)
{
	return ;
}

std::string	HumanA::getName(void)
{
	return (this->name);
}

void		HumanA::setName(std::string name)
{
	this->name = name;
}

void		HumanA::attack(void)
{
	std::cout << this->name << " attacks with their " << this->type.getType() << std::endl;
}