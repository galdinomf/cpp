#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <iostream>

class Form
{
	public:
		Form( void );
		Form( std::string name );
		Form( int signGrade, int execGrade );
		Form( std::string name, int signGrade, int execGrade );
		Form( const Form & src );
		Form& operator = ( const Form & rhs);
		~Form( void );

		std::string	getName( void ) const ;
		bool		getIsSigned( void ) const ;
		int			getSignGrade( void ) const ;
		int			getExecGrade( void ) const ;

		class	GradeTooHighException : public std::exception {
			const char* what() const throw() { return "Grade too high!"; }
		};

		class	GradeTooLowException : public std::exception {
			const char* what() const throw() { return "Grade too low!"; }
		};

	private:
		const std::string	_name;
		bool				_isSigned;
		const int			_signGrade;
		const int			_execGrade;
};

std::ostream & operator << (std::ostream & o, const Form & form);

#endif