#include "Intern.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern(void)
{
	
}

Intern::~Intern(void)
{

}

int	getCase(std::string level)
{
	std::string search[] = {"Shrubbery Creation", "Robotomy Request", "Presidential Pardon"};
	int len = sizeof(search) / sizeof(search[0]);

	for (int i = 0; i < len; ++i)
	{
		if (level == search[i])
			return (i);
	}
	return (Invalid);
}

Form*	Intern::makeForm(std::string Type, std::string target)
{
	Form *to_return = NULL;
	switch (getCase(Type))
	{
		case ShrubberyCreationForm:
			to_return = new Shrub(target);
			break;
		case RobotomyRequestForm:
			to_return = new Robotomy(target);
			break;
		case PresidentialPardonForm:
			to_return = new Presidential(target);
			break;
		default:
			std::cout << "Invalid Form Creation name" << std::endl;
			return (to_return);
	}
	std::cout << "Intern creates " << Type << std::endl;
	return (to_return);
}
