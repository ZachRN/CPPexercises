#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
		std::string type;
	public:
		std::string getType(void) const;
		void		setType(std::string name);

		virtual void			makeSound(void) const; 

		Animal();
		Animal(const Animal &src);
		Animal& operator=(const Animal &src);
		virtual ~Animal();
};

#endif
