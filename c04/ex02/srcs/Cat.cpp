#include "../includes/Cat.hpp"
#include <iostream>

Cat::Cat(void)
{
	std::cout << "Cat Class Constructed" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::Cat(const Cat &src)
{
	std::cout << "I made myself them same!" << std::endl;
	this->brain = new Brain(*src.brain);
	setType(src.getType());
}

Cat& Cat::operator=(const Cat &src)
{
	std::cout << "I copied everything about that Cat!" << std::endl;
	setType(src.getType());
	*this->brain = *src.brain; // might be wrong
	return (*this);
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "Cat Class Deconstructed" << std::endl;
}

void			Cat::makeSound(void) const
{
	std::cout << "*Meow*" << std::endl;
}

Brain*			Cat::getBrain(void) const
{
	return (this->brain);
}