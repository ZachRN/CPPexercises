#include "../includes/Animal.hpp"
#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
#include "../includes/Brain.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"
#include <iostream>

int main()
{
	const Animal* A[6];
	const Cat* B;
	const Animal* C = new Animal();

	A[0] = new Cat();
	std::cout << "------" << std::endl;
	B = (Cat *)A[0];
	B->getBrain()->displayIdeas();
	std::cout << "------" << std::endl;
	A[1] = new Cat();
	std::cout << "------" << std::endl;
	A[2] = new Cat();
	std::cout << "------" << std::endl;
	A[3] = new Dog();
	std::cout << "------" << std::endl;
	A[4] = new Dog();
	std::cout << "------" << std::endl;
	A[5] = new Dog();
	std::cout << "------" << std::endl;

	for (int i = 0; i < 6; i++)
	{
		delete A[i];
		std::cout << "------" << std::endl;
	}

	// delete B;
	system("leaks -q Animal");
}
