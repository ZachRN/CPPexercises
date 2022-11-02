#include "../includes/Animal.hpp"
#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"
#include <iostream>

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;
	std::cout << "----------------------" << std::endl;
	const WrongAnimal* neta = new WrongAnimal();
	const WrongAnimal* k = new WrongCat();
	std::cout << neta->getType() << " " << std::endl;
	std::cout << k->getType() << " " << std::endl;
	k->makeSound(); //will output the cat sound!
	neta->makeSound();
	delete neta;
	delete k;
	return 0;
}
