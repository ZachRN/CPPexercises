#include "../includes/Brain.hpp"
#include <iostream>

Brain::Brain(void)
{
	std::cout << "This creature now has a brain" << std::endl;
	for(int i = 0; i < 100; i++)
		setIdea(("Idea #" + std::to_string(i)), i);
}

Brain::Brain(const Brain &src)
{
	std::cout << "I stole all their ideas" << std::endl;
	for(int i = 0; i < 100; i++)
		setIdea(src.getIdea(i), i);
}

Brain& Brain::operator=(const Brain &src)
{
	if (&src == this)
		return (*this);
	std::cout << "I stole all their ideas" << std::endl;
	for(int i = 0; i < 100; i++)
		setIdea(src.getIdea(i), i);
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain Clas Deconstructed" << std::endl;
}

std::string	Brain::getIdea(int n) const
{
	return (this->ideas[n]);
}

void		Brain::setIdea(std::string idea, int n)
{
	this->ideas[n] = idea;
}

void		Brain::displayIdeas(void) const
{
	for (int i = 0; i < 100; i++)
		std::cout << getIdea(i) << std::endl;
}