#include <iostream>
#include "../includes/Animal.hpp"
#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"

int main()
{

	// std::cout << "-----------------------------------" << std::endl;
	// const Animal* meta = new Animal();
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();
	// std::cout << j->getType() << " " << std::endl;
	// std::cout << i->getType() << " " << std::endl;
	// i->makeSound(); //will output the cat sound!
	// j->makeSound();

	// meta->makeSound();

	std::cout << "-----------------------------------" << std::endl;
	const WrongAnimal* meta = new WrongAnimal();
	const Animal* j = new Dog();
	const WrongAnimal* i = new WrongCat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();

	meta->makeSound();

	std::cout << "-----------------------------------" << std::endl;

	std::cout << meta->getType() << " " << std::endl;

	std::cout << "-----------------------------------" << std::endl;

	const Dog d = Dog();
	std::cout << d.getType() << " " << std::endl;
	d.makeSound();
	std::cout << "-----------------------------------" << std::endl;
	const Cat c = Cat();
	std::cout << c.getType() << " " << std::endl;
	c.makeSound();
	std::cout << "-----------------------------------" << std::endl;
	const WrongCat wc = WrongCat();
	std::cout << wc.getType() << " " << std::endl;
	wc.makeSound();
	std::cout << "-----------------------------------" << std::endl;
	const WrongCat wc2 = wc;
	std::cout << wc.getType() << " " << std::endl;
	wc.makeSound();

	delete meta;
	delete i;
	delete j;


	return 0;

}