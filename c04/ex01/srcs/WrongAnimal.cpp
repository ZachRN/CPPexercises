#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal(void)
{
	std::cout << "WrongAnimal Class Constructed" << std::endl;
	this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal &src)
{
	std::cout << "I made myself them same!" << std::endl;
	setType(src.getType());
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &src)
{
	std::cout << "I copied everything about that WrongAnimal!" << std::endl;
	setType(src.getType());
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Class Deconstructed" << std::endl;
}

std::string		WrongAnimal::getType(void) const
{
	return (this->type);
}

void			WrongAnimal::setType(std::string type)
{
	this->type = type;
}

void			WrongAnimal::makeSound(void) const
{
	std::cout << "*WrongAnimal Noise*" << std::endl;
}