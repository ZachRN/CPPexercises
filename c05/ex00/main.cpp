#include "Bureaucrat.hpp"

int main(void)
{
    Bureaucrat john("John", 1);
    Bureaucrat bill;

    // Bureaucrat hill("Hill", 200);

    try
    {
        bill.decreaseGrade();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        john.increaseGrade();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        Bureaucrat Blam("Low", 151);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        Bureaucrat Blam("High", 0);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << john << std::endl;
}