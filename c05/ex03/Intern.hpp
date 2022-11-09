#ifndef INTERN_HPP
# define INTERN_HPP

#include "Form.hpp"

enum	 e_Forms
{
	Invalid = -1,
	ShrubberyCreationForm = 0,
	RobotomyRequestForm,
	PresidentialPardonForm
};

class Intern
{
	public:
		Intern(void);
		~Intern(void);
	private:
		Intern(const Intern &src);
		Intern& operator=(const Intern &src);
	public:
		Form*	makeForm(std::string Form, std::string target);
};

#endif
