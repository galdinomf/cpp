#include "NewClass.hpp"

NewClass::NewClass( void )
{
	std::cout << "NewClass default constructor called." << std::endl;
}

NewClass::NewClass( const NewClass & src )
{
	std::cout << "NewClass copy constructor called." << std::endl;
	*this = src;
}

NewClass&	NewClass::operator = ( const NewClass & rhs )
{
	std::cout << "NewClass copy assignment operator called." << std::endl;
	if (this != &rhs)
	{
	// insert members copy here
	}
	return *this;
}

NewClass::~NewClass( void )
{
	std::cout << "NewClass destructor called." << std::endl;
}