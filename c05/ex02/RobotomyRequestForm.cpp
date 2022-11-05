#include "RobotomyRequestForm.hpp"
#include <fstream>

int	Robotomy::i = 0;

Robotomy::Robotomy(std::string to_target) : 
Form("Robotomy Request Form", 72, 45),
target(to_target)
{
}

Robotomy::Robotomy(const Robotomy &src) :
Form("Robotomy Request Form", 72, 45),
target(src.getTarget())
{

}

Robotomy::~Robotomy()
{
	
}

std::string	Robotomy::getTarget(void) const
{
	return (this->target);
}

void		Robotomy::execute(Bureaucrat const &executor) const
{
	if (!(executor.getGrade() < this->getexecuteGrade())) 
		throw (Form::FormExecuteTooLowException());
	if (Robotomy::i % 2 == 0)
		std::cout << this->getTarget() << " has been robotomized successfully" << std::endl;
	else
		std::cout << this->getTarget() << " has not been robotomized " << std::endl;
	Robotomy::i++;
}