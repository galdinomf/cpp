#include <iostream>
#include "../includes/Animal.hpp"
#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"

int main()
{
	const Animal* animals[4];
	int	i;

	std::cout << "----------- first cat ------------" << std::endl;
	animals[0] = new Cat();
	std::cout << "---------- second cat ------------" << std::endl;
	animals[1] = new Cat();
	std::cout << "----------- first dog ------------" << std::endl;
	animals[2] = new Dog();
	std::cout << "---------- second dog ------------" << std::endl;
	animals[3] = new Dog();

	const Animal a(*animals[0]);
	std::cout << "address of a: " << &a << std::endl;
	std::cout << "address of *animals[0]: " << animals[0] << std::endl;

	std::cout << "Type of a : " << a.getType() << std::endl;

	std::cout << "brain of a: " << ((Cat*) &a)->getBrain() << std::endl;
	std::cout << "brain of *animals[0]: " << ((Cat*) animals[0])->getBrain() << std::endl;

	const Animal	*p;
	for (i = 0; i < 4; i++)
	{
		std::cout << "----------- deleting animals[" << i <<  "] ------------" << std::endl;
		p = animals[i];
		delete p;
	}
	return 0;
}

// int main()
// {
// 	const Animal* j = new Dog();
// 	const Animal* i = new Cat();
// 	delete j;//should not create a leak
// 	delete i;
	
// 	return 0;
// }