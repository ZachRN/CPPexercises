#include "Harl.hpp"
#include <iostream>

int main(void)
{
	Harl complainer;

	complainer.complain("DEBUG");
	complainer.complain("INFO");
	complainer.complain("WARNING");
	complainer.complain("ERROR");
	complainer.complain("WHAT");
}