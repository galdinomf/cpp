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
		virtual ~AForm( void );

		std::string		getName( void ) const ;
		bool			getIsSigned( void ) const ;
		int				getSignGrade( void ) const ;
		int				getExecGrade( void ) const ;

		void			beSigned( const Bureaucrat & bureaucrat );
		void			canBeExecuted( const Bureaucrat & executor ) const;
		virtual void	execute(Bureaucrat const & executor) const = 0;

		class	GradeTooHighException : public std::exception {
			const char* what() const throw() { return "Grade too high!"; }
		};

		class	GradeTooLowException : public std::exception {
			const char* what() const throw() { return "Grade too low!"; }
		};

		class	FormNotSignedException : public std::exception {
			const char* what() const throw() { return "Form is not signed!"; }
		};

	private:
		const std::string	_name;
		bool				_isSigned;
		const int			_signGrade;
		const int			_execGrade;
};

std::ostream & operator << (std::ostream & o, const AForm & Aform);

#endif