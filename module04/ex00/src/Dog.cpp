#include "../includes/Dog.hpp"
#include <iostream>

Dog::Dog( void )
{
	std::cout << "Dog default constructor called." << std::endl;
	this->_type = "Dog";
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
	return *this;
}

Dog::~Dog( void )
{
	std::cout << "Dog destructor called." << std::endl;
}

void	Dog::makeSound( void ) const
{
	std::cout << "Woof" << std::endl;
}