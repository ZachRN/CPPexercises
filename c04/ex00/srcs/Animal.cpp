#include "../includes/Animal.hpp"
#include <iostream>

Animal::Animal(void)
{
	std::cout << "Animal Class Constructed" << std::endl;
	this->type = "Animal";
}

Animal::Animal(const Animal &src)
{
	std::cout << "I made myself them same!" << std::endl;
	setType(src.getType());
}

Animal& Animal::operator=(const Animal &src)
{
	std::cout << "I copied everything about that animal!" << std::endl;
	setType(src.getType());
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal Class Deconstructed" << std::endl;
}

std::string		Animal::getType(void) const
{
	return (this->type);
}

void			Animal::setType(std::string type)
{
	this->type = type;
}

void			Animal::makeSound(void) const
{
	std::cout << "*Animal Noise*" << std::endl;
}