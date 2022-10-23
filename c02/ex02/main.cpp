#include <iostream>
#include "Fixed.hpp"

int main( void )
{
	Fixed a(53.2331f);
	Fixed b(53.2391f);
	Fixed c(17);
	Fixed d(18);
	Fixed f;

	f = a + b;
	std::cout << f << std::endl;
	f = a - b;
	std::cout << f << std::endl;
	f = a * b;
	std::cout << f << std::endl;
	f = a / b;
	std::cout << f << std::endl;

	f = 18;
	f++;
	std::cout << f << std::endl;
	return 0;
}