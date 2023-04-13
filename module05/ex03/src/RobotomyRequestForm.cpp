#include "../includes/AForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include <stdlib.h>
#include <time.h>

RobotomyRequestForm::RobotomyRequestForm( std::string target ) : AForm::AForm( "RobotomyRequestForm", 72, 45 )
{
	std::cout << "RobotomyRequestForm default constructor called." << std::endl;
	this->_targetName = target;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src ) : AForm::AForm( src.getName(), src.getSignGrade(), src.getExecGrade() )
{
	std::cout << "RobotomyRequestForm copy constructor called." << std::endl;
	this->_targetName = src.getTargetName();
	*this = src;
}

RobotomyRequestForm&	RobotomyRequestForm::operator = ( const RobotomyRequestForm & rhs )
{
	std::cout << "RobotomyRequestForm copy assignment operator called." << std::endl;
	if (this != &rhs)
	{
	// insert members copy here
	}
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm( void )
{
	std::cout << "RobotomyRequestForm destructor called." << std::endl;
}

std::string	RobotomyRequestForm::getTargetName( void ) const
{
	return this->_targetName;
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	float	p;

	(void) executor;
	/* initialize random seed: */
	srand (time(NULL));

	std::cout << " * Drilling noises * " << std::endl;
	p = (float) rand() / (float) RAND_MAX;
	if (p > 0.5)
		std::cout << _targetName << " has been successfully robotomized." << std::endl;
	else
		std::cout << "Rodotomy failed." << std::endl;
}