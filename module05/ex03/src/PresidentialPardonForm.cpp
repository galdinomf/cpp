#include "../includes/AForm.hpp"
#include "../includes/Bureaucrat.hpp"
#include "../includes/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( std::string target ) : AForm::AForm( "PresidentialPardonForm", 25, 5 )
{
	std::cout << "PresidentialPardonForm default constructor called." << std::endl;
	this->_targetName = target;
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & src ) : AForm::AForm( src.getName(), src.getSignGrade(), src.getExecGrade() )
{
	std::cout << "PresidentialPardonForm copy constructor called." << std::endl;
	this->_targetName = src.getTargetName();
	*this = src;
}

PresidentialPardonForm&	PresidentialPardonForm::operator = ( const PresidentialPardonForm & rhs )
{
	std::cout << "PresidentialPardonForm copy assignment operator called." << std::endl;
	if (this != &rhs)
	{
	// insert members copy here
	}
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm( void )
{
	std::cout << "PresidentialPardonForm destructor called." << std::endl;
}

std::string	PresidentialPardonForm::getTargetName( void ) const
{
	return this->_targetName;
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	(void) executor;
	std::cout << this->getTargetName() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}