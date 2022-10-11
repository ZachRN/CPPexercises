#include "Zombie.hpp"
#include <iostream>
void checkleaks(void)
{
	system("leaks -q brainz");
}
int main(void)
{
	Zombie *Leader;

	Leader = newZombie("Todd");
	Leader->announce();
	delete Leader;
	randomChump("Ddot");
}