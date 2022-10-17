#include "Harl.hpp"
#include <iostream>

int main(int argc, char *argv[])
{
	Harl complainer;

	if (argc < 2)
	{
		complainer.complain("nothing");
		return (EXIT_SUCCESS);
	}
	complainer.complain(argv[1]);
}