#include "../includes/Dog.hpp"
#include <iostream>

Dog::Dog( void )
{
	std::cout << "Dog default constructor called." << std::endl;
	this->_type = "Dog";
	this->brain = new Brain();
}

Dog::Dog( const Dog & src )
{
	std::cout << "Dog copy constructor called." << std::endl;
	*this = src;
}

Dog&	Dog::operator = ( const Dog & rhs )
{
	std::cout << "Dog copy assignment operator called." << std::endl;
	this->_type = rhs.getType();
	for (int i = 0; i < 100; i++)
		this->brain->ideas[i].assign(rhs.brain->ideas[i]);
	return *this;
}

Dog::~Dog( void )
{
	std::cout << "Dog destructor called." << std::endl;
	delete this->brain;
}

void	Dog::makeSound( void ) const
{
	std::cout << "Woof" << std::endl;
}