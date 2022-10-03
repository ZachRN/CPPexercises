#include "Contact.hpp"
#include <iostream>

Contact::Contact(void)
{
	// std::cout << "Constructor Called!" << std::endl;
	return ;
}

Contact::~Contact(void)
{
	// std::cout << "Deconstructor Called!" << std::endl;
	return ;
}

void	Contact::set_first_name(std::string input)
{
	this->first_name = input;
}

std::string	Contact::get_first_name(void)
{
	return (this->first_name);
}

void	Contact::set_last_name(std::string input)
{
	this->last_name = input;
}

std::string	Contact::get_last_name(void)
{
	return (this->last_name);
}

void	Contact::set_nickname(std::string input)
{
	this->nickname = input;
}

std::string	Contact::get_nickname(void)
{
	return (this->nickname);
}

void	Contact::set_phone_nbr(std::string input)
{
	this->phone_nbr = input;
}

std::string	Contact::get_phone_nbr(void)
{
	return (this->phone_nbr);
}

void	Contact::set_secret(std::string input)
{
	this->secret = input;
}

std::string	Contact::get_secret(void)
{
	return (this->secret);
}