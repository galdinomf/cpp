#include "../includes/Bureaucrat.hpp"
#include <string>
#include <iostream>

Bureaucrat::Bureaucrat( void ) : _name("Unnamed")
{
	std::cout << "Bureaucrat default constructor called." << std::endl;
	this->_grade = 100;
}

Bureaucrat::Bureaucrat( int grade ) : _name("Unnamed")
{
	std::cout << "Bureaucrat default constructor called." << std::endl;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade = grade;
}

Bureaucrat::Bureaucrat( std::string new_name, int new_grade ) : _name(new_name)
{
	std::cout << "Bureaucrat default constructor called." << std::endl;
	if (new_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (new_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade = new_grade;
}

Bureaucrat::Bureaucrat( std::string new_name ) : _name(new_name)
{
	std::cout << "Bureaucrat default constructor called." << std::endl;
	this->_grade = 100;
}

Bureaucrat::Bureaucrat( const Bureaucrat & src ) : _name(src.getName())
{
	std::cout << "Bureaucrat copy constructor called." << std::endl;
	*this = src;
}

Bureaucrat&	Bureaucrat::operator = ( const Bureaucrat & rhs )
{
	std::cout << "Bureaucrat copy assignment operator called." << std::endl;
	this->_grade = rhs.getGrade();
	return *this;
}

Bureaucrat::~Bureaucrat( void )
{
	std::cout << "Bureaucrat destructor called." << std::endl;
}

std::string	Bureaucrat::getName() const
{
	return this->_name;
}

int	Bureaucrat::getGrade() const
{
	return this->_grade;
}

void	Bureaucrat::incGrade( void )
{
	if (this->_grade > 1)
		this->_grade--;
	else
		throw Bureaucrat::GradeTooHighException();
}

void	Bureaucrat::decGrade( void )
{
	if (this->_grade < 150)
		this->_grade++;
	else
		throw Bureaucrat::GradeTooLowException();
}

std::ostream& operator << (std::ostream & o, const Bureaucrat & bureaucrat)
{
	o << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return o;
}