#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat(void)
{
	std::cout << "WrongCat Class Constructed" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &src)
{
	std::cout << "I made myself them same!" << std::endl;
	setType(src.getType());
}

WrongCat& WrongCat::operator=(const WrongCat &src)
{
	std::cout << "I copied everything about that WrongCat!" << std::endl;
	setType(src.getType());
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Class Deconstructed" << std::endl;
}

void			WrongCat::makeSound(void) const
{
	std::cout << "*Wrong meow*" << std::endl;
}