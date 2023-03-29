#include "../includes/Form.hpp"

Form::Form( void ) : _name("Unnamed"), _isSigned(false), _signGrade(150), _execGrade(150)
{
	std::cout << "Form default constructor called." << std::endl;
}

Form::Form( std::string name ) : _name(name), _isSigned(false), _signGrade(150), _execGrade(150)
{
	std::cout << "Form default constructor called." << std::endl;
}

Form::Form( int signGrade, int execGrade ) : _name("Unnamed"), _isSigned(false), _signGrade(signGrade), _execGrade(execGrade)
{
	std::cout << "Form default constructor called." << std::endl;
	if ((signGrade > 150) || (execGrade > 150))
		throw Form::GradeTooLowException();
	if ((execGrade < 1) || (signGrade < 1))
		throw Form::GradeTooHighException();
}

Form::Form( std::string name, int signGrade, int execGrade ) : _name(name), _isSigned(false), _signGrade(signGrade), _execGrade(execGrade)
{
	std::cout << "Form default constructor called." << std::endl;
	if ((signGrade > 150) || (execGrade > 150))
		throw Form::GradeTooLowException();
	if ((execGrade < 1) || (signGrade < 1))
		throw Form::GradeTooHighException();
}

Form::Form( const Form & src ) : _name(src.getName()), _isSigned(src.getIsSigned()), _signGrade(src.getSignGrade()), _execGrade(src.getExecGrade())
{
	std::cout << "Form copy constructor called." << std::endl;
	*this = src;
}

Form&	Form::operator = ( const Form & rhs )
{
	std::cout << "Form copy assignment operator called." << std::endl;
	const_cast<std::string&>(_name) = rhs.getName();
	_isSigned = rhs.getIsSigned();
	const_cast<int&>(_signGrade) = rhs.getSignGrade();
	const_cast<int&>(_execGrade) = rhs.getExecGrade();
	return *this;
}

Form::~Form( void )
{
	std::cout << "Form destructor called." << std::endl;
}

std::string	Form::getName( void ) const 
{
	return this->_name;
}

bool	Form::getIsSigned( void ) const 
{
	return this->_isSigned;
}
int		Form::getSignGrade( void ) const 
{
	return this->_signGrade;
}

int		Form::getExecGrade( void ) const 
{
	return this->_execGrade;
}

std::ostream & operator << (std::ostream & o, const Form & form)
{
	std::string	signStatus;

	if (form.getIsSigned())
		signStatus = " is signed";
	else
		signStatus = " is not signed";
	o << form.getName() << signStatus << ". It has a "\
	  << form.getSignGrade() << " points sign grade and a " << form.getExecGrade()\
	  << " points execution grade.";
	return o;
}