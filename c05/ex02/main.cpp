#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
    Bureaucrat john("John", 1);
    Bureaucrat bill("Bill", 75);
    Form *Order = new Shrub("Robert");

    try
    {
        bill.signForm(*Order);
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
      try
    {
        john.executeForm(*Order);
    }
    catch(const std::exception& e)
    {
         std::cout << e.what() << std::endl;
    }
    delete Order;

    Order = new Robotomy("Zinobias");
    try
    {
        john.signForm(*Order);
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        john.executeForm(*Order);
        john.executeForm(*Order);
    }
    catch(const std::exception& e)
    {
         std::cout << e.what() << std::endl;
    }
    
    Order = new Presidential("Zinobias");
    try
    {
        john.signForm(*Order);
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        bill.executeForm(*Order);
        john.executeForm(*Order);
    }
    catch(const std::exception& e)
    {
         std::cout << e.what() << std::endl;
    }
    delete Order;
}