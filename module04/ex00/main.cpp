#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{

	const WrongAnimal* meta = new WrongAnimal();
	const Animal* j = new Dog();
	const WrongAnimal* i = new WrongCat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();

	meta->makeSound();

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
	std::cout << c.getType() << " " << std::endl;
	c.makeSound();

	delete meta;
	delete i;
	delete j;


	return 0;

}