#include "../includes/AForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ) : AForm::AForm( "ShrubberyCreationForm", 145, 137 )
{
	std::cout << "ShrubberyCreationForm default constructor called." << std::endl;
	this->_targetName = target;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & src ) : AForm::AForm( src.getName(), src.getSignGrade(), src.getExecGrade() )
{
	std::cout << "ShrubberyCreationForm copy constructor called." << std::endl;
	this->_targetName = src.getTargetName();
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

std::string	ShrubberyCreationForm::getTargetName( void ) const
{
	return this->_targetName;
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::ofstream	ofs;

	ofs.open((_targetName + "_shrubbery").c_str(), std::ios::out | std::ios::trunc);
	ofs << "       A\n      / \\\n    B     C\n   / \\   / \\ \n  D   E F   G" << std::endl;
	ofs.close();
	(void) executor;
}