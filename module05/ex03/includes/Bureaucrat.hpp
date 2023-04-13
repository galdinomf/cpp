#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
//# include "AForm.hpp"
class AForm;

class Bureaucrat
{
	public:
		Bureaucrat( void );
		Bureaucrat( int grade );
		Bureaucrat( std::string new_name );
		Bureaucrat( std::string new_name, int new_grade );
		Bureaucrat( const Bureaucrat & src );
		Bureaucrat& operator = ( const Bureaucrat & rhs);
		~Bureaucrat( void );

		std::string	getName() const;
		int			getGrade() const;
		void		incGrade();
		void		decGrade();

		void	signForm( AForm & form ) const;
		void	executeForm(AForm const & form) const;

		class GradeTooHighException : public std::exception {
		public:
			GradeTooHighException( void ) {}
			const char* what() const throw() {
			return "Grade too high!";
			}
		};

		class GradeTooLowException : public std::exception {
		public:
			GradeTooLowException( void ) {}
			const char* what() const throw() {
			return "Grade too low!";
			}
		};

	private:
		const std::string	_name;
		int					_grade;

};

std::ostream& operator << (std::ostream & o, const Bureaucrat & bureaucrat);

#endif