#ifndef ROBOTOMY_REQUEST_FORM_HPP
# define ROBOTOMY_REQUEST_FORM_HPP

#include "Form.hpp"
#include <iostream>

class Robotomy : public Form
{
	private:
		std::string target;
		static int i;
	public:
		Robotomy(std::string to_target="None");
		Robotomy(const Robotomy &src);
		virtual ~Robotomy();
	private:
		Robotomy& operator=(const Robotomy &src);
	public:
		std::string	getTarget(void) const;
	public:
		void		execute(Bureaucrat const &executor) const;
};

#endif