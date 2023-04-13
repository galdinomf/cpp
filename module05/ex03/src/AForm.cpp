#include "../includes/AForm.hpp"
#include "../includes/Bureaucrat.hpp"

AForm::AForm( void ) : _name("Unnamed"), _isSigned(false), _signGrade(150), _execGrade(150)
{
	std::cout << "AForm default constructor called." << std::endl;
}

AForm::AForm( std::string name ) : _name(name), _isSigned(false), _signGrade(150), _execGrade(150)
{
	std::cout << "AForm default constructor called." << std::endl;
}

AForm::AForm( int signGrade, int execGrade ) : _name("Unnamed"), _isSigned(false), _signGrade(signGrade), _execGrade(execGrade)
{
	std::cout << "AForm default constructor called." << std::endl;
	if ((signGrade > 150) || (execGrade > 150))
		throw AForm::GradeTooLowException();
	if ((execGrade < 1) || (signGrade < 1))
		throw AForm::GradeTooHighException();
}

AForm::AForm( std::string name, int signGrade, int execGrade ) : _name(name), _isSigned(false), _signGrade(signGrade), _execGrade(execGrade)
{
	std::cout << "AForm default constructor called." << std::endl;
	if ((signGrade > 150) || (execGrade > 150))
		throw AForm::GradeTooLowException();
	if ((execGrade < 1) || (signGrade < 1))
		throw AForm::GradeTooHighException();
}

AForm::AForm( const AForm & src ) : _name(src.getName()), _isSigned(src.getIsSigned()), _signGrade(src.getSignGrade()), _execGrade(src.getExecGrade())
{
	std::cout << "AForm copy constructor called." << std::endl;
	*this = src;
}

AForm&	AForm::operator = ( const AForm & rhs )
{
	std::cout << "AForm copy assignment operator called." << std::endl;
	const_cast<std::string&>(_name) = rhs.getName();
	_isSigned = rhs.getIsSigned();
	const_cast<int&>(_signGrade) = rhs.getSignGrade();
	const_cast<int&>(_execGrade) = rhs.getExecGrade();
	return *this;
}

AForm::~AForm( void )
{
	std::cout << "AForm destructor called." << std::endl;
}

std::string	AForm::getName( void ) const 
{
	return this->_name;
}

bool	AForm::getIsSigned( void ) const 
{
	return this->_isSigned;
}
int		AForm::getSignGrade( void ) const 
{
	return this->_signGrade;
}

int		AForm::getExecGrade( void ) const 
{
	return this->_execGrade;
}

void	AForm::beSigned( const Bureaucrat & bureaucrat )
{
	if (bureaucrat.getGrade() <= this->_signGrade)
		this->_isSigned = true;
	else
		throw AForm::GradeTooLowException();
}

void	AForm::canBeExecuted( const Bureaucrat & executor ) const
{
	if (!this->_isSigned)
		throw AForm::FormNotSignedException();
	else if (executor.getGrade() > this->_execGrade)
		throw Bureaucrat::GradeTooLowException();
}

std::ostream & operator << (std::ostream & o, const AForm & Aform)
{
	std::string	signStatus;

	if (Aform.getIsSigned())
		signStatus = " is signed";
	else
		signStatus = " is not signed";
	o << Aform.getName() << signStatus << ". It has a "\
	  << Aform.getSignGrade() << " points sign grade and a " << Aform.getExecGrade()\
	  << " points execution grade.";
	return o;
}