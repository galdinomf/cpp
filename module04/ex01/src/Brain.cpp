#include "../includes/Brain.hpp"
#include <iostream>

Brain::Brain( void )
{
	std::cout << "Brain default constructor called." << std::endl;
}

Brain::Brain( const Brain & src )
{
	std::cout << "Brain copy constructor called." << std::endl;
	*this = src;
}

Brain&	Brain::operator = ( const Brain & rhs )
{
	std::cout << "Brain copy assignment operator called." << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i].assign(rhs.ideas[i]);
	return *this;
}

Brain::~Brain( void )
{
	std::cout << "Brain destructor called." << std::endl;
}