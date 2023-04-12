#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	public:
		RobotomyRequestForm( std::string );
		RobotomyRequestForm( const RobotomyRequestForm & src );
		RobotomyRequestForm& operator = ( const RobotomyRequestForm & rhs);
		~RobotomyRequestForm( void );

		std::string	getTargetName( void ) const;

	private:
		std::string _targetName;
};

#endif