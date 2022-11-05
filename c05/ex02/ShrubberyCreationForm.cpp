#include "ShrubberyCreationForm.hpp"
#include <fstream>

Shrub::Shrub(std::string to_target) : 
Form("Shrubbery Creation Form", 145, 137),
target(to_target)
{
}

Shrub::Shrub(const Shrub &src) :
Form("Shrubbery Creation Form", 145, 137),
target(src.getTarget())
{

}

Shrub::~Shrub()
{

}

std::string	Shrub::getTarget(void) const
{
	return (this->target);
}

void		Shrub::execute(Bureaucrat const &executor) const
{
	if (!(executor.getGrade() < this->getexecuteGrade())) 
		throw (Form::FormExecuteTooLowException());
	std::ofstream myfile((target + "_shrubbery"));
	myfile << "ASCII trees" << std::endl;
	myfile.close();
}