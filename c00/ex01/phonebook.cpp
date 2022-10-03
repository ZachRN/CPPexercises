#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook(void)
{
	// std::cout << "Constructor Called!" << std::endl;
	this->contact_nbr = 0;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	// std::cout << "Deconstructor Called!" << std::endl;
	return ;
}

int		PhoneBook::get_contact_number(void)
{
	return (this->contact_nbr);
}

void	PhoneBook::set_next_contact(void)
{
	if (this->contact_nbr == 7)
		this->contact_nbr = 0;
	else
		this->contact_nbr++;
}

void	PhoneBook::add_contact(void)
{
	std::string Input[5];
	Contact contact = this->phonebook[this->contact_nbr];

	std::cout << "Enter First Name:";
	getline(std::cin, Input[0]);
	std::cout << "Enter Last Name:";
	getline(std::cin, Input[1]);
	std::cout << "Enter Nickname:";
	getline(std::cin, Input[2]);
	std::cout << "Enter Phone Number:";
	getline(std::cin, Input[3]);
	std::cout << "Enter Darkest Secret:";
	getline(std::cin, Input[4]);
	if (Input[0].empty() || Input[1].empty() || Input[2].empty() || Input[3].empty() || Input[4].empty())
	{
		std::cout << "One or more empty fields, Contact not updated" << std::endl;
		return ;
	}
	contact.set_first_name(Input[0]);
	contact.set_last_name(Input[1]);
	contact.set_nickname(Input[2]);
	contact.set_phone_nbr(Input[3]);
	contact.set_secret(Input[4]);
	this->phonebook[this->contact_nbr] = contact;
	this->set_next_contact();
}

static void	display_first_name(std::string first_name)
{
	int len = 0;

	len = first_name.length();
	if (len > 10)
		first_name = first_name.substr(0, 9).replace(9, 1, ".");
	else if (len < 10)
		first_name.insert(0, "          ", 0, 10 - len);
	std::cout << first_name << "|";
}

static void display_last_name(std::string last_name)
{
	int len = 0;

	len = last_name.length();
	if (len > 10)
		last_name = last_name.substr(0, 9).replace(9, 1, ".");
	else if (len < 10)
		last_name.insert(0, "          ", 0, 10 - len);
	std::cout << last_name << "|";
}

static void display_nickname(std::string nickname)
{
	int len = 0;

	len = nickname.length();
	if (len > 10)
		nickname = nickname.substr(0, 9).replace(9, 1, ".");
	else if (len < 10)
		nickname.insert(0, "          ", 0, 10 - len);
	std::cout << nickname << std::endl;
}

static int selected_index(void)
{
	int Selected = -1;
	std::string Input;

	std::cout << "Select a Index to get full information:";
	try
	{
		getline(std::cin, Input);
		Selected = std::stoi(Input, nullptr);
		return (Selected);
	}
	catch (...)
	{
		std::cout << "Index does not exist" << std::endl;
		return (-1);
	}
}

void	print_selected(Contact contact)
{
	if (contact.get_first_name().empty())
	{
		std::cout << "Contact not yet filled out!" << std::endl;
		return;
	}
	std::cout << "First Name:" << contact.get_first_name() << std::endl;
	std::cout << "Last Name:" << contact.get_last_name() << std::endl;
	std::cout << "Nickname:" << contact.get_nickname() << std::endl;
	std::cout << "Phone Number:" << contact.get_phone_nbr() << std::endl;
	std::cout << "Dark Secret:" << contact.get_secret() << std::endl;
}

void	PhoneBook::search_contact(void)
{
	int	i = 0;
	int	Selected = 0;
	if (this->phonebook[0].get_first_name().empty())
	{
		std::cout << "No Contacts added to Phonebook yet!" << std::endl;
		return ;
	}
	std::cout << "      INDEX|FIRST NAME| LAST NAME|  NICKNAME" << std::endl;
	while (i < 8)
	{
		if (this->phonebook[i].get_first_name().empty())
			break ;
		std::cout << "          " << i << "|";
		display_first_name(this->phonebook[i].get_first_name());
		display_last_name(this->phonebook[i].get_last_name());
		display_nickname(this->phonebook[i].get_nickname());
		i++;
	}
	Selected = selected_index();
	if (Selected < 0 || Selected > 7)
		return ;
	print_selected(this->phonebook[Selected]);
	return ;
}