#include "PresidentialPardonForm.hpp"
#include <fstream>

Presidential::Presidential(std::string to_target) : 
Form("Presidential Pardon Form", 25, 5),
target(to_target)
{
}

Presidential::Presidential(const Presidential &src) :
Form("Presidential Pardon Form", 25, 5),
target(src.getTarget())
{

}

Presidential::~Presidential()
{
	
}

std::string	Presidential::getTarget(void) const
{
	return (this->target);
}

void		Presidential::execute(Bureaucrat const &executor) const
{
	if (!(executor.getGrade() < this->getexecuteGrade())) 
		throw (Form::FormExecuteTooLowException());
	std::cout << this->getTarget() << " has been paronded by Zaphod Beeblebrox." << std::endl;
}