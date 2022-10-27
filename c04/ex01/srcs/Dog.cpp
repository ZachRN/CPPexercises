#include "Dog.hpp"
#include <iostream>

Dog::Dog(void)
{
	std::cout << "Dog Class Constructed" << std::endl;
	this->type = "Dog";
}

Dog::Dog(const Dog &src)
{
	std::cout << "I made myself them same!" << std::endl;
	setType(src.getType());
}

Dog& Dog::operator=(const Dog &src)
{
	std::cout << "I copied everything about that Dog!" << std::endl;
	setType(src.getType());
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog Class Deconstructed" << std::endl;
}

void			Dog::makeSound(void) const
{
	std::cout << "*Bark*" << std::endl;
}