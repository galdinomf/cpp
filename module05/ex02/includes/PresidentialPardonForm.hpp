#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	public:
		PresidentialPardonForm( std::string );
		PresidentialPardonForm( const PresidentialPardonForm & src );
		PresidentialPardonForm& operator = ( const PresidentialPardonForm & rhs);
		~PresidentialPardonForm( void );

		std::string	getTargetName( void ) const;

		void	execute(Bureaucrat const & executor) const;

	private:
		std::string _targetName;
};

#endif