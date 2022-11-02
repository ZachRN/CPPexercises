#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	protected:
		std::string	type;
	public:
		std::string getType(void) const;
		void		setType(std::string name);

		virtual void			makeSound(void) const;

		WrongAnimal();
		WrongAnimal(const WrongAnimal &src);
		WrongAnimal& operator=(const WrongAnimal &src);
		virtual ~WrongAnimal();
};

#endif
