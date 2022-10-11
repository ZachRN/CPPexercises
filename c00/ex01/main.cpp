#include <iostream>
#include "PhoneBook.hpp"

void	display_options(void)
{
	std::cout << "Only Commands: ADD || SEARCH || EXIT" << std::endl;
}

int main(void)
{
	PhoneBook phonebook;
	std::string user_input;

	display_options();
	while (user_input != "EXIT")
	{
		std::cout << "Command:";
		getline(std::cin, user_input);
		if (user_input == "ADD")
			phonebook.add_contact();
		else if (user_input == "SEARCH")
			phonebook.search_contact();
		else if (std::cin.eof())
			break ;
	}
}