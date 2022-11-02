#include "../includes/Cat.hpp"
#include <iostream>

Cat::Cat(void)
{
	std::cout << "Cat Class Constructed" << std::endl;
	setType("Cat");
}

Cat::Cat(const Cat &src)
{
	std::cout << "I made myself them same!" << std::endl;
	setType(src.getType());
}

Cat& Cat::operator=(const Cat &src)
{
	std::cout << "I copied everything about that Cat!" << std::endl;
	setType(src.getType());
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat Class Deconstructed" << std::endl;
}

void			Cat::makeSound(void) const
{
	std::cout << "*Meow*" << std::endl;
}