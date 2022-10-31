#ifndef BUREACRAT_HPP
# define BUREACRAT_HPP

#include <iostream>

class Bureaucrat
{
	public:
		Bureaucrat();
		Bureaucrat(const Bureaucrat &src);
		Bureaucrat& operator=(const Bureaucrat &src);
		~Bureaucrat();
	private:
		const std::string	name;
		int	grade;
	public:

};

class Exception
{
	public:
		Exception(std::string msg);
		~Exception();
	private:
		std::string	error;


};

#endif
