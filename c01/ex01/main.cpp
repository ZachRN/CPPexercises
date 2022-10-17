#include "Zombie.hpp"
#include <iostream>

// void checkleaks(void)
// {
// 	system("leaks -q moarbrainz");
// }

int main(void)
{
	Zombie *Leader;
	Zombie *Horde;
	int		amt = 5;

	// atexit(checkleaks);
	Leader = newZombie("Todd");
	Leader->announce();
	delete Leader;
	randomChump("Ddot");
	Horde = zombieHorde(amt, "Seagull");
	for (int i = 0; i < amt; i++)
		Horde[i].announce();
	delete [] Horde;
}