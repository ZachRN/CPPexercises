#include "Harl.hpp"
#include <iostream>

Harl::Harl(void)
{
	return ;
}

Harl::~Harl(void)
{
	return ;
}

void	Harl::debug(void)
{
	std::cout << "[DEBUG] I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
	std::cout << "[INFO] I cannot believe adding extra bacon costs more money. You didnt put enough bacon in my burger! If you did, I wouldnt be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[WARNING] I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ERROR] This is unacceptable! I want to speak to the manager now." << std::endl;
}

int	getCase(std::string level)
{
	std::string search[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int len = sizeof(search) / sizeof(search[0]);

	for (int i = 0; i < len; ++i)
	{
		if (level == search[i])
			return (i);
	}
	return (-1);
}

void	Harl::complain(std::string level)
{
	int id = getCase(level);
	void	(Harl::*container[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	if (id != -1)
		(this->*container[id])();
}