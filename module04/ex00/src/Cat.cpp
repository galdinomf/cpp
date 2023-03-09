#include "../includes/Cat.hpp"
#include <iostream>

Cat::Cat( void )
{
	std::cout << "Cat default constructor called." << std::endl;
	this->_type = "Cat";
}

Cat::Cat( const Cat & src )
{
	std::cout << "Cat copy constructor called." << std::endl;
	*this = src;
}

Cat&	Cat::operator = ( const Cat & rhs )
{
	std::cout << "Cat copy assignment operator called." << std::endl;
	this->_type = rhs.getType();
	return *this;
}

Cat::~Cat( void )
{
	std::cout << "Cat destructor called." << std::endl;
}

void	Cat::makeSound( void ) const
{
	std::cout << "Meow" << std::endl;
}