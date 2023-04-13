#ifndef INTERN_HPP
# define INTERN_HPP

# include <string>
# include "AForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"

class Intern
{
	public:
		Intern( void );
		Intern( const Intern & src );
		Intern& operator = ( const Intern & rhs);
		~Intern( void );

		AForm* makeForm( std::string form_name, std::string target_name);
};

#endif