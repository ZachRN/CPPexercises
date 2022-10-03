#include <iostream>
#include "phonebook.hpp"

void	display_options(void)
{
	std::cout << "Only Commands: ADD || SEARCH || EXIT" << std::endl;
}

int main(void)
{
	PhoneBook phonebook;
	std::string user_input;

	display_options();
	while (true)
	{
		std::cin >> user_input;
		if (user_input.compare("ADD") == 0);
			add_user(phonebook);

	}
}