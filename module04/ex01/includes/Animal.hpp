#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>

class Animal
{
	public:
		Animal( void );
		Animal( const Animal & src );
		Animal& operator = ( const Animal & rhs);
		virtual ~Animal( void );
		
		std::string	getType( void ) const;

		virtual void makeSound( void ) const;

	protected:
		std::string	_type;
};

#endif