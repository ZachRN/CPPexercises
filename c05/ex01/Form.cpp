#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

Form::Form(std::string to_name, int sign, int execute) :
name(to_name),
signGrade(sign),
executeGrade(execute)
{
	signature = false;
}

Form::Form(const Form &src)
{

}

std::string	Form::getName(void) const
{
	return (name);
}

int			Form::getsignGrade(void) const
{
	return (signGrade);
}

int			Form::getexecuteGrade(void) const
{
	return (executeGrade);
}

bool		Form::getSignature(void) const
{
	return (signature);
}