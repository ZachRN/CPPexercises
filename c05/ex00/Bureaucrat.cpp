#include "Bureaucrat.hpp"
#include <iostream>

Bureaucrat::Bureaucrat(std::string to_name, int to_grade) :
name(name)	
{
	if (grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	else if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	grade = grade;
	return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) :
name(src.getName()),
grade(src.getGrade())
{
	return ;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &src)
{
	grade = src.getGrade();
	return (*this);
}

Bureaucrat::~Bureaucrat(void)
{
	return ;
}

std::string		Bureaucrat::getName(void) const
{
	return (name);
}

int				Bureaucrat::getGrade(void) const
{
	return (grade);
}

void			Bureaucrat::setGrade(int n)
{
	this->grade = n;
}

void			Bureaucrat::increaseGrade(void)
{

}

void			Bureaucrat::decreaseGrade(void)
{
	
}
