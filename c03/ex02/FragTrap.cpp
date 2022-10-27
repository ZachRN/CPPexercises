#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(std::string name)
{
	std::cout << "This FragTrap brings the pain" << std::endl;
	setName(name);
	setHealth(100);
	setMaxhealth(100);
	setEnergy(100);
	setAttack(30);
}

FragTrap::FragTrap(const FragTrap &src)
{
	std::cout << "All Frags traps are made the same" << std::endl;
	setName(src.getName());
	setHealth(src.getHealth());
	setMaxhealth(src.getMaxhealth());
	setEnergy(src.getEnergy());
	setAttack(src.getAttack());
}

FragTrap& FragTrap::operator=(const FragTrap &src)
{
	std::cout << "All Frags traps are copied the same" << std::endl;
	setName(src.getName());
	setHealth(src.getHealth());
	setMaxhealth(src.getMaxhealth());
	setEnergy(src.getEnergy());
	setAttack(src.getAttack());
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap doesn't get paid enough for this" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "Up high friend!" << std::endl;
}
