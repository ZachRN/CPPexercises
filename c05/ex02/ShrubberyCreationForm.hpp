#ifndef SHRUBBERY_CREATION_FORM_HPP
# define SHRUBBERY_CREATION_FORM_HPP

#include "Form.hpp"
#include <iostream>

class Shrub : public Form
{
	private:
		std::string target;
	public:
		Shrub(std::string to_target="None");
		Shrub(const Shrub &src);
		virtual ~Shrub();
	private:
		Shrub& operator=(const Shrub &src);
	public:
		std::string	getTarget(void) const;
	public:
		void		execute(Bureaucrat const &executor) const;
};

#endif