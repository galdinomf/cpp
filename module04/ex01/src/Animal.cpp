#include "../includes/Animal.hpp"
#include <iostream>

Animal::Animal( void )
{
	std::cout << "Animal default constructor called." << std::endl;
}

Animal::Animal( const Animal & src )
{
	std::cout << "Animal copy constructor called." << std::endl;
	*this = src;
}

Animal&	Animal::operator = ( const Animal & rhs )
{
	std::cout << "Animal copy assignment operator called." << std::endl;
	this->_type = rhs.getType();
	return *this;
}

Animal::~Animal( void )
{
	std::cout << "Animal destructor called." << std::endl;
}

void	Animal::makeSound( void ) const
{
	std::cout << "This shouldn't be printed." << std::endl;
}

std::string	Animal::getType( void ) const
{
	return this->_type;
}