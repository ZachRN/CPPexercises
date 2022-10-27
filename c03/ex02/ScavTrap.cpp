#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "Forget that old generation model, ScavTrap is here!" << std::endl;
	setName(name);
	setHealth(100);
	setMaxhealth(100);
	setEnergy(50);
	setAttack(20);
}

ScavTrap::ScavTrap(const ScavTrap &src)
{
	std::cout << "Hello I made a copy of this ScavTrap for you!" << std::endl;
	setName(src.getName());
	setHealth(src.getHealth());
	setMaxhealth(src.getMaxhealth());
	setEnergy(src.getEnergy());
	setAttack(src.getAttack());
}

ScavTrap& ScavTrap::operator=(const ScavTrap &src)
{
	std::cout << "Hello I stole contents of this ScavTrap for you!" << std::endl;
	setName(src.getName());
	setHealth(src.getHealth());
	setMaxhealth(src.getMaxhealth());
	setEnergy(src.getEnergy());
	setAttack(src.getAttack());
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "The ClapTrap can use my spare parts" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (noHpEnergy(this))
		return ;
	std::cout << "ScavTrap " << getName() << " attacks " << target <<
			", causing " << getAttack() << " points of damage!" << std::endl;
	setEnergy(getEnergy() - 1);
}

void	ScavTrap::guardGate(void)
{
	std::cout << "I have entered guard mode boss!" << std::endl;
}