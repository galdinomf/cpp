#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>

class AAnimal
{
	public:
		AAnimal( void );
		AAnimal( const AAnimal & src );
		AAnimal& operator = ( const AAnimal & rhs);
		virtual ~AAnimal( void );
		
		std::string	getType( void ) const;

		virtual void makeSound( void ) const = 0;

	protected:
		std::string	_type;
};

#endif