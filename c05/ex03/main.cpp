#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
    Bureaucrat john("John", 1);
    Intern Tim;
    Form *type = Tim.makeForm("Robotomy Request", "Person");
    // Form *type = Tim.makeForm("Shrubbery Creation", "Person");
    // Form *type = Tim.makeForm("Presidential Pardon", "Person");
    type->beSigned(john);
    type->execute(john);
    delete (type);
    type = Tim.makeForm("bwa", "Person 2");
}