#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
    Bureaucrat john("John", 1);
    Bureaucrat bill;
    Form orders("Order 101", 75, 75);

    std::cout << orders << std::endl;

    bill.signForm(orders);
    john.signForm(orders);

}