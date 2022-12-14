#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Dog : public Animal
{
	private:
		Brain *brain;
	public:
		Dog();
		Dog(const Dog &src);
		Dog& operator=(const Dog &src);
		virtual ~Dog();

		void			makeSound(void) const;
		Brain*			getBrain(void) const;
};

#endif
