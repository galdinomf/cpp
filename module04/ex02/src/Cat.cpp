#include "../includes/Cat.hpp"
#include <iostream>

Cat::Cat( void )
{
	std::cout << "Cat default constructor called." << std::endl;
	this->_type = "Cat";
	this->brain = new Brain();
}

Cat::Cat( const Cat & src ) : AAnimal()
{
	std::cout << "Cat copy constructor called." << std::endl;
	this->brain = new Brain();
	*this = src;
}

Cat&	Cat::operator = ( const Cat & rhs )
{
	std::cout << "Cat copy assignment operator called." << std::endl;
	this->_type = rhs.getType();
	for (int i = 0; i < 100; i++)
		this->brain->setIdea(rhs.brain->getIdea(i), i);
	return *this;
}

Cat::~Cat( void )
{
	std::cout << "Cat destructor called." << std::endl;
	delete this->brain;
}

Brain*	Cat::getBrain( void ) const
{
	return this->brain;
}

void	Cat::makeSound( void ) const
{
	std::cout << "Meow" << std::endl;
}