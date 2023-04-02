#include "../includes/AAnimal.hpp"
#include <iostream>

AAnimal::AAnimal( void )
{
	std::cout << "AAnimal default constructor called." << std::endl;
}

AAnimal::AAnimal( const AAnimal & src )
{
	std::cout << "AAnimal copy constructor called." << std::endl;
	*this = src;
}

AAnimal&	AAnimal::operator = ( const AAnimal & rhs )
{
	std::cout << "AAnimal copy assignment operator called." << std::endl;
	this->_type = rhs.getType();
	return *this;
}

AAnimal::~AAnimal( void )
{
	std::cout << "AAnimal destructor called." << std::endl;
}

void	AAnimal::makeSound( void ) const
{
	std::cout << "This shouldn't be printed." << std::endl;
}

std::string	AAnimal::getType( void ) const
{
	return this->_type;
}