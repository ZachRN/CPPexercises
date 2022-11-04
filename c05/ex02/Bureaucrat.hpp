#ifndef BUREACRAT_HPP
# define BUREACRAT_HPP

class Bureaucrat;

#include <iostream>
#include "Form.hpp"

class Bureaucrat
{
	public:
		Bureaucrat(std::string to_name="None", int to_grade=150);
		Bureaucrat(const Bureaucrat &src);
		Bureaucrat& operator=(const Bureaucrat &src);
		~Bureaucrat();
	private:
		const std::string	name;
		int					grade;
	public:
		std::string		getName(void) const;
		int				getGrade(void) const;
		void			setGrade(int n);
	public:
		void			increaseGrade(void);
		void			decreaseGrade(void);
		void			signForm(Form &obj);
	class GradeTooHighException : public std::exception
	{
		public:
			const char* what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		public:
			const char* what() const throw();
	};
};

std::ostream& operator<<(std::ostream &stream, const Bureaucrat &obj);

#endif
