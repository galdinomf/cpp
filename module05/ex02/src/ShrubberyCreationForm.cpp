#include "../includes/AForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ) : AForm::AForm( "ShrubberyCreationForm", 145, 137 )
{
	std::cout << "ShrubberyCreationForm default constructor called." << std::endl;
	this->_targetName = target;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & src ) : AForm::AForm( src.getName(), src.getSignGrade(), src.getExecGrade() )
{
	std::cout << "ShrubberyCreationForm copy constructor called." << std::endl;
	*this = src;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator = ( const ShrubberyCreationForm & rhs )
{
	std::cout << "ShrubberyCreationForm copy assignment operator called." << std::endl;
	if (this != &rhs)
	{
	// insert members copy here
	}
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void )
{
	std::cout << "ShrubberyCreationForm destructor called." << std::endl;
}

std::string	ShrubberyCreationForm::getTargetName( void )
{
	return this->_targetName;
}