#include "Brain.hpp"
#include <iostream>

Brain::Brain(void)
{
	std::cout << "This creature now has a brain" << std::endl;
}

Brain::Brain(const Brain &src)
{
	std::cout << "I stole all their ideas" << std::endl;
	for(int i = 0; i < 100; i++)
		setIdea(src.getIdea(i), i);
}

Brain& Brain::operator=(const Brain &src)
{
	std::cout << "I stole all their ideas" << std::endl;
	for(int i = 0; i < 100; i++)
		setIdea(src.getIdea(i), i);
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain is shutting down" << std::endl;
}

std::string	Brain::getIdea(int n) const
{
	return (this->ideas[n]);
}

void		Brain::setIdea(std::string idea, int n)
{
	this->ideas[n] = idea;
}