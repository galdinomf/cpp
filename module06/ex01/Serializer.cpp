#include "Serializer.hpp"

Serializer::Serializer( void )
{
	std::cout << "Serializer default constructor called." << std::endl;
}

Serializer::Serializer( const Serializer & src )
{
	std::cout << "Serializer copy constructor called." << std::endl;
	*this = src;
}

Serializer&	Serializer::operator = ( const Serializer & rhs )
{
	std::cout << "Serializer copy assignment operator called." << std::endl;
	if (this != &rhs)
	{
	// insert members copy here
	}
	return *this;
}

Serializer::~Serializer( void )
{
	std::cout << "Serializer destructor called." << std::endl;
}

uintptr_t	Serializer::serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data*		Serializer::deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}