#include <iostream>
#include "FragTrap.hpp"

int main(void)
{
	FragTrap battlebud("yppaZ");
	std::string input;

	while (!std::cin.eof())
	{
		std::cout << "Action:";
		getline(std::cin, input);
		if (input == "attack")
			battlebud.attack("The Creator");
		else if (input == "takeDamage")
			battlebud.takeDamage(1);
		else if (input == "beRepaired")
			battlebud.beRepaired(1);
		else if (input == "stats")
			battlebud.stats();
		else if (input == "highFivesGuys")
			battlebud.highFivesGuys();
	}
}