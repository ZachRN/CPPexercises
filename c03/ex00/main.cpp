#include <iostream>
#include "ClapTrap.h"

int main(void)
{
	ClapTrap battlebud("Zapster");
	std::string input;

	while (!std::cin.eof())
	{
		std::cout << "Action:";
		getline(std::cin, input);
		if (input == "attack")
			battlebud.attack("Target Dummy");
		else if (input == "takeDamage")
			battlebud.takeDamage(1);
		else if (input == "beRepaired")
			battlebud.beRepaired(1);
		else if (input == "stats")
			battlebud.stats();
	}
}