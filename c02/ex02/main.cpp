// #include <iostream>
// #include "Fixed.hpp"
// int main( void ) {
// Fixed a;
// Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
// std::cout << a << std::endl;
// std::cout << ++a << std::endl;
// std::cout << a << std::endl;
// std::cout << a++ << std::endl;
// std::cout << a << std::endl;
// std::cout << b << std::endl;
// std::cout << Fixed::max( a, b ) << std::endl;
// return 0;
// }

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

	f = 18.10f;
	std::cout << f << std::endl;
	if (++f > 19)
		std::cout << "F incremented prior to checking" << std::endl;
	std::cout << f << std::endl;
	if (!(f++ > 20))
		std::cout << "F incremented after checking" << std::endl;
	std::cout << f << std::endl;
	std::cout << "Min between " << a << " and " << c << " is:" << Fixed::min(a, c) << std::endl;
	std::cout << "Max between " << a << " and " << c << " is:" << Fixed::max(a, c) << std::endl;

	return 0;
}