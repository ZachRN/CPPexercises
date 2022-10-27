#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Hello I constructed a ClapTrap!" << std::endl;
	_name = name;
	_health = 10;
	_maxhealth = 10;
	_energy = 10;
	_attack = 0;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
	std::cout << "Hello I made a copy of this ClapTrap for you!" << std::endl;
	_name = src.getName();
	_health = src.getHealth();
	_energy = src.getEnergy();
	_attack = src.getAttack();
}

ClapTrap& ClapTrap::operator=(const ClapTrap &src)
{
	std::cout << "Hello I stole contents of this ClapTrap for you!" << std::endl;
	_name = src.getName();
	_health = src.getHealth();
	_energy = src.getEnergy();
	_attack = src.getAttack();
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap is now powering Down!" << std::endl;
}

std::string ClapTrap::getName(void) const
{
	return (this->_name);
}

void		ClapTrap::setName(std::string name)
{
	this->_name = name;
}

unsigned int	ClapTrap::getHealth(void) const
{
	return (this->_health);
}

void		ClapTrap::setHealth(unsigned int hp)
{
	this->_health = hp;
}

unsigned int	ClapTrap::getEnergy(void) const
{
	return (this->_energy);
}

void		ClapTrap::setEnergy(unsigned int energy)
{
	this->_energy = energy;
}

unsigned int	ClapTrap::getAttack(void) const
{
	return (this->_attack);
}

void		ClapTrap::setAttack(unsigned int attack)
{
	this->_attack = attack;
}

unsigned int 	ClapTrap::getMaxhealth(void) const
{
	return (this->_maxhealth);
}

void			ClapTrap::setMaxhealth(unsigned int value)
{
	this->_maxhealth = value;
}

int noHpEnergy(const ClapTrap *robot)
{
	if (robot->getHealth() == 0)
	{
		std::cout << "Error: Can't Attack While Dead" << std::endl;
		return (1);
	}
	else if (robot->getEnergy() == 0)
	{
		std::cout << "Error: Out Of Energy" << std::endl;
		return (2);
	}
	return (0);
}

void	ClapTrap::attack(const std::string& target)
{
	if (noHpEnergy(this))
		return ;
	std::cout << "ClapTrap " << getName() << " attacks " << target <<
			", causing " << getAttack() << " points of damage!" << std::endl;
	setEnergy(getEnergy() - 1);
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (getHealth() == 0)
	{
		std::cout << "Error: The Target Is Already Dead" << std::endl;
		return ;
	}
	std::cout << "Boss this really hurts!" << std::endl;
	if (amount >= getHealth())
		setHealth(0);
	else
		setHealth(getHealth() - amount);	
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (noHpEnergy(this))
		return ;
	if (getHealth() == getMaxhealth())
	{
		std::cout << "I'm already fully repaired!" << std::endl;
		return ;
	}
	std::cout << "Patching myself up!" << std::endl;
	setHealth(getHealth() + amount);
	setEnergy(getEnergy() - 1);
}

void	ClapTrap::stats(void) const
{
	std::cout << getName() << std::endl;
	std::cout << "Health: " << getHealth() << "/" << getMaxhealth() << std::endl;
	std::cout << "Energy: " << getEnergy() << std::endl;
	std::cout << "Attack Power: " << getAttack() << std::endl;
}