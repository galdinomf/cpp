#ifndef AAFORM_HPP
# define AAFORM_HPP

# include <string>
# include <iostream>
//# include "Bureaucrat.hpp"
class Bureaucrat;

class AForm
{
	public:
		AForm( void );
		AForm( std::string name );
		AForm( int signGrade, int execGrade );
		AForm( std::string name, int signGrade, int execGrade );
		AForm( const AForm & src );
		AForm& operator = ( const AForm & rhs);
		~AForm( void );

		std::string	getName( void ) const ;
		bool		getIsSigned( void ) const ;
		int			getSignGrade( void ) const ;
		int			getExecGrade( void ) const ;

		void		beSigned( const Bureaucrat & bureaucrat );

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

std::ostream & operator << (std::ostream & o, const AForm & Aform);

#endif