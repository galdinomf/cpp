#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	public:
		ShrubberyCreationForm( std::string );
		ShrubberyCreationForm( const ShrubberyCreationForm & src );
		ShrubberyCreationForm& operator = ( const ShrubberyCreationForm & rhs);
		~ShrubberyCreationForm( void );

		std::string	getTargetName( void ) const;

	private:
		std::string _targetName;
};

#endif