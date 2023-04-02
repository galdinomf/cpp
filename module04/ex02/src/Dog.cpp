#include "../includes/Dog.hpp"
#include <iostream>

Dog::Dog( void )
{
	std::cout << "Dog default constructor called." << std::endl;
	this->_type = "Dog";
	this->brain = new Brain();
}

Dog::Dog( const Dog & src ) : AAnimal()
{
	std::cout << "Dog copy constructor called." << std::endl;
	this->brain = new Brain();
	*this = src;
}

Dog&	Dog::operator = ( const Dog & rhs )
{
	std::cout << "Dog copy assignment operator called." << std::endl;
	this->_type = rhs.getType();
	for (int i = 0; i < 100; i++)
		this->brain->setIdea(rhs.brain->getIdea(i), i);
	return *this;
}

Dog::~Dog( void )
{
	std::cout << "Dog destructor called." << std::endl;
	delete this->brain;
}

Brain*	Dog::getBrain( void ) const
{
	return this->brain;
}

void	Dog::makeSound( void ) const
{
	std::cout << "Woof" << std::endl;
}