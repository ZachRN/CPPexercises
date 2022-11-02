#include "Bureaucrat.hpp"
#include <iostream>

Bureaucrat::Bureaucrat(std::string to_name, int to_grade) :
name(to_name)	
{
	if (to_grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	else if (to_grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	grade = to_grade;
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
	int n = getGrade();

	if (n == 1)
		throw (Bureaucrat::GradeTooHighException());
	setGrade(n - 1);
}

void			Bureaucrat::decreaseGrade(void)
{
	int n = getGrade();

	if (n == 150)
		throw (Bureaucrat::GradeTooLowException());
	setGrade(n + 1);
}

std::ostream& operator<<(std::ostream &stream, const Bureaucrat &obj)
{
	stream <<  obj.getName() << " bureaucrat grade " << obj.getGrade();
	return (stream);
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Bureaucrat Grade Too High Exception");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Bureaucrat Grade Too Low Exception");
}
