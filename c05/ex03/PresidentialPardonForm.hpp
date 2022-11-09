#ifndef PRESIDENTIAL_PARDON_FORM_HPP
# define PRESIDENTIAL_PARDON_FORM_HPP

#include "Form.hpp"
#include <iostream>

class Presidential : public Form
{
	private:
		std::string target;
	public:
		Presidential(std::string to_target="None");
		Presidential(const Presidential &src);
		virtual ~Presidential();
	private:
		Presidential& operator=(const Presidential &src);
	public:
		std::string	getTarget(void) const;
	public:
		void		execute(Bureaucrat const &executor) const;
};

#endif