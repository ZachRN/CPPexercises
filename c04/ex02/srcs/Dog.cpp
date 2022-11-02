#include "../includes/Dog.hpp"
#include <iostream>

Dog::Dog(void)
{
	std::cout << "Dog Class Constructed" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::Dog(const Dog &src)
{
	this->brain = new Brain(*src.brain);
	setType(src.getType());
	std::cout << "I made myself them same!" << std::endl;
}

Dog& Dog::operator=(const Dog &src)
{
	setType(src.getType());
	*this->brain = *src.brain; // might be wrong
	std::cout << "I copied everything about that Dog!" << std::endl;
	return (*this);
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Dog Class Deconstructed" << std::endl;
}

void			Dog::makeSound(void) const
{
	std::cout << "*Bark*" << std::endl;
}

Brain*			Dog::getBrain(void) const
{
	return (this->brain);
}