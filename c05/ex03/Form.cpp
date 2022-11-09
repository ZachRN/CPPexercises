#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

Form::Form(std::string to_name, int sign, int execute) :
name(to_name),
signGrade(sign),
executeGrade(execute)
{
	if (signGrade < 1)
		throw (Form::GradeTooHighException());
	else if (signGrade > 150)
		throw (Form::GradeTooLowException());
	if (executeGrade < 1)
		throw (Form::GradeTooHighException());
	else if (executeGrade > 150)
		throw (Form::GradeTooHighException());
	signature = false;
}

Form::Form(const Form &src) :
name(src.getName()),
signGrade(src.getsignGrade()),
executeGrade(src.getexecuteGrade())
{
	signature = false;
}

Form& Form::operator=(const Form &src)
{
	signature = src.getSignature();
	return (*this);
}

Form::~Form()
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

void		Form::setSignature(void)
{
	if (!signature)
		signature = true;
}

std::ostream& operator<<(std::ostream &stream, const Form &obj)
{
	stream <<  "form name " << obj.getName() << " is signed " << obj.getSignature()
		<< " execution grade " << obj.getexecuteGrade() << " sign grade" << obj.getSignature();
	return (stream);
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Form Grade Too High Exception");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Form Grade Too Low Exception");
}

const char* Form::FormNotSignedException::what() const throw()
{
	return ("Form Not Signed Exception");
}

const char* Form::FormSignTooLowException::what() const throw()
{
	return ("Grade too low to Sign Exception");
}

const char* Form::FormExecuteTooLowException::what() const throw()
{
	return ("Grade too low to Execution Exception");
}

void		Form::beSigned(const Bureaucrat &obj)
{
	if (obj.getGrade() > this->getsignGrade())
		throw (Form::GradeTooLowException());
	this->setSignature();
}
