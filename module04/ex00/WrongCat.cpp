#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat( void )
{
	std::cout << "WrongCat default constructor called." << std::endl;
	this->_type = "WrongCat";
}

WrongCat::WrongCat( const WrongCat & src )
{
	std::cout << "WrongCat copy constructor called." << std::endl;
	*this = src;
}

WrongCat&	WrongCat::operator = ( const WrongCat & rhs )
{
	std::cout << "WrongCat copy assignment operator called." << std::endl;
	this->_type = rhs.getType();
	return *this;
}

WrongCat::~WrongCat( void )
{
	std::cout << "WrongCat destructor called." << std::endl;
}

void	WrongCat::makeSound( void ) const
{
	std::cout << "Meow" << std::endl;
}