#ifndef FORM_HPP
# define FORM_HPP

class Form;

#include "Bureaucrat.hpp"
#include <iostream>

class Form
{
	public:
		Form(std::string to_name="None", int sign=150, int execute=150);
		Form(const Form &src);
		Form& operator=(const Form &src);
		~Form();
    private:
        const std::string	name;
        const int			signGrade;
		const int			executeGrade;
        bool				signature;
	public:
		std::string	getName(void) const;
		int			getsignGrade(void) const;
		int			getexecuteGrade(void) const;
		bool		getSignature(void) const;
		void		setSignature(void);
	public:
		void		beSigned(const Bureaucrat &obj);
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

std::ostream& operator<<(std::ostream &stream, const Form &obj);

#endif
