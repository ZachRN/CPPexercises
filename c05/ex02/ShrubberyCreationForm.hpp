#ifndef SHRUBBERY_CREATION_FORM_HPP
# define SHRUBBERY_CREATION_FORM_HPP

#include "Form.hpp"

class Shrub : public Form
{
	public:
		Shrub(std::string target="None");
		Shrub(const Shrub &src);
		Shrub& operator=(const Shrub &src);
		virtual ~Shrub();
	private:
		std::string target;
	public:
		std::string getTarget(void);
		void		setTarget(void);
	public:
		void		action(void) const;
};

#endif