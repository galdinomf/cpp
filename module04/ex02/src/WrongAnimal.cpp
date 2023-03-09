#include "../includes/WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal( void )
{
	std::cout << "WrongAnimal default constructor called." << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal & src )
{
	std::cout << "WrongAnimal copy constructor called." << std::endl;
	*this = src;
}

WrongAnimal&	WrongAnimal::operator = ( const WrongAnimal & rhs )
{
	std::cout << "WrongAnimal copy assignment operator called." << std::endl;
	this->_type = rhs.getType();
	return *this;
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << "WrongAnimal destructor called." << std::endl;
}

void	WrongAnimal::makeSound( void ) const
{
	std::cout << "This is WrongAnimal::makeSound's output." << std::endl;
}

std::string	WrongAnimal::getType( void ) const
{
	return this->_type;
}